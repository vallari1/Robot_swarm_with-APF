// Generated by gencpp from file volta_msgs/Table.msg
// DO NOT EDIT!


#ifndef VOLTA_MSGS_MESSAGE_TABLE_H
#define VOLTA_MSGS_MESSAGE_TABLE_H


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
struct Table_
{
  typedef Table_<ContainerAllocator> Type;

  Table_()
    : soc(0.0)
    , soh(0.0)
    , current(0.0)
    , voltage(0.0)
    , system_status(0)
    , relay_temp(0.0)
    , powe_in_temp(0.0)
    , motor_volt(0.0)
    , battery_volt(0.0)
    , hw_estop_volt(0.0)
    , motorAlarm(0)
    , diag_en(0)
    , hw_Estop_state(0)
    , sw_Estop_state(0)
    , ros_Estop_state(0)  {
    }
  Table_(const ContainerAllocator& _alloc)
    : soc(0.0)
    , soh(0.0)
    , current(0.0)
    , voltage(0.0)
    , system_status(0)
    , relay_temp(0.0)
    , powe_in_temp(0.0)
    , motor_volt(0.0)
    , battery_volt(0.0)
    , hw_estop_volt(0.0)
    , motorAlarm(0)
    , diag_en(0)
    , hw_Estop_state(0)
    , sw_Estop_state(0)
    , ros_Estop_state(0)  {
  (void)_alloc;
    }



   typedef float _soc_type;
  _soc_type soc;

   typedef float _soh_type;
  _soh_type soh;

   typedef float _current_type;
  _current_type current;

   typedef float _voltage_type;
  _voltage_type voltage;

   typedef uint8_t _system_status_type;
  _system_status_type system_status;

   typedef float _relay_temp_type;
  _relay_temp_type relay_temp;

   typedef float _powe_in_temp_type;
  _powe_in_temp_type powe_in_temp;

   typedef float _motor_volt_type;
  _motor_volt_type motor_volt;

   typedef float _battery_volt_type;
  _battery_volt_type battery_volt;

   typedef float _hw_estop_volt_type;
  _hw_estop_volt_type hw_estop_volt;

   typedef uint8_t _motorAlarm_type;
  _motorAlarm_type motorAlarm;

   typedef uint8_t _diag_en_type;
  _diag_en_type diag_en;

   typedef uint8_t _hw_Estop_state_type;
  _hw_Estop_state_type hw_Estop_state;

   typedef uint8_t _sw_Estop_state_type;
  _sw_Estop_state_type sw_Estop_state;

   typedef uint8_t _ros_Estop_state_type;
  _ros_Estop_state_type ros_Estop_state;





  typedef boost::shared_ptr< ::volta_msgs::Table_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::volta_msgs::Table_<ContainerAllocator> const> ConstPtr;

}; // struct Table_

typedef ::volta_msgs::Table_<std::allocator<void> > Table;

typedef boost::shared_ptr< ::volta_msgs::Table > TablePtr;
typedef boost::shared_ptr< ::volta_msgs::Table const> TableConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::volta_msgs::Table_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::volta_msgs::Table_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::volta_msgs::Table_<ContainerAllocator1> & lhs, const ::volta_msgs::Table_<ContainerAllocator2> & rhs)
{
  return lhs.soc == rhs.soc &&
    lhs.soh == rhs.soh &&
    lhs.current == rhs.current &&
    lhs.voltage == rhs.voltage &&
    lhs.system_status == rhs.system_status &&
    lhs.relay_temp == rhs.relay_temp &&
    lhs.powe_in_temp == rhs.powe_in_temp &&
    lhs.motor_volt == rhs.motor_volt &&
    lhs.battery_volt == rhs.battery_volt &&
    lhs.hw_estop_volt == rhs.hw_estop_volt &&
    lhs.motorAlarm == rhs.motorAlarm &&
    lhs.diag_en == rhs.diag_en &&
    lhs.hw_Estop_state == rhs.hw_Estop_state &&
    lhs.sw_Estop_state == rhs.sw_Estop_state &&
    lhs.ros_Estop_state == rhs.ros_Estop_state;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::volta_msgs::Table_<ContainerAllocator1> & lhs, const ::volta_msgs::Table_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace volta_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::volta_msgs::Table_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::volta_msgs::Table_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::volta_msgs::Table_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::volta_msgs::Table_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::volta_msgs::Table_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::volta_msgs::Table_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::volta_msgs::Table_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b849cd8a5229dad6cf68bbda639aeae9";
  }

  static const char* value(const ::volta_msgs::Table_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb849cd8a5229dad6ULL;
  static const uint64_t static_value2 = 0xcf68bbda639aeae9ULL;
};

template<class ContainerAllocator>
struct DataType< ::volta_msgs::Table_<ContainerAllocator> >
{
  static const char* value()
  {
    return "volta_msgs/Table";
  }

  static const char* value(const ::volta_msgs::Table_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::volta_msgs::Table_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 soc\n"
"float32 soh\n"
"float32 current\n"
"float32 voltage\n"
"uint8 system_status\n"
"float32 relay_temp\n"
"float32 powe_in_temp\n"
"\n"
"float32 motor_volt\n"
"float32 battery_volt\n"
"float32 hw_estop_volt\n"
"uint8 motorAlarm\n"
"uint8 diag_en\n"
"uint8 hw_Estop_state\n"
"uint8 sw_Estop_state\n"
"uint8 ros_Estop_state\n"
;
  }

  static const char* value(const ::volta_msgs::Table_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::volta_msgs::Table_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.soc);
      stream.next(m.soh);
      stream.next(m.current);
      stream.next(m.voltage);
      stream.next(m.system_status);
      stream.next(m.relay_temp);
      stream.next(m.powe_in_temp);
      stream.next(m.motor_volt);
      stream.next(m.battery_volt);
      stream.next(m.hw_estop_volt);
      stream.next(m.motorAlarm);
      stream.next(m.diag_en);
      stream.next(m.hw_Estop_state);
      stream.next(m.sw_Estop_state);
      stream.next(m.ros_Estop_state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Table_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::volta_msgs::Table_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::volta_msgs::Table_<ContainerAllocator>& v)
  {
    s << indent << "soc: ";
    Printer<float>::stream(s, indent + "  ", v.soc);
    s << indent << "soh: ";
    Printer<float>::stream(s, indent + "  ", v.soh);
    s << indent << "current: ";
    Printer<float>::stream(s, indent + "  ", v.current);
    s << indent << "voltage: ";
    Printer<float>::stream(s, indent + "  ", v.voltage);
    s << indent << "system_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.system_status);
    s << indent << "relay_temp: ";
    Printer<float>::stream(s, indent + "  ", v.relay_temp);
    s << indent << "powe_in_temp: ";
    Printer<float>::stream(s, indent + "  ", v.powe_in_temp);
    s << indent << "motor_volt: ";
    Printer<float>::stream(s, indent + "  ", v.motor_volt);
    s << indent << "battery_volt: ";
    Printer<float>::stream(s, indent + "  ", v.battery_volt);
    s << indent << "hw_estop_volt: ";
    Printer<float>::stream(s, indent + "  ", v.hw_estop_volt);
    s << indent << "motorAlarm: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.motorAlarm);
    s << indent << "diag_en: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.diag_en);
    s << indent << "hw_Estop_state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.hw_Estop_state);
    s << indent << "sw_Estop_state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sw_Estop_state);
    s << indent << "ros_Estop_state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ros_Estop_state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VOLTA_MSGS_MESSAGE_TABLE_H
