/*================================================================================
  code generated by: java2cpp
  class: android.graphics.BlurMaskFilter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_BLURMASKFILTER_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_BLURMASKFILTER_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { namespace BlurMaskFilter_ { class Blur; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <android/graphics/BlurMaskFilter.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class BlurMaskFilter;
	namespace BlurMaskFilter_ {

		class Blur;
		class Blur
			: public cpp_object<Blur>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)

			Blur(jobject jobj)
			: cpp_object<Blur>(jobj)
			{
			}

			static local_ref< cpp_object_array<android::graphics::BlurMaskFilter_::Blur, 1> > values();
			static local_ref< android::graphics::BlurMaskFilter_::Blur > valueOf(local_ref< java::lang::String > const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::graphics::BlurMaskFilter_::Blur > > INNER;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::graphics::BlurMaskFilter_::Blur > > NORMAL;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::graphics::BlurMaskFilter_::Blur > > OUTER;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< android::graphics::BlurMaskFilter_::Blur > > SOLID;
		}; //class Blur

	} //namespace BlurMaskFilter_

	class BlurMaskFilter
		: public cpp_object<BlurMaskFilter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		typedef BlurMaskFilter_::Blur Blur;

		BlurMaskFilter(jobject jobj)
		: cpp_object<BlurMaskFilter>(jobj)
		{
		}

	}; //class BlurMaskFilter

} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_BLURMASKFILTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_BLURMASKFILTER_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_BLURMASKFILTER_HPP_IMPL

namespace j2cpp {



local_ref< cpp_object_array<android::graphics::BlurMaskFilter_::Blur, 1> > android::graphics::BlurMaskFilter_::Blur::values()
{
	return local_ref< cpp_object_array<android::graphics::BlurMaskFilter_::Blur, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), true>()
		)
	);
}

local_ref< android::graphics::BlurMaskFilter_::Blur > android::graphics::BlurMaskFilter_::Blur::valueOf(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::graphics::BlurMaskFilter_::Blur >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::graphics::BlurMaskFilter_::Blur > create< android::graphics::BlurMaskFilter_::Blur>(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< android::graphics::BlurMaskFilter_::Blur >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::BlurMaskFilter_::Blur::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::BlurMaskFilter_::Blur::J2CPP_CLASS_NAME, android::graphics::BlurMaskFilter_::Blur::J2CPP_METHOD_NAME(2), android::graphics::BlurMaskFilter_::Blur::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::graphics::BlurMaskFilter_::Blur::J2CPP_CLASS_NAME,
	android::graphics::BlurMaskFilter_::Blur::J2CPP_FIELD_NAME(0),
	android::graphics::BlurMaskFilter_::Blur::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::graphics::BlurMaskFilter_::Blur >
> android::graphics::BlurMaskFilter_::Blur::INNER;

static_field<
	android::graphics::BlurMaskFilter_::Blur::J2CPP_CLASS_NAME,
	android::graphics::BlurMaskFilter_::Blur::J2CPP_FIELD_NAME(1),
	android::graphics::BlurMaskFilter_::Blur::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::graphics::BlurMaskFilter_::Blur >
> android::graphics::BlurMaskFilter_::Blur::NORMAL;

static_field<
	android::graphics::BlurMaskFilter_::Blur::J2CPP_CLASS_NAME,
	android::graphics::BlurMaskFilter_::Blur::J2CPP_FIELD_NAME(2),
	android::graphics::BlurMaskFilter_::Blur::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::graphics::BlurMaskFilter_::Blur >
> android::graphics::BlurMaskFilter_::Blur::OUTER;

static_field<
	android::graphics::BlurMaskFilter_::Blur::J2CPP_CLASS_NAME,
	android::graphics::BlurMaskFilter_::Blur::J2CPP_FIELD_NAME(3),
	android::graphics::BlurMaskFilter_::Blur::J2CPP_FIELD_SIGNATURE(3),
	local_ref< android::graphics::BlurMaskFilter_::Blur >
> android::graphics::BlurMaskFilter_::Blur::SOLID;


J2CPP_DEFINE_CLASS(android::graphics::BlurMaskFilter_::Blur,"android/graphics/BlurMaskFilter$Blur")
J2CPP_DEFINE_METHOD(android::graphics::BlurMaskFilter_::Blur,0,"values","()[android.graphics.BlurMaskFilter.Blur")
J2CPP_DEFINE_METHOD(android::graphics::BlurMaskFilter_::Blur,1,"valueOf","(Ljava/lang/String;)Landroid/graphics/BlurMaskFilter$Blur;")
J2CPP_DEFINE_METHOD(android::graphics::BlurMaskFilter_::Blur,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::graphics::BlurMaskFilter_::Blur,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::BlurMaskFilter_::Blur,0,"INNER","Landroid/graphics/BlurMaskFilter$Blur;")
J2CPP_DEFINE_FIELD(android::graphics::BlurMaskFilter_::Blur,1,"NORMAL","Landroid/graphics/BlurMaskFilter$Blur;")
J2CPP_DEFINE_FIELD(android::graphics::BlurMaskFilter_::Blur,2,"OUTER","Landroid/graphics/BlurMaskFilter$Blur;")
J2CPP_DEFINE_FIELD(android::graphics::BlurMaskFilter_::Blur,3,"SOLID","Landroid/graphics/BlurMaskFilter$Blur;")
J2CPP_DEFINE_FIELD(android::graphics::BlurMaskFilter_::Blur,4,"$VALUES","[android.graphics.BlurMaskFilter.Blur")


template <>
local_ref< android::graphics::BlurMaskFilter > create< android::graphics::BlurMaskFilter>(cpp_float const &a0, local_ref< android::graphics::BlurMaskFilter_::Blur > const &a1)
{
	return local_ref< android::graphics::BlurMaskFilter >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::BlurMaskFilter::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::BlurMaskFilter::J2CPP_CLASS_NAME, android::graphics::BlurMaskFilter::J2CPP_METHOD_NAME(0), android::graphics::BlurMaskFilter::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::graphics::BlurMaskFilter,"android/graphics/BlurMaskFilter")
J2CPP_DEFINE_METHOD(android::graphics::BlurMaskFilter,0,"<init>","(FLandroid/graphics/BlurMaskFilter$Blur;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_BLURMASKFILTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
