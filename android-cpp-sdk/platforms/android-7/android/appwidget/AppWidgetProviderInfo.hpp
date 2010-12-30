/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.appwidget.AppWidgetProviderInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APPWIDGET_APPWIDGETPROVIDERINFO_HPP_DECL
#define J2CPP_ANDROID_APPWIDGET_APPWIDGETPROVIDERINFO_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace content { class ComponentName; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/content/ComponentName.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace appwidget {

	class AppWidgetProviderInfo;
	class AppWidgetProviderInfo
		: public object<AppWidgetProviderInfo>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)

		explicit AppWidgetProviderInfo(jobject jobj)
		: object<AppWidgetProviderInfo>(jobj)
		, provider(jobj)
		, minWidth(jobj)
		, minHeight(jobj)
		, updatePeriodMillis(jobj)
		, initialLayout(jobj)
		, configure(jobj)
		, label(jobj)
		, icon(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		AppWidgetProviderInfo();
		AppWidgetProviderInfo(local_ref< android::os::Parcel > const&);
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		jint describeContents();
		local_ref< java::lang::String > toString();

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::content::ComponentName > > provider;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > minWidth;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > minHeight;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > updatePeriodMillis;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > initialLayout;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< android::content::ComponentName > > configure;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > label;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > icon;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class AppWidgetProviderInfo

} //namespace appwidget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APPWIDGET_APPWIDGETPROVIDERINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APPWIDGET_APPWIDGETPROVIDERINFO_HPP_IMPL
#define J2CPP_ANDROID_APPWIDGET_APPWIDGETPROVIDERINFO_HPP_IMPL

namespace j2cpp {



android::appwidget::AppWidgetProviderInfo::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::appwidget::AppWidgetProviderInfo::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::appwidget::AppWidgetProviderInfo::AppWidgetProviderInfo()
: object<android::appwidget::AppWidgetProviderInfo>(
	call_new_object<
		android::appwidget::AppWidgetProviderInfo::J2CPP_CLASS_NAME,
		android::appwidget::AppWidgetProviderInfo::J2CPP_METHOD_NAME(0),
		android::appwidget::AppWidgetProviderInfo::J2CPP_METHOD_SIGNATURE(0)>
	()
)
, provider(get_jobject())
, minWidth(get_jobject())
, minHeight(get_jobject())
, updatePeriodMillis(get_jobject())
, initialLayout(get_jobject())
, configure(get_jobject())
, label(get_jobject())
, icon(get_jobject())
{
}



android::appwidget::AppWidgetProviderInfo::AppWidgetProviderInfo(local_ref< android::os::Parcel > const &a0)
: object<android::appwidget::AppWidgetProviderInfo>(
	call_new_object<
		android::appwidget::AppWidgetProviderInfo::J2CPP_CLASS_NAME,
		android::appwidget::AppWidgetProviderInfo::J2CPP_METHOD_NAME(1),
		android::appwidget::AppWidgetProviderInfo::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
, provider(get_jobject())
, minWidth(get_jobject())
, minHeight(get_jobject())
, updatePeriodMillis(get_jobject())
, initialLayout(get_jobject())
, configure(get_jobject())
, label(get_jobject())
, icon(get_jobject())
{
}


void android::appwidget::AppWidgetProviderInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::appwidget::AppWidgetProviderInfo::J2CPP_CLASS_NAME,
		android::appwidget::AppWidgetProviderInfo::J2CPP_METHOD_NAME(2),
		android::appwidget::AppWidgetProviderInfo::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1);
}

jint android::appwidget::AppWidgetProviderInfo::describeContents()
{
	return call_method<
		android::appwidget::AppWidgetProviderInfo::J2CPP_CLASS_NAME,
		android::appwidget::AppWidgetProviderInfo::J2CPP_METHOD_NAME(3),
		android::appwidget::AppWidgetProviderInfo::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

local_ref< java::lang::String > android::appwidget::AppWidgetProviderInfo::toString()
{
	return call_method<
		android::appwidget::AppWidgetProviderInfo::J2CPP_CLASS_NAME,
		android::appwidget::AppWidgetProviderInfo::J2CPP_METHOD_NAME(4),
		android::appwidget::AppWidgetProviderInfo::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String > >
	(get_jobject());
}



static_field<
	android::appwidget::AppWidgetProviderInfo::J2CPP_CLASS_NAME,
	android::appwidget::AppWidgetProviderInfo::J2CPP_FIELD_NAME(8),
	android::appwidget::AppWidgetProviderInfo::J2CPP_FIELD_SIGNATURE(8),
	local_ref< android::os::Parcelable_::Creator >
> android::appwidget::AppWidgetProviderInfo::CREATOR;


J2CPP_DEFINE_CLASS(android::appwidget::AppWidgetProviderInfo,"android/appwidget/AppWidgetProviderInfo")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetProviderInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetProviderInfo,1,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetProviderInfo,2,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetProviderInfo,3,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetProviderInfo,4,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetProviderInfo,5,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetProviderInfo,0,"provider","Landroid/content/ComponentName;")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetProviderInfo,1,"minWidth","I")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetProviderInfo,2,"minHeight","I")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetProviderInfo,3,"updatePeriodMillis","I")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetProviderInfo,4,"initialLayout","I")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetProviderInfo,5,"configure","Landroid/content/ComponentName;")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetProviderInfo,6,"label","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetProviderInfo,7,"icon","I")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetProviderInfo,8,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APPWIDGET_APPWIDGETPROVIDERINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
