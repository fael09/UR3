// Auto-generated. Do not edit!

// (in-package ur3.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class data_msg {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.pose = null;
      this.velocity = null;
      this.torque = null;
    }
    else {
      if (initObj.hasOwnProperty('pose')) {
        this.pose = initObj.pose
      }
      else {
        this.pose = new Array(5).fill(0);
      }
      if (initObj.hasOwnProperty('velocity')) {
        this.velocity = initObj.velocity
      }
      else {
        this.velocity = new Array(5).fill(0);
      }
      if (initObj.hasOwnProperty('torque')) {
        this.torque = initObj.torque
      }
      else {
        this.torque = new Array(5).fill(0);
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type data_msg
    // Check that the constant length array field [pose] has the right length
    if (obj.pose.length !== 5) {
      throw new Error('Unable to serialize array field pose - length must be 5')
    }
    // Serialize message field [pose]
    bufferOffset = _arraySerializer.float32(obj.pose, buffer, bufferOffset, 5);
    // Check that the constant length array field [velocity] has the right length
    if (obj.velocity.length !== 5) {
      throw new Error('Unable to serialize array field velocity - length must be 5')
    }
    // Serialize message field [velocity]
    bufferOffset = _arraySerializer.float32(obj.velocity, buffer, bufferOffset, 5);
    // Check that the constant length array field [torque] has the right length
    if (obj.torque.length !== 5) {
      throw new Error('Unable to serialize array field torque - length must be 5')
    }
    // Serialize message field [torque]
    bufferOffset = _arraySerializer.float32(obj.torque, buffer, bufferOffset, 5);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type data_msg
    let len;
    let data = new data_msg(null);
    // Deserialize message field [pose]
    data.pose = _arrayDeserializer.float32(buffer, bufferOffset, 5)
    // Deserialize message field [velocity]
    data.velocity = _arrayDeserializer.float32(buffer, bufferOffset, 5)
    // Deserialize message field [torque]
    data.torque = _arrayDeserializer.float32(buffer, bufferOffset, 5)
    return data;
  }

  static getMessageSize(object) {
    return 60;
  }

  static datatype() {
    // Returns string type for a message object
    return 'ur3/data_msg';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ac56bf4dd0724c825f70fe60ce2d2cd1';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32[5] pose
    float32[5] velocity
    float32[5] torque
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new data_msg(null);
    if (msg.pose !== undefined) {
      resolved.pose = msg.pose;
    }
    else {
      resolved.pose = new Array(5).fill(0)
    }

    if (msg.velocity !== undefined) {
      resolved.velocity = msg.velocity;
    }
    else {
      resolved.velocity = new Array(5).fill(0)
    }

    if (msg.torque !== undefined) {
      resolved.torque = msg.torque;
    }
    else {
      resolved.torque = new Array(5).fill(0)
    }

    return resolved;
    }
};

module.exports = data_msg;
