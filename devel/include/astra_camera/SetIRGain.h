// Generated by gencpp from file astra_camera/SetIRGain.msg
// DO NOT EDIT!


#ifndef ASTRA_CAMERA_MESSAGE_SETIRGAIN_H
#define ASTRA_CAMERA_MESSAGE_SETIRGAIN_H

#include <ros/service_traits.h>


#include <astra_camera/SetIRGainRequest.h>
#include <astra_camera/SetIRGainResponse.h>


namespace astra_camera
{

struct SetIRGain
{

typedef SetIRGainRequest Request;
typedef SetIRGainResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetIRGain
} // namespace astra_camera


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::astra_camera::SetIRGain > {
  static const char* value()
  {
    return "164d2201bda8580473ff7023ba27f703";
  }

  static const char* value(const ::astra_camera::SetIRGain&) { return value(); }
};

template<>
struct DataType< ::astra_camera::SetIRGain > {
  static const char* value()
  {
    return "astra_camera/SetIRGain";
  }

  static const char* value(const ::astra_camera::SetIRGain&) { return value(); }
};


// service_traits::MD5Sum< ::astra_camera::SetIRGainRequest> should match 
// service_traits::MD5Sum< ::astra_camera::SetIRGain > 
template<>
struct MD5Sum< ::astra_camera::SetIRGainRequest>
{
  static const char* value()
  {
    return MD5Sum< ::astra_camera::SetIRGain >::value();
  }
  static const char* value(const ::astra_camera::SetIRGainRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::astra_camera::SetIRGainRequest> should match 
// service_traits::DataType< ::astra_camera::SetIRGain > 
template<>
struct DataType< ::astra_camera::SetIRGainRequest>
{
  static const char* value()
  {
    return DataType< ::astra_camera::SetIRGain >::value();
  }
  static const char* value(const ::astra_camera::SetIRGainRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::astra_camera::SetIRGainResponse> should match 
// service_traits::MD5Sum< ::astra_camera::SetIRGain > 
template<>
struct MD5Sum< ::astra_camera::SetIRGainResponse>
{
  static const char* value()
  {
    return MD5Sum< ::astra_camera::SetIRGain >::value();
  }
  static const char* value(const ::astra_camera::SetIRGainResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::astra_camera::SetIRGainResponse> should match 
// service_traits::DataType< ::astra_camera::SetIRGain > 
template<>
struct DataType< ::astra_camera::SetIRGainResponse>
{
  static const char* value()
  {
    return DataType< ::astra_camera::SetIRGain >::value();
  }
  static const char* value(const ::astra_camera::SetIRGainResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ASTRA_CAMERA_MESSAGE_SETIRGAIN_H
