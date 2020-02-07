// Generated by gencpp from file Controller/RCdata.msg
// DO NOT EDIT!


#ifndef CONTROLLER_MESSAGE_RCDATA_H
#define CONTROLLER_MESSAGE_RCDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace Controller
{
template <class ContainerAllocator>
struct RCdata_
{
  typedef RCdata_<ContainerAllocator> Type;

  RCdata_()
    : steering(0.0)
    , throttle(0.0)
    , sidemove(0.0)
    , record(0)  {
    }
  RCdata_(const ContainerAllocator& _alloc)
    : steering(0.0)
    , throttle(0.0)
    , sidemove(0.0)
    , record(0)  {
  (void)_alloc;
    }



   typedef float _steering_type;
  _steering_type steering;

   typedef float _throttle_type;
  _throttle_type throttle;

   typedef float _sidemove_type;
  _sidemove_type sidemove;

   typedef int32_t _record_type;
  _record_type record;





  typedef boost::shared_ptr< ::Controller::RCdata_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::Controller::RCdata_<ContainerAllocator> const> ConstPtr;

}; // struct RCdata_

typedef ::Controller::RCdata_<std::allocator<void> > RCdata;

typedef boost::shared_ptr< ::Controller::RCdata > RCdataPtr;
typedef boost::shared_ptr< ::Controller::RCdata const> RCdataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::Controller::RCdata_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::Controller::RCdata_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace Controller

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'Controller': ['/home/jjs/git/JScar/src/Controller/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::Controller::RCdata_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::Controller::RCdata_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::Controller::RCdata_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::Controller::RCdata_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::Controller::RCdata_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::Controller::RCdata_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::Controller::RCdata_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5ea6417589b70ad53907ff4ffc0f21d6";
  }

  static const char* value(const ::Controller::RCdata_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5ea6417589b70ad5ULL;
  static const uint64_t static_value2 = 0x3907ff4ffc0f21d6ULL;
};

template<class ContainerAllocator>
struct DataType< ::Controller::RCdata_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Controller/RCdata";
  }

  static const char* value(const ::Controller::RCdata_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::Controller::RCdata_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 steering\n"
"float32 throttle\n"
"float32 sidemove\n"
"int32 record\n"
;
  }

  static const char* value(const ::Controller::RCdata_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::Controller::RCdata_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.steering);
      stream.next(m.throttle);
      stream.next(m.sidemove);
      stream.next(m.record);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RCdata_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::Controller::RCdata_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::Controller::RCdata_<ContainerAllocator>& v)
  {
    s << indent << "steering: ";
    Printer<float>::stream(s, indent + "  ", v.steering);
    s << indent << "throttle: ";
    Printer<float>::stream(s, indent + "  ", v.throttle);
    s << indent << "sidemove: ";
    Printer<float>::stream(s, indent + "  ", v.sidemove);
    s << indent << "record: ";
    Printer<int32_t>::stream(s, indent + "  ", v.record);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROLLER_MESSAGE_RCDATA_H
