/*================================================================================
  code generated by: java2cpp
  class: android.content.pm.PackageItemInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_PACKAGEITEMINFO_HPP_DECL
#define J2CPP_ANDROID_CONTENT_PM_PACKAGEITEMINFO_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class PackageManager; } } } }
namespace j2cpp { namespace android { namespace content { namespace res { class XmlResourceParser; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }


#include <android/content/pm/PackageManager.hpp>
#include <android/content/res/XmlResourceParser.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/os/Bundle.hpp>
#include <android/os/Parcel.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content { namespace pm {

	class PackageItemInfo;
	namespace PackageItemInfo_ {

		class DisplayNameComparator;
		class DisplayNameComparator
			: public cpp_object<DisplayNameComparator>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)

			DisplayNameComparator(jobject jobj)
			: cpp_object<DisplayNameComparator>(jobj)
			{
			}

			cpp_int compare(local_ref< android::content::pm::PackageItemInfo > const&, local_ref< android::content::pm::PackageItemInfo > const&);
			cpp_int compare(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		}; //class DisplayNameComparator

	} //namespace PackageItemInfo_

	class PackageItemInfo
		: public cpp_object<PackageItemInfo>
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
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)

		typedef PackageItemInfo_::DisplayNameComparator DisplayNameComparator;

		PackageItemInfo(jobject jobj)
		: cpp_object<PackageItemInfo>(jobj)
		, name(jobj)
		, packageName(jobj)
		, labelRes(jobj)
		, nonLocalizedLabel(jobj)
		, icon(jobj)
		, logo(jobj)
		, metaData(jobj)
		{
		}

		local_ref< java::lang::CharSequence > loadLabel(local_ref< android::content::pm::PackageManager > const&);
		local_ref< android::graphics::drawable::Drawable > loadIcon(local_ref< android::content::pm::PackageManager > const&);
		local_ref< android::graphics::drawable::Drawable > loadLogo(local_ref< android::content::pm::PackageManager > const&);
		local_ref< android::content::res::XmlResourceParser > loadXmlMetaData(local_ref< android::content::pm::PackageManager > const&, local_ref< java::lang::String > const&);
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > name;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > packageName;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > labelRes;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::CharSequence > > nonLocalizedLabel;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > icon;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > logo;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< android::os::Bundle > > metaData;
	}; //class PackageItemInfo

} //namespace pm
} //namespace content
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_PACKAGEITEMINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_PACKAGEITEMINFO_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_PM_PACKAGEITEMINFO_HPP_IMPL

namespace j2cpp {



template <>
local_ref< android::content::pm::PackageItemInfo_::DisplayNameComparator > create< android::content::pm::PackageItemInfo_::DisplayNameComparator>(local_ref< android::content::pm::PackageManager > const &a0)
{
	return local_ref< android::content::pm::PackageItemInfo_::DisplayNameComparator >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::pm::PackageItemInfo_::DisplayNameComparator::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::pm::PackageItemInfo_::DisplayNameComparator::J2CPP_CLASS_NAME, android::content::pm::PackageItemInfo_::DisplayNameComparator::J2CPP_METHOD_NAME(0), android::content::pm::PackageItemInfo_::DisplayNameComparator::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::content::pm::PackageItemInfo_::DisplayNameComparator::compare(local_ref< android::content::pm::PackageItemInfo > const &a0, local_ref< android::content::pm::PackageItemInfo > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::content::pm::PackageItemInfo_::DisplayNameComparator::compare(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::content::pm::PackageItemInfo_::DisplayNameComparator,"android/content/pm/PackageItemInfo$DisplayNameComparator")
J2CPP_DEFINE_METHOD(android::content::pm::PackageItemInfo_::DisplayNameComparator,0,"<init>","(Landroid/content/pm/PackageManager;)V")
J2CPP_DEFINE_METHOD(android::content::pm::PackageItemInfo_::DisplayNameComparator,1,"compare","(Landroid/content/pm/PackageItemInfo;Landroid/content/pm/PackageItemInfo;)I")
J2CPP_DEFINE_METHOD(android::content::pm::PackageItemInfo_::DisplayNameComparator,2,"compare","(Ljava/lang/Object;Ljava/lang/Object;)I")


template <>
local_ref< android::content::pm::PackageItemInfo > create< android::content::pm::PackageItemInfo>()
{
	return local_ref< android::content::pm::PackageItemInfo >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::pm::PackageItemInfo::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::pm::PackageItemInfo::J2CPP_CLASS_NAME, android::content::pm::PackageItemInfo::J2CPP_METHOD_NAME(0), android::content::pm::PackageItemInfo::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::content::pm::PackageItemInfo > create< android::content::pm::PackageItemInfo>(local_ref< android::content::pm::PackageItemInfo > const &a0)
{
	return local_ref< android::content::pm::PackageItemInfo >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::pm::PackageItemInfo::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::pm::PackageItemInfo::J2CPP_CLASS_NAME, android::content::pm::PackageItemInfo::J2CPP_METHOD_NAME(1), android::content::pm::PackageItemInfo::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::content::pm::PackageItemInfo > create< android::content::pm::PackageItemInfo>(local_ref< android::os::Parcel > const &a0)
{
	return local_ref< android::content::pm::PackageItemInfo >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::pm::PackageItemInfo::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::pm::PackageItemInfo::J2CPP_CLASS_NAME, android::content::pm::PackageItemInfo::J2CPP_METHOD_NAME(2), android::content::pm::PackageItemInfo::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::content::pm::PackageItemInfo::loadLabel(local_ref< android::content::pm::PackageManager > const &a0)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::graphics::drawable::Drawable > android::content::pm::PackageItemInfo::loadIcon(local_ref< android::content::pm::PackageManager > const &a0)
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::graphics::drawable::Drawable > android::content::pm::PackageItemInfo::loadLogo(local_ref< android::content::pm::PackageManager > const &a0)
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::content::res::XmlResourceParser > android::content::pm::PackageItemInfo::loadXmlMetaData(local_ref< android::content::pm::PackageManager > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< android::content::res::XmlResourceParser >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}



void android::content::pm::PackageItemInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(android::content::pm::PackageItemInfo,"android/content/pm/PackageItemInfo")
J2CPP_DEFINE_METHOD(android::content::pm::PackageItemInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::pm::PackageItemInfo,1,"<init>","(Landroid/content/pm/PackageItemInfo;)V")
J2CPP_DEFINE_METHOD(android::content::pm::PackageItemInfo,2,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::content::pm::PackageItemInfo,3,"loadLabel","(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::content::pm::PackageItemInfo,4,"loadIcon","(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::content::pm::PackageItemInfo,5,"loadLogo","(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::content::pm::PackageItemInfo,6,"loadXmlMetaData","(Landroid/content/pm/PackageManager;Ljava/lang/String;)Landroid/content/res/XmlResourceParser;")
J2CPP_DEFINE_METHOD(android::content::pm::PackageItemInfo,7,"dumpFront","(Landroid/util/Printer;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::pm::PackageItemInfo,8,"dumpBack","(Landroid/util/Printer;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::pm::PackageItemInfo,9,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_FIELD(android::content::pm::PackageItemInfo,0,"name","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::PackageItemInfo,1,"packageName","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::PackageItemInfo,2,"labelRes","I")
J2CPP_DEFINE_FIELD(android::content::pm::PackageItemInfo,3,"nonLocalizedLabel","Ljava/lang/CharSequence;")
J2CPP_DEFINE_FIELD(android::content::pm::PackageItemInfo,4,"icon","I")
J2CPP_DEFINE_FIELD(android::content::pm::PackageItemInfo,5,"logo","I")
J2CPP_DEFINE_FIELD(android::content::pm::PackageItemInfo,6,"metaData","Landroid/os/Bundle;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_PACKAGEITEMINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
