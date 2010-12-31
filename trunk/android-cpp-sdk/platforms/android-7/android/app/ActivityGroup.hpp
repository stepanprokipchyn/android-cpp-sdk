/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.ActivityGroup
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_ACTIVITYGROUP_HPP_DECL
#define J2CPP_ANDROID_APP_ACTIVITYGROUP_HPP_DECL


namespace j2cpp { namespace android { namespace app { class Activity; } } }
namespace j2cpp { namespace android { namespace app { class LocalActivityManager; } } }


#include <android/app/Activity.hpp>
#include <android/app/LocalActivityManager.hpp>


namespace j2cpp {

namespace android { namespace app {

	class ActivityGroup;
	class ActivityGroup
		: public object<ActivityGroup>
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

		explicit ActivityGroup(jobject jobj)
		: object<ActivityGroup>(jobj)
		{
		}

		operator local_ref<android::app::Activity>() const;


		ActivityGroup();
		ActivityGroup(jboolean);
		local_ref< android::app::Activity > getCurrentActivity();
		local_ref< android::app::LocalActivityManager > getLocalActivityManager();
	}; //class ActivityGroup

} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_ACTIVITYGROUP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_ACTIVITYGROUP_HPP_IMPL
#define J2CPP_ANDROID_APP_ACTIVITYGROUP_HPP_IMPL

namespace j2cpp {



android::app::ActivityGroup::operator local_ref<android::app::Activity>() const
{
	return local_ref<android::app::Activity>(get_jobject());
}


android::app::ActivityGroup::ActivityGroup()
: object<android::app::ActivityGroup>(
	call_new_object<
		android::app::ActivityGroup::J2CPP_CLASS_NAME,
		android::app::ActivityGroup::J2CPP_METHOD_NAME(0),
		android::app::ActivityGroup::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



android::app::ActivityGroup::ActivityGroup(jboolean a0)
: object<android::app::ActivityGroup>(
	call_new_object<
		android::app::ActivityGroup::J2CPP_CLASS_NAME,
		android::app::ActivityGroup::J2CPP_METHOD_NAME(1),
		android::app::ActivityGroup::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}








local_ref< android::app::Activity > android::app::ActivityGroup::getCurrentActivity()
{
	return call_method<
		android::app::ActivityGroup::J2CPP_CLASS_NAME,
		android::app::ActivityGroup::J2CPP_METHOD_NAME(8),
		android::app::ActivityGroup::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::app::Activity > >
	(get_jobject());
}

local_ref< android::app::LocalActivityManager > android::app::ActivityGroup::getLocalActivityManager()
{
	return call_method<
		android::app::ActivityGroup::J2CPP_CLASS_NAME,
		android::app::ActivityGroup::J2CPP_METHOD_NAME(9),
		android::app::ActivityGroup::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::app::LocalActivityManager > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::app::ActivityGroup,"android/app/ActivityGroup")
J2CPP_DEFINE_METHOD(android::app::ActivityGroup,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::ActivityGroup,1,"<init>","(Z)V")
J2CPP_DEFINE_METHOD(android::app::ActivityGroup,2,"onCreate","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::app::ActivityGroup,3,"onResume","()V")
J2CPP_DEFINE_METHOD(android::app::ActivityGroup,4,"onSaveInstanceState","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::app::ActivityGroup,5,"onPause","()V")
J2CPP_DEFINE_METHOD(android::app::ActivityGroup,6,"onStop","()V")
J2CPP_DEFINE_METHOD(android::app::ActivityGroup,7,"onDestroy","()V")
J2CPP_DEFINE_METHOD(android::app::ActivityGroup,8,"getCurrentActivity","()Landroid/app/Activity;")
J2CPP_DEFINE_METHOD(android::app::ActivityGroup,9,"getLocalActivityManager","()Landroid/app/LocalActivityManager;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_ACTIVITYGROUP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION