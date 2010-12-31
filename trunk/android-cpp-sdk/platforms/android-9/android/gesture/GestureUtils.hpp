/*================================================================================
  code generated by: java2cpp
  class: android.gesture.GestureUtils
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GESTURE_GESTUREUTILS_HPP_DECL
#define J2CPP_ANDROID_GESTURE_GESTUREUTILS_HPP_DECL


namespace j2cpp { namespace java { namespace util { class ArrayList; } } }
namespace j2cpp { namespace android { namespace gesture { class OrientedBoundingBox; } } }
namespace j2cpp { namespace android { namespace gesture { class GestureStroke; } } }
namespace j2cpp { namespace android { namespace gesture { class Gesture; } } }


#include <android/gesture/Gesture.hpp>
#include <android/gesture/GestureStroke.hpp>
#include <android/gesture/OrientedBoundingBox.hpp>
#include <java/util/ArrayList.hpp>


namespace j2cpp {

namespace android { namespace gesture {

	class GestureUtils;
	class GestureUtils
		: public cpp_object<GestureUtils>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		GestureUtils(jobject jobj)
		: cpp_object<GestureUtils>(jobj)
		{
		}

		static local_ref< cpp_float_array<1> > spatialSampling(local_ref< android::gesture::Gesture > const&, cpp_int const&);
		static local_ref< cpp_float_array<1> > spatialSampling(local_ref< android::gesture::Gesture > const&, cpp_int const&, cpp_boolean const&);
		static local_ref< cpp_float_array<1> > temporalSampling(local_ref< android::gesture::GestureStroke > const&, cpp_int const&);
		static local_ref< android::gesture::OrientedBoundingBox > computeOrientedBoundingBox(local_ref< java::util::ArrayList > const&);
		static local_ref< android::gesture::OrientedBoundingBox > computeOrientedBoundingBox(local_ref< cpp_float_array<1> > const&);
	}; //class GestureUtils

} //namespace gesture
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GESTURE_GESTUREUTILS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GESTURE_GESTUREUTILS_HPP_IMPL
#define J2CPP_ANDROID_GESTURE_GESTUREUTILS_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::gesture::GestureUtils > create< android::gesture::GestureUtils>()
{
	return local_ref< android::gesture::GestureUtils >(
		environment::get().get_jenv()->NewObject(
			get_class<android::gesture::GestureUtils::J2CPP_CLASS_NAME>(),
			get_method_id<android::gesture::GestureUtils::J2CPP_CLASS_NAME, android::gesture::GestureUtils::J2CPP_METHOD_NAME(0), android::gesture::GestureUtils::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< cpp_float_array<1> > android::gesture::GestureUtils::spatialSampling(local_ref< android::gesture::Gesture > const &a0, cpp_int const &a1)
{
	return local_ref< cpp_float_array<1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_float_array<1> > android::gesture::GestureUtils::spatialSampling(local_ref< android::gesture::Gesture > const &a0, cpp_int const &a1, cpp_boolean const &a2)
{
	return local_ref< cpp_float_array<1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< cpp_float_array<1> > android::gesture::GestureUtils::temporalSampling(local_ref< android::gesture::GestureStroke > const &a0, cpp_int const &a1)
{
	return local_ref< cpp_float_array<1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::gesture::OrientedBoundingBox > android::gesture::GestureUtils::computeOrientedBoundingBox(local_ref< java::util::ArrayList > const &a0)
{
	return local_ref< android::gesture::OrientedBoundingBox >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::gesture::OrientedBoundingBox > android::gesture::GestureUtils::computeOrientedBoundingBox(local_ref< cpp_float_array<1> > const &a0)
{
	return local_ref< android::gesture::OrientedBoundingBox >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::gesture::GestureUtils,"android/gesture/GestureUtils")
J2CPP_DEFINE_METHOD(android::gesture::GestureUtils,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::gesture::GestureUtils,1,"spatialSampling","(Landroid/gesture/Gesture;I)[F")
J2CPP_DEFINE_METHOD(android::gesture::GestureUtils,2,"spatialSampling","(Landroid/gesture/Gesture;IZ)[F")
J2CPP_DEFINE_METHOD(android::gesture::GestureUtils,3,"temporalSampling","(Landroid/gesture/GestureStroke;I)[F")
J2CPP_DEFINE_METHOD(android::gesture::GestureUtils,4,"computeOrientedBoundingBox","(Ljava/util/ArrayList;)Landroid/gesture/OrientedBoundingBox;")
J2CPP_DEFINE_METHOD(android::gesture::GestureUtils,5,"computeOrientedBoundingBox","([F)Landroid/gesture/OrientedBoundingBox;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GESTURE_GESTUREUTILS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION