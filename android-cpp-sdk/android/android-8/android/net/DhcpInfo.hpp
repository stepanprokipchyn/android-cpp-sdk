/*================================================================================
  code generated by: java2cpp
  class: android.net.DhcpInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_DHCPINFO_HPP_DECL
#define J2CPP_ANDROID_NET_DHCPINFO_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <android/os/Parcel.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace net {

	class DhcpInfo;
	class DhcpInfo
		: public cpp_object<DhcpInfo>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)

		DhcpInfo(jobject jobj)
		: cpp_object<DhcpInfo>(jobj)
		, ipAddress(jobj)
		, gateway(jobj)
		, netmask(jobj)
		, dns1(jobj)
		, dns2(jobj)
		, serverAddress(jobj)
		, leaseDuration(jobj)
		{
		}

		local_ref< java::lang::String > toString();
		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > ipAddress;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > gateway;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > netmask;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > dns1;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > dns2;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > serverAddress;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > leaseDuration;
	}; //class DhcpInfo

} //namespace net
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_DHCPINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_DHCPINFO_HPP_IMPL
#define J2CPP_ANDROID_NET_DHCPINFO_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::net::DhcpInfo > create< android::net::DhcpInfo>()
{
	return local_ref< android::net::DhcpInfo >(
		environment::get().get_jenv()->NewObject(
			get_class<android::net::DhcpInfo::J2CPP_CLASS_NAME>(),
			get_method_id<android::net::DhcpInfo::J2CPP_CLASS_NAME, android::net::DhcpInfo::J2CPP_METHOD_NAME(0), android::net::DhcpInfo::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::lang::String > android::net::DhcpInfo::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_int android::net::DhcpInfo::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::net::DhcpInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(android::net::DhcpInfo,"android/net/DhcpInfo")
J2CPP_DEFINE_METHOD(android::net::DhcpInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::net::DhcpInfo,1,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::DhcpInfo,2,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::net::DhcpInfo,3,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_FIELD(android::net::DhcpInfo,0,"ipAddress","I")
J2CPP_DEFINE_FIELD(android::net::DhcpInfo,1,"gateway","I")
J2CPP_DEFINE_FIELD(android::net::DhcpInfo,2,"netmask","I")
J2CPP_DEFINE_FIELD(android::net::DhcpInfo,3,"dns1","I")
J2CPP_DEFINE_FIELD(android::net::DhcpInfo,4,"dns2","I")
J2CPP_DEFINE_FIELD(android::net::DhcpInfo,5,"serverAddress","I")
J2CPP_DEFINE_FIELD(android::net::DhcpInfo,6,"leaseDuration","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_DHCPINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
