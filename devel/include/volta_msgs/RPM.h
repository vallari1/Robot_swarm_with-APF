// Generated by gencpp from file volta_msgs/RPM.msg
// DO NOT EDIT!


#ifndef VOLTA_MSGS_MESSAGE_RPM_H
#define VOLTA_MSGS_MESSAGE_RPM_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace volta_msgs
{
template <class ContainerAllocator>
struct RPM_
{
  typedef RPM_<ContainerAllocator> Type;

  RPM_()
    : left(0)
    , right(0)  {
    }
  RPM_(const ContainerAllocator& _alloc)
    : left(0)
    , right(0)  {
  (void)_alloc;
    }



   typedef int16_t _left_type;
  _left_type left;

   typedef int16_t _right_type;
  _right_type right;





  typedef boost::shared_ptr< ::volta_msgs::RPM_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::volta_msgs::RPM_<ContainerAllocator> const> ConstPtr;

}; // struct RPM_

typedef ::volta_msgs::RPM_<std::allocator<void> > RPM;

typedef boost::shared_ptr< ::volta_msgs::RPM > RPMPtr;
typedef boost::shared_ptr< ::volta_msgs::RPM const> RPMConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::volta_msgs::RPM_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::volta_msgs::RPM_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::volta_msgs::RPM_<ContainerAllocator1> & lhs, const ::volta_msgs::RPM_<ContainerAllocator2> & rhs)
{
  return lhs.left == rhs.left &&
    lhs.right == rhs.right;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::volta_msgs::RPM_<ContainerAllocator1> & lhs, const ::volta_msgs::RPM_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace volta_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::volta_msgs::RPM_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::volta_msgs::RPM_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::volta_msgs::RPM_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::volta_msgs::RPM_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::volta_msgs::RPM_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::volta_msgs::RPM_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::volta_msgs::RPM_<ContainerAllocator> >
{
  static const char* value()
  {
    return "09d1b2323a1aeae9343e81809a820b60";
  }

  static const char* value(const ::volta_msgs::RPM_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x09d1b2323a1aeae9ULL;
  static const uint64_t static_value2 = 0x343e81809a820b60ULL;
};

template<class ContainerAllocator>
struct DataType< ::volta_msgs::RPM_<ContainerAllocator> >
{
  static const char* value()
  {
    return "volta_msgs/RPM";
  }

  static const char* value(const ::volta_msgs::RPM_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::volta_msgs::RPM_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 left\n"
"int16 right\n"
;
  }

  static const char* value(const ::volta_msgs::RPM_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::volta_msgs::RPM_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.left);
      stream.next(m.right);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RPM_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::volta_msgs::RPM_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::volta_msgs::RPM_<ContainerAllocator>& v)
  {
    s << indent << "left: ";
    Printer<int16_t>::stream(s, indent + "  ", v.left);
    s << indent << "right: ";
    Printer<int16_t>::stream(s, indent + "  ", v.right);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VOLTA_MSGS_MESSAGE_RPM_H
