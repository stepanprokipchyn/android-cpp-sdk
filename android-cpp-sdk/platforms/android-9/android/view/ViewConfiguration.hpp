/*================================================================================
  code generated by: java2cpp
  class: android.view.ViewConfiguration
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_VIEWCONFIGURATION_HPP_DECL
#define J2CPP_ANDROID_VIEW_VIEWCONFIGURATION_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }


#include <android/content/Context.hpp>


namespace j2cpp {

namespace android { namespace view {

	class ViewConfiguration;
	class ViewConfiguration
		: public cpp_object<ViewConfiguration>
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
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)

		ViewConfiguration(jobject jobj)
		: cpp_object<ViewConfiguration>(jobj)
		{
		}

		static local_ref< android::view::ViewConfiguration > get(local_ref< android::content::Context > const&);
		static cpp_int getScrollBarSize();
		cpp_int getScaledScrollBarSize();
		static cpp_int getScrollBarFadeDuration();
		static cpp_int getScrollDefaultDelay();
		static cpp_int getFadingEdgeLength();
		cpp_int getScaledFadingEdgeLength();
		static cpp_int getPressedStateDuration();
		static cpp_int getLongPressTimeout();
		static cpp_int getTapTimeout();
		static cpp_int getJumpTapTimeout();
		static cpp_int getDoubleTapTimeout();
		static cpp_int getEdgeSlop();
		cpp_int getScaledEdgeSlop();
		static cpp_int getTouchSlop();
		cpp_int getScaledTouchSlop();
		cpp_int getScaledPagingTouchSlop();
		cpp_int getScaledDoubleTapSlop();
		static cpp_int getWindowTouchSlop();
		cpp_int getScaledWindowTouchSlop();
		static cpp_int getMinimumFlingVelocity();
		cpp_int getScaledMinimumFlingVelocity();
		static cpp_int getMaximumFlingVelocity();
		cpp_int getScaledMaximumFlingVelocity();
		static cpp_int getMaximumDrawingCacheSize();
		cpp_int getScaledMaximumDrawingCacheSize();
		cpp_int getScaledOverscrollDistance();
		cpp_int getScaledOverflingDistance();
		static cpp_long getZoomControlsTimeout();
		static cpp_long getGlobalActionKeyTimeout();
		static cpp_float getScrollFriction();
	}; //class ViewConfiguration

} //namespace view
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_VIEWCONFIGURATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_VIEWCONFIGURATION_HPP_IMPL
#define J2CPP_ANDROID_VIEW_VIEWCONFIGURATION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::view::ViewConfiguration > create< android::view::ViewConfiguration>()
{
	return local_ref< android::view::ViewConfiguration >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::ViewConfiguration::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::ViewConfiguration::J2CPP_CLASS_NAME, android::view::ViewConfiguration::J2CPP_METHOD_NAME(0), android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< android::view::ViewConfiguration > android::view::ViewConfiguration::get(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::view::ViewConfiguration >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::view::ViewConfiguration::getScrollBarSize()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getScaledScrollBarSize()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getScrollBarFadeDuration()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getScrollDefaultDelay()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getFadingEdgeLength()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getScaledFadingEdgeLength()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getPressedStateDuration()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getLongPressTimeout()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), true>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getTapTimeout()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), true>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getJumpTapTimeout()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), true>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getDoubleTapTimeout()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), true>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getEdgeSlop()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), true>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getScaledEdgeSlop()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getTouchSlop()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), true>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getScaledTouchSlop()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getScaledPagingTouchSlop()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getScaledDoubleTapSlop()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getWindowTouchSlop()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), true>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getScaledWindowTouchSlop()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getMinimumFlingVelocity()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), true>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getScaledMinimumFlingVelocity()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getMaximumFlingVelocity()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), true>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getScaledMaximumFlingVelocity()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getMaximumDrawingCacheSize()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), true>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getScaledMaximumDrawingCacheSize()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getScaledOverscrollDistance()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>()
		)
	);
}

cpp_int android::view::ViewConfiguration::getScaledOverflingDistance()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>()
		)
	);
}

cpp_long android::view::ViewConfiguration::getZoomControlsTimeout()
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), true>()
		)
	);
}

cpp_long android::view::ViewConfiguration::getGlobalActionKeyTimeout()
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), true>()
		)
	);
}

cpp_float android::view::ViewConfiguration::getScrollFriction()
{
	return cpp_float(
		environment::get().get_jenv()->CallStaticFloatMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), true>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::view::ViewConfiguration,"android/view/ViewConfiguration")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,1,"get","(Landroid/content/Context;)Landroid/view/ViewConfiguration;")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,2,"getScrollBarSize","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,3,"getScaledScrollBarSize","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,4,"getScrollBarFadeDuration","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,5,"getScrollDefaultDelay","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,6,"getFadingEdgeLength","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,7,"getScaledFadingEdgeLength","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,8,"getPressedStateDuration","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,9,"getLongPressTimeout","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,10,"getTapTimeout","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,11,"getJumpTapTimeout","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,12,"getDoubleTapTimeout","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,13,"getEdgeSlop","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,14,"getScaledEdgeSlop","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,15,"getTouchSlop","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,16,"getScaledTouchSlop","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,17,"getScaledPagingTouchSlop","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,18,"getScaledDoubleTapSlop","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,19,"getWindowTouchSlop","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,20,"getScaledWindowTouchSlop","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,21,"getMinimumFlingVelocity","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,22,"getScaledMinimumFlingVelocity","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,23,"getMaximumFlingVelocity","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,24,"getScaledMaximumFlingVelocity","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,25,"getMaximumDrawingCacheSize","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,26,"getScaledMaximumDrawingCacheSize","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,27,"getScaledOverscrollDistance","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,28,"getScaledOverflingDistance","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,29,"getZoomControlsTimeout","()J")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,30,"getGlobalActionKeyTimeout","()J")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,31,"getScrollFriction","()F")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_VIEWCONFIGURATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
