// Generated by gencpp from file ur3/join2.msg
// DO NOT EDIT!


#ifndef UR3_MESSAGE_JOIN2_H
#define UR3_MESSAGE_JOIN2_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ur3
{
template <class ContainerAllocator>
struct join2_
{
  typedef join2_<ContainerAllocator> Type;

  join2_()
    : pose(0.0)
    , velocity(0.0)
    , torque(0.0)  {
    }
  join2_(const ContainerAllocator& _alloc)
    : pose(0.0)
    , velocity(0.0)
    , torque(0.0)  {
  (void)_alloc;
    }



   typedef float _pose_type;
  _pose_type pose;

   typedef float _velocity_type;
  _velocity_type velocity;

   typedef float _torque_type;
  _torque_type torque;





  typedef boost::shared_ptr< ::ur3::join2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur3::join2_<ContainerAllocator> const> ConstPtr;

}; // struct join2_

typedef ::ur3::join2_<std::allocator<void> > join2;

typedef boost::shared_ptr< ::ur3::join2 > join2Ptr;
typedef boost::shared_ptr< ::ur3::join2 const> join2ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur3::join2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur3::join2_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ur3

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'ur3': ['/home/rafael/UR3/catkin_ur3/src/ur3/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ur3::join2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur3::join2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur3::join2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur3::join2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur3::join2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur3::join2_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur3::join2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bb3e6c5bd746641b03ce50dac21c6a43";
  }

  static const char* value(const ::ur3::join2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbb3e6c5bd746641bULL;
  static const uint64_t static_value2 = 0x03ce50dac21c6a43ULL;
};

template<class ContainerAllocator>
struct DataType< ::ur3::join2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur3/join2";
  }

  static const char* value(const ::ur3::join2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur3::join2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 pose\n"
"float32 velocity\n"
"float32 torque\n"
;
  }

  static const char* value(const ::ur3::join2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur3::join2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose);
      stream.next(m.velocity);
      stream.next(m.torque);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct join2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur3::join2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ur3::join2_<ContainerAllocator>& v)
  {
    s << indent << "pose: ";
    Printer<float>::stream(s, indent + "  ", v.pose);
    s << indent << "velocity: ";
    Printer<float>::stream(s, indent + "  ", v.velocity);
    s << indent << "torque: ";
    Printer<float>::stream(s, indent + "  ", v.torque);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UR3_MESSAGE_JOIN2_H
