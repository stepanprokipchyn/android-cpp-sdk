/*================================================================================
  code generated by: java2cpp
  class: android.content.pm.LabeledIntent
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_LABELEDINTENT_HPP_DECL
#define J2CPP_ANDROID_CONTENT_PM_LABELEDINTENT_HPP_DECL


namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class PackageManager; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }


#include <android/content/Intent.hpp>
#include <android/content/pm/PackageManager.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content { namespace pm {

	class LabeledIntent;
	class LabeledIntent
		: public cpp_object<LabeledIntent>
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
		J2CPP_DECLARE_FIELD(0)

		LabeledIntent(jobject jobj)
		: cpp_object<LabeledIntent>(jobj)
		{
		}

		local_ref< java::lang::String > getSourcePackage();
		cpp_int getLabelResource();
		local_ref< java::lang::CharSequence > getNonLocalizedLabel();
		cpp_int getIconResource();
		local_ref< java::lang::CharSequence > loadLabel(local_ref< android::content::pm::PackageManager > const&);
		local_ref< android::graphics::drawable::Drawable > loadIcon(local_ref< android::content::pm::PackageManager > const&);
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);
		void readFromParcel(local_ref< android::os::Parcel > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class LabeledIntent

} //namespace pm
} //namespace content
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_LABELEDINTENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_LABELEDINTENT_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_PM_LABELEDINTENT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::content::pm::LabeledIntent > create< android::content::pm::LabeledIntent>(local_ref< android::content::Intent > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return local_ref< android::content::pm::LabeledIntent >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::pm::LabeledIntent::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::pm::LabeledIntent::J2CPP_CLASS_NAME, android::content::pm::LabeledIntent::J2CPP_METHOD_NAME(0), android::content::pm::LabeledIntent::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

template <>
local_ref< android::content::pm::LabeledIntent > create< android::content::pm::LabeledIntent>(local_ref< android::content::Intent > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::CharSequence > const &a2, cpp_int const &a3)
{
	return local_ref< android::content::pm::LabeledIntent >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::pm::LabeledIntent::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::pm::LabeledIntent::J2CPP_CLASS_NAME, android::content::pm::LabeledIntent::J2CPP_METHOD_NAME(1), android::content::pm::LabeledIntent::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

template <>
local_ref< android::content::pm::LabeledIntent > create< android::content::pm::LabeledIntent>(local_ref< java::lang::String > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< android::content::pm::LabeledIntent >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::pm::LabeledIntent::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::pm::LabeledIntent::J2CPP_CLASS_NAME, android::content::pm::LabeledIntent::J2CPP_METHOD_NAME(2), android::content::pm::LabeledIntent::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< android::content::pm::LabeledIntent > create< android::content::pm::LabeledIntent>(local_ref< java::lang::String > const &a0, local_ref< java::lang::CharSequence > const &a1, cpp_int const &a2)
{
	return local_ref< android::content::pm::LabeledIntent >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::pm::LabeledIntent::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::pm::LabeledIntent::J2CPP_CLASS_NAME, android::content::pm::LabeledIntent::J2CPP_METHOD_NAME(3), android::content::pm::LabeledIntent::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::content::pm::LabeledIntent::getSourcePackage()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int android::content::pm::LabeledIntent::getLabelResource()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::CharSequence > android::content::pm::LabeledIntent::getNonLocalizedLabel()
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_int android::content::pm::LabeledIntent::getIconResource()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::lang::CharSequence > android::content::pm::LabeledIntent::loadLabel(local_ref< android::content::pm::PackageManager > const &a0)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::graphics::drawable::Drawable > android::content::pm::LabeledIntent::loadIcon(local_ref< android::content::pm::PackageManager > const &a0)
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

void android::content::pm::LabeledIntent::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::content::pm::LabeledIntent::readFromParcel(local_ref< android::os::Parcel > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::content::pm::LabeledIntent::J2CPP_CLASS_NAME,
	android::content::pm::LabeledIntent::J2CPP_FIELD_NAME(0),
	android::content::pm::LabeledIntent::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::content::pm::LabeledIntent::CREATOR;


J2CPP_DEFINE_CLASS(android::content::pm::LabeledIntent,"android/content/pm/LabeledIntent")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,0,"<init>","(Landroid/content/Intent;Ljava/lang/String;II)V")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,1,"<init>","(Landroid/content/Intent;Ljava/lang/String;Ljava/lang/CharSequence;I)V")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,2,"<init>","(Ljava/lang/String;II)V")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,3,"<init>","(Ljava/lang/String;Ljava/lang/CharSequence;I)V")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,4,"getSourcePackage","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,5,"getLabelResource","()I")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,6,"getNonLocalizedLabel","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,7,"getIconResource","()I")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,8,"loadLabel","(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,9,"loadIcon","(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,10,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,11,"readFromParcel","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,12,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::pm::LabeledIntent,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_LABELEDINTENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
