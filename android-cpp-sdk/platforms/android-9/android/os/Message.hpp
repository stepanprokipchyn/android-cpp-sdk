/*================================================================================
  code generated by: java2cpp
  class: android.os.Message
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_MESSAGE_HPP_DECL
#define J2CPP_ANDROID_OS_MESSAGE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace android { namespace os { class Handler; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace os { class Messenger; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Bundle.hpp>
#include <android/os/Handler.hpp>
#include <android/os/Messenger.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace os {

	class Message;
	class Message
		: public cpp_object<Message>
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
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)

		Message(jobject jobj)
		: cpp_object<Message>(jobj)
		, what(jobj)
		, arg1(jobj)
		, arg2(jobj)
		, obj(jobj)
		, replyTo(jobj)
		{
		}

		static local_ref< android::os::Message > obtain();
		static local_ref< android::os::Message > obtain(local_ref< android::os::Message > const&);
		static local_ref< android::os::Message > obtain(local_ref< android::os::Handler > const&);
		static local_ref< android::os::Message > obtain(local_ref< android::os::Handler > const&, local_ref< java::lang::Runnable > const&);
		static local_ref< android::os::Message > obtain(local_ref< android::os::Handler > const&, cpp_int const&);
		static local_ref< android::os::Message > obtain(local_ref< android::os::Handler > const&, cpp_int const&, local_ref< java::lang::Object > const&);
		static local_ref< android::os::Message > obtain(local_ref< android::os::Handler > const&, cpp_int const&, cpp_int const&, cpp_int const&);
		static local_ref< android::os::Message > obtain(local_ref< android::os::Handler > const&, cpp_int const&, cpp_int const&, cpp_int const&, local_ref< java::lang::Object > const&);
		void recycle();
		void copyFrom(local_ref< android::os::Message > const&);
		cpp_long getWhen();
		void setTarget(local_ref< android::os::Handler > const&);
		local_ref< android::os::Handler > getTarget();
		local_ref< java::lang::Runnable > getCallback();
		local_ref< android::os::Bundle > getData();
		local_ref< android::os::Bundle > peekData();
		void setData(local_ref< android::os::Bundle > const&);
		void sendToTarget();
		local_ref< java::lang::String > toString();
		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > what;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > arg1;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > arg2;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::Object > > obj;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< android::os::Messenger > > replyTo;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class Message

} //namespace os
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_MESSAGE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_MESSAGE_HPP_IMPL
#define J2CPP_ANDROID_OS_MESSAGE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::os::Message > create< android::os::Message>()
{
	return local_ref< android::os::Message >(
		environment::get().get_jenv()->NewObject(
			get_class<android::os::Message::J2CPP_CLASS_NAME>(),
			get_method_id<android::os::Message::J2CPP_CLASS_NAME, android::os::Message::J2CPP_METHOD_NAME(0), android::os::Message::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< android::os::Message > android::os::Message::obtain()
{
	return local_ref< android::os::Message >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

local_ref< android::os::Message > android::os::Message::obtain(local_ref< android::os::Message > const &a0)
{
	return local_ref< android::os::Message >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::os::Message > android::os::Message::obtain(local_ref< android::os::Handler > const &a0)
{
	return local_ref< android::os::Message >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::os::Message > android::os::Message::obtain(local_ref< android::os::Handler > const &a0, local_ref< java::lang::Runnable > const &a1)
{
	return local_ref< android::os::Message >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::os::Message > android::os::Message::obtain(local_ref< android::os::Handler > const &a0, cpp_int const &a1)
{
	return local_ref< android::os::Message >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::os::Message > android::os::Message::obtain(local_ref< android::os::Handler > const &a0, cpp_int const &a1, local_ref< java::lang::Object > const &a2)
{
	return local_ref< android::os::Message >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::os::Message > android::os::Message::obtain(local_ref< android::os::Handler > const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return local_ref< android::os::Message >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< android::os::Message > android::os::Message::obtain(local_ref< android::os::Handler > const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3, local_ref< java::lang::Object > const &a4)
{
	return local_ref< android::os::Message >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

void android::os::Message::recycle()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void android::os::Message::copyFrom(local_ref< android::os::Message > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long android::os::Message::getWhen()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void android::os::Message::setTarget(local_ref< android::os::Handler > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::os::Handler > android::os::Message::getTarget()
{
	return local_ref< android::os::Handler >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

local_ref< java::lang::Runnable > android::os::Message::getCallback()
{
	return local_ref< java::lang::Runnable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< android::os::Bundle > android::os::Message::getData()
{
	return local_ref< android::os::Bundle >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

local_ref< android::os::Bundle > android::os::Message::peekData()
{
	return local_ref< android::os::Bundle >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

void android::os::Message::setData(local_ref< android::os::Bundle > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

void android::os::Message::sendToTarget()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

local_ref< java::lang::String > android::os::Message::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

cpp_int android::os::Message::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

void android::os::Message::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::os::Message::J2CPP_CLASS_NAME,
	android::os::Message::J2CPP_FIELD_NAME(5),
	android::os::Message::J2CPP_FIELD_SIGNATURE(5),
	local_ref< android::os::Parcelable_::Creator >
> android::os::Message::CREATOR;


J2CPP_DEFINE_CLASS(android::os::Message,"android/os/Message")
J2CPP_DEFINE_METHOD(android::os::Message,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::os::Message,1,"obtain","()Landroid/os/Message;")
J2CPP_DEFINE_METHOD(android::os::Message,2,"obtain","(Landroid/os/Message;)Landroid/os/Message;")
J2CPP_DEFINE_METHOD(android::os::Message,3,"obtain","(Landroid/os/Handler;)Landroid/os/Message;")
J2CPP_DEFINE_METHOD(android::os::Message,4,"obtain","(Landroid/os/Handler;Ljava/lang/Runnable;)Landroid/os/Message;")
J2CPP_DEFINE_METHOD(android::os::Message,5,"obtain","(Landroid/os/Handler;I)Landroid/os/Message;")
J2CPP_DEFINE_METHOD(android::os::Message,6,"obtain","(Landroid/os/Handler;ILjava/lang/Object;)Landroid/os/Message;")
J2CPP_DEFINE_METHOD(android::os::Message,7,"obtain","(Landroid/os/Handler;III)Landroid/os/Message;")
J2CPP_DEFINE_METHOD(android::os::Message,8,"obtain","(Landroid/os/Handler;IIILjava/lang/Object;)Landroid/os/Message;")
J2CPP_DEFINE_METHOD(android::os::Message,9,"recycle","()V")
J2CPP_DEFINE_METHOD(android::os::Message,10,"copyFrom","(Landroid/os/Message;)V")
J2CPP_DEFINE_METHOD(android::os::Message,11,"getWhen","()J")
J2CPP_DEFINE_METHOD(android::os::Message,12,"setTarget","(Landroid/os/Handler;)V")
J2CPP_DEFINE_METHOD(android::os::Message,13,"getTarget","()Landroid/os/Handler;")
J2CPP_DEFINE_METHOD(android::os::Message,14,"getCallback","()Ljava/lang/Runnable;")
J2CPP_DEFINE_METHOD(android::os::Message,15,"getData","()Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::os::Message,16,"peekData","()Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::os::Message,17,"setData","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::os::Message,18,"sendToTarget","()V")
J2CPP_DEFINE_METHOD(android::os::Message,19,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::os::Message,20,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::os::Message,21,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::os::Message,22,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::os::Message,0,"what","I")
J2CPP_DEFINE_FIELD(android::os::Message,1,"arg1","I")
J2CPP_DEFINE_FIELD(android::os::Message,2,"arg2","I")
J2CPP_DEFINE_FIELD(android::os::Message,3,"obj","Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(android::os::Message,4,"replyTo","Landroid/os/Messenger;")
J2CPP_DEFINE_FIELD(android::os::Message,5,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_MESSAGE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
