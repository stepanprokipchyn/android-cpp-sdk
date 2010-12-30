/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.animation.Interpolator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_INTERPOLATOR_HPP_DECL
#define J2CPP_ANDROID_VIEW_ANIMATION_INTERPOLATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view { namespace animation {

	class Interpolator;
	class Interpolator
		: public object<Interpolator>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit Interpolator(jobject jobj)
		: object<Interpolator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jfloat getInterpolation(jfloat);
	}; //class Interpolator

} //namespace animation
} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_INTERPOLATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_INTERPOLATOR_HPP_IMPL
#define J2CPP_ANDROID_VIEW_ANIMATION_INTERPOLATOR_HPP_IMPL

namespace j2cpp {



android::view::animation::Interpolator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jfloat android::view::animation::Interpolator::getInterpolation(jfloat a0)
{
	return call_method<
		android::view::animation::Interpolator::J2CPP_CLASS_NAME,
		android::view::animation::Interpolator::J2CPP_METHOD_NAME(0),
		android::view::animation::Interpolator::J2CPP_METHOD_SIGNATURE(0), 
		jfloat >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::view::animation::Interpolator,"android/view/animation/Interpolator")
J2CPP_DEFINE_METHOD(android::view::animation::Interpolator,0,"getInterpolation","(F)F")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_INTERPOLATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
