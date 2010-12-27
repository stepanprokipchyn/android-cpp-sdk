/*================================================================================
  code generated by: java2cpp
  class: android.view.inputmethod.CompletionInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_COMPLETIONINFO_HPP_DECL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_COMPLETIONINFO_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace view { namespace inputmethod {

	class CompletionInfo;
	class CompletionInfo
		: public cpp_object<CompletionInfo>
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
		J2CPP_DECLARE_FIELD(0)

		CompletionInfo(jobject jobj)
		: cpp_object<CompletionInfo>(jobj)
		{
		}

		cpp_long getId();
		cpp_int getPosition();
		local_ref< java::lang::CharSequence > getText();
		local_ref< java::lang::CharSequence > getLabel();
		local_ref< java::lang::String > toString();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);
		cpp_int describeContents();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class CompletionInfo

} //namespace inputmethod
} //namespace view
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_COMPLETIONINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_COMPLETIONINFO_HPP_IMPL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_COMPLETIONINFO_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::view::inputmethod::CompletionInfo > create< android::view::inputmethod::CompletionInfo>(cpp_long const &a0, cpp_int const &a1, local_ref< java::lang::CharSequence > const &a2)
{
	return local_ref< android::view::inputmethod::CompletionInfo >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::inputmethod::CompletionInfo::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::inputmethod::CompletionInfo::J2CPP_CLASS_NAME, android::view::inputmethod::CompletionInfo::J2CPP_METHOD_NAME(0), android::view::inputmethod::CompletionInfo::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< android::view::inputmethod::CompletionInfo > create< android::view::inputmethod::CompletionInfo>(cpp_long const &a0, cpp_int const &a1, local_ref< java::lang::CharSequence > const &a2, local_ref< java::lang::CharSequence > const &a3)
{
	return local_ref< android::view::inputmethod::CompletionInfo >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::inputmethod::CompletionInfo::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::inputmethod::CompletionInfo::J2CPP_CLASS_NAME, android::view::inputmethod::CompletionInfo::J2CPP_METHOD_NAME(1), android::view::inputmethod::CompletionInfo::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_long android::view::inputmethod::CompletionInfo::getId()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int android::view::inputmethod::CompletionInfo::getPosition()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::lang::CharSequence > android::view::inputmethod::CompletionInfo::getText()
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::CharSequence > android::view::inputmethod::CompletionInfo::getLabel()
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::String > android::view::inputmethod::CompletionInfo::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void android::view::inputmethod::CompletionInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::view::inputmethod::CompletionInfo::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}


static_field<
	android::view::inputmethod::CompletionInfo::J2CPP_CLASS_NAME,
	android::view::inputmethod::CompletionInfo::J2CPP_FIELD_NAME(0),
	android::view::inputmethod::CompletionInfo::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::view::inputmethod::CompletionInfo::CREATOR;


J2CPP_DEFINE_CLASS(android::view::inputmethod::CompletionInfo,"android/view/inputmethod/CompletionInfo")
J2CPP_DEFINE_METHOD(android::view::inputmethod::CompletionInfo,0,"<init>","(JILjava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::CompletionInfo,1,"<init>","(JILjava/lang/CharSequence;Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::CompletionInfo,2,"getId","()J")
J2CPP_DEFINE_METHOD(android::view::inputmethod::CompletionInfo,3,"getPosition","()I")
J2CPP_DEFINE_METHOD(android::view::inputmethod::CompletionInfo,4,"getText","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::CompletionInfo,5,"getLabel","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::CompletionInfo,6,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::CompletionInfo,7,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::CompletionInfo,8,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::view::inputmethod::CompletionInfo,9,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::view::inputmethod::CompletionInfo,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_COMPLETIONINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
