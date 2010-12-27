/*================================================================================
  code generated by: java2cpp
  class: android.os.Messenger
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_MESSENGER_HPP_DECL
#define J2CPP_ANDROID_OS_MESSENGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace os { class IBinder; } } }
namespace j2cpp { namespace android { namespace os { class Message; } } }
namespace j2cpp { namespace android { namespace os { class Handler; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Handler.hpp>
#include <android/os/IBinder.hpp>
#include <android/os/Message.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace os {

	class Messenger;
	class Messenger
		: public cpp_object<Messenger>
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
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_FIELD(0)

		Messenger(jobject jobj)
		: cpp_object<Messenger>(jobj)
		{
		}

		void send(local_ref< android::os::Message > const&);
		local_ref< android::os::IBinder > getBinder();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_int hashCode();
		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);
		static void writeMessengerOrNullToParcel(local_ref< android::os::Messenger > const&, local_ref< android::os::Parcel > const&);
		static local_ref< android::os::Messenger > readMessengerOrNullFromParcel(local_ref< android::os::Parcel > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class Messenger

} //namespace os
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_MESSENGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_MESSENGER_HPP_IMPL
#define J2CPP_ANDROID_OS_MESSENGER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::os::Messenger > create< android::os::Messenger>(local_ref< android::os::Handler > const &a0)
{
	return local_ref< android::os::Messenger >(
		environment::get().get_jenv()->NewObject(
			get_class<android::os::Messenger::J2CPP_CLASS_NAME>(),
			get_method_id<android::os::Messenger::J2CPP_CLASS_NAME, android::os::Messenger::J2CPP_METHOD_NAME(0), android::os::Messenger::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::os::Messenger > create< android::os::Messenger>(local_ref< android::os::IBinder > const &a0)
{
	return local_ref< android::os::Messenger >(
		environment::get().get_jenv()->NewObject(
			get_class<android::os::Messenger::J2CPP_CLASS_NAME>(),
			get_method_id<android::os::Messenger::J2CPP_CLASS_NAME, android::os::Messenger::J2CPP_METHOD_NAME(1), android::os::Messenger::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void android::os::Messenger::send(local_ref< android::os::Message > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::os::IBinder > android::os::Messenger::getBinder()
{
	return local_ref< android::os::IBinder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean android::os::Messenger::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::os::Messenger::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int android::os::Messenger::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void android::os::Messenger::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::os::Messenger::writeMessengerOrNullToParcel(local_ref< android::os::Messenger > const &a0, local_ref< android::os::Parcel > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::os::Messenger > android::os::Messenger::readMessengerOrNullFromParcel(local_ref< android::os::Parcel > const &a0)
{
	return local_ref< android::os::Messenger >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), true>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::os::Messenger::J2CPP_CLASS_NAME,
	android::os::Messenger::J2CPP_FIELD_NAME(0),
	android::os::Messenger::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::os::Messenger::CREATOR;


J2CPP_DEFINE_CLASS(android::os::Messenger,"android/os/Messenger")
J2CPP_DEFINE_METHOD(android::os::Messenger,0,"<init>","(Landroid/os/Handler;)V")
J2CPP_DEFINE_METHOD(android::os::Messenger,1,"<init>","(Landroid/os/IBinder;)V")
J2CPP_DEFINE_METHOD(android::os::Messenger,2,"send","(Landroid/os/Message;)V")
J2CPP_DEFINE_METHOD(android::os::Messenger,3,"getBinder","()Landroid/os/IBinder;")
J2CPP_DEFINE_METHOD(android::os::Messenger,4,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::os::Messenger,5,"hashCode","()I")
J2CPP_DEFINE_METHOD(android::os::Messenger,6,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::os::Messenger,7,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::os::Messenger,8,"writeMessengerOrNullToParcel","(Landroid/os/Messenger;Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::os::Messenger,9,"readMessengerOrNullFromParcel","(Landroid/os/Parcel;)Landroid/os/Messenger;")
J2CPP_DEFINE_METHOD(android::os::Messenger,10,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::os::Messenger,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_MESSENGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
