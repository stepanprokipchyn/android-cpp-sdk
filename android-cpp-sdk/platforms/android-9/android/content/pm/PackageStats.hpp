/*================================================================================
  code generated by: java2cpp
  class: android.content.pm.PackageStats
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_PACKAGESTATS_HPP_DECL
#define J2CPP_ANDROID_CONTENT_PM_PACKAGESTATS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content { namespace pm {

	class PackageStats;
	class PackageStats
		: public cpp_object<PackageStats>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		PackageStats(jobject jobj)
		: cpp_object<PackageStats>(jobj)
		, packageName(jobj)
		, codeSize(jobj)
		, dataSize(jobj)
		, cacheSize(jobj)
		{
		}

		local_ref< java::lang::String > toString();
		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > packageName;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_long > codeSize;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_long > dataSize;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_long > cacheSize;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class PackageStats

} //namespace pm
} //namespace content
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_PACKAGESTATS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_PACKAGESTATS_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_PM_PACKAGESTATS_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::content::pm::PackageStats > create< android::content::pm::PackageStats>(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::content::pm::PackageStats >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::pm::PackageStats::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::pm::PackageStats::J2CPP_CLASS_NAME, android::content::pm::PackageStats::J2CPP_METHOD_NAME(0), android::content::pm::PackageStats::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::content::pm::PackageStats > create< android::content::pm::PackageStats>(local_ref< android::os::Parcel > const &a0)
{
	return local_ref< android::content::pm::PackageStats >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::pm::PackageStats::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::pm::PackageStats::J2CPP_CLASS_NAME, android::content::pm::PackageStats::J2CPP_METHOD_NAME(1), android::content::pm::PackageStats::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::content::pm::PackageStats > create< android::content::pm::PackageStats>(local_ref< android::content::pm::PackageStats > const &a0)
{
	return local_ref< android::content::pm::PackageStats >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::pm::PackageStats::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::pm::PackageStats::J2CPP_CLASS_NAME, android::content::pm::PackageStats::J2CPP_METHOD_NAME(2), android::content::pm::PackageStats::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::content::pm::PackageStats::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int android::content::pm::PackageStats::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::content::pm::PackageStats::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::content::pm::PackageStats::J2CPP_CLASS_NAME,
	android::content::pm::PackageStats::J2CPP_FIELD_NAME(4),
	android::content::pm::PackageStats::J2CPP_FIELD_SIGNATURE(4),
	local_ref< android::os::Parcelable_::Creator >
> android::content::pm::PackageStats::CREATOR;


J2CPP_DEFINE_CLASS(android::content::pm::PackageStats,"android/content/pm/PackageStats")
J2CPP_DEFINE_METHOD(android::content::pm::PackageStats,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::pm::PackageStats,1,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::content::pm::PackageStats,2,"<init>","(Landroid/content/pm/PackageStats;)V")
J2CPP_DEFINE_METHOD(android::content::pm::PackageStats,3,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::pm::PackageStats,4,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::content::pm::PackageStats,5,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::pm::PackageStats,6,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::pm::PackageStats,0,"packageName","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::PackageStats,1,"codeSize","J")
J2CPP_DEFINE_FIELD(android::content::pm::PackageStats,2,"dataSize","J")
J2CPP_DEFINE_FIELD(android::content::pm::PackageStats,3,"cacheSize","J")
J2CPP_DEFINE_FIELD(android::content::pm::PackageStats,4,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_PACKAGESTATS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
