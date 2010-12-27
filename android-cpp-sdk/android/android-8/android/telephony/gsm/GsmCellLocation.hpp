/*================================================================================
  code generated by: java2cpp
  class: android.telephony.gsm.GsmCellLocation
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_GSM_GSMCELLLOCATION_HPP_DECL
#define J2CPP_ANDROID_TELEPHONY_GSM_GSMCELLLOCATION_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/os/Bundle.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace telephony { namespace gsm {

	class GsmCellLocation;
	class GsmCellLocation
		: public cpp_object<GsmCellLocation>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)

		GsmCellLocation(jobject jobj)
		: cpp_object<GsmCellLocation>(jobj)
		{
		}

		cpp_int getLac();
		cpp_int getCid();
		void setStateInvalid();
		void setLacAndCid(cpp_int const&, cpp_int const&);
		cpp_int hashCode();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		local_ref< java::lang::String > toString();
		void fillInNotifierBundle(local_ref< android::os::Bundle > const&);
	}; //class GsmCellLocation

} //namespace gsm
} //namespace telephony
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_GSM_GSMCELLLOCATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_GSM_GSMCELLLOCATION_HPP_IMPL
#define J2CPP_ANDROID_TELEPHONY_GSM_GSMCELLLOCATION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::telephony::gsm::GsmCellLocation > create< android::telephony::gsm::GsmCellLocation>()
{
	return local_ref< android::telephony::gsm::GsmCellLocation >(
		environment::get().get_jenv()->NewObject(
			get_class<android::telephony::gsm::GsmCellLocation::J2CPP_CLASS_NAME>(),
			get_method_id<android::telephony::gsm::GsmCellLocation::J2CPP_CLASS_NAME, android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_NAME(0), android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::telephony::gsm::GsmCellLocation > create< android::telephony::gsm::GsmCellLocation>(local_ref< android::os::Bundle > const &a0)
{
	return local_ref< android::telephony::gsm::GsmCellLocation >(
		environment::get().get_jenv()->NewObject(
			get_class<android::telephony::gsm::GsmCellLocation::J2CPP_CLASS_NAME>(),
			get_method_id<android::telephony::gsm::GsmCellLocation::J2CPP_CLASS_NAME, android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_NAME(1), android::telephony::gsm::GsmCellLocation::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::telephony::gsm::GsmCellLocation::getLac()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int android::telephony::gsm::GsmCellLocation::getCid()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::telephony::gsm::GsmCellLocation::setStateInvalid()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::telephony::gsm::GsmCellLocation::setLacAndCid(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::telephony::gsm::GsmCellLocation::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_boolean android::telephony::gsm::GsmCellLocation::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::telephony::gsm::GsmCellLocation::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

void android::telephony::gsm::GsmCellLocation::fillInNotifierBundle(local_ref< android::os::Bundle > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::telephony::gsm::GsmCellLocation,"android/telephony/gsm/GsmCellLocation")
J2CPP_DEFINE_METHOD(android::telephony::gsm::GsmCellLocation,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::telephony::gsm::GsmCellLocation,1,"<init>","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::telephony::gsm::GsmCellLocation,2,"getLac","()I")
J2CPP_DEFINE_METHOD(android::telephony::gsm::GsmCellLocation,3,"getCid","()I")
J2CPP_DEFINE_METHOD(android::telephony::gsm::GsmCellLocation,4,"setStateInvalid","()V")
J2CPP_DEFINE_METHOD(android::telephony::gsm::GsmCellLocation,5,"setLacAndCid","(II)V")
J2CPP_DEFINE_METHOD(android::telephony::gsm::GsmCellLocation,6,"hashCode","()I")
J2CPP_DEFINE_METHOD(android::telephony::gsm::GsmCellLocation,7,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::telephony::gsm::GsmCellLocation,8,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::gsm::GsmCellLocation,9,"fillInNotifierBundle","(Landroid/os/Bundle;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_GSM_GSMCELLLOCATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
