/*================================================================================
  code generated by: java2cpp
  class: android.graphics.drawable.shapes.RoundRectShape
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ROUNDRECTSHAPE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ROUNDRECTSHAPE_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class RectF; } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace shapes { class Shape; } } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace shapes { class RectShape; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/Paint.hpp>
#include <android/graphics/RectF.hpp>
#include <android/graphics/drawable/shapes/RectShape.hpp>
#include <android/graphics/drawable/shapes/Shape.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable { namespace shapes {

	class RoundRectShape;
	class RoundRectShape
		: public cpp_object<RoundRectShape>
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

		RoundRectShape(jobject jobj)
		: cpp_object<RoundRectShape>(jobj)
		{
		}

		void draw(local_ref< android::graphics::Canvas > const&, local_ref< android::graphics::Paint > const&);
		local_ref< android::graphics::drawable::shapes::RoundRectShape > clone();
		local_ref< android::graphics::drawable::shapes::RectShape > clone_1();
		local_ref< android::graphics::drawable::shapes::Shape > clone_2();
		local_ref< java::lang::Object > clone_3();
	}; //class RoundRectShape

} //namespace shapes
} //namespace drawable
} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ROUNDRECTSHAPE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ROUNDRECTSHAPE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ROUNDRECTSHAPE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::graphics::drawable::shapes::RoundRectShape > create< android::graphics::drawable::shapes::RoundRectShape>(local_ref< cpp_float_array<1> > const &a0, local_ref< android::graphics::RectF > const &a1, local_ref< cpp_float_array<1> > const &a2)
{
	return local_ref< android::graphics::drawable::shapes::RoundRectShape >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::drawable::shapes::RoundRectShape::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::drawable::shapes::RoundRectShape::J2CPP_CLASS_NAME, android::graphics::drawable::shapes::RoundRectShape::J2CPP_METHOD_NAME(0), android::graphics::drawable::shapes::RoundRectShape::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::graphics::drawable::shapes::RoundRectShape::draw(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::Paint > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


local_ref< android::graphics::drawable::shapes::RoundRectShape > android::graphics::drawable::shapes::RoundRectShape::clone()
{
	return local_ref< android::graphics::drawable::shapes::RoundRectShape >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< android::graphics::drawable::shapes::RectShape > android::graphics::drawable::shapes::RoundRectShape::clone_1()
{
	return local_ref< android::graphics::drawable::shapes::RectShape >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< android::graphics::drawable::shapes::Shape > android::graphics::drawable::shapes::RoundRectShape::clone_2()
{
	return local_ref< android::graphics::drawable::shapes::Shape >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::Object > android::graphics::drawable::shapes::RoundRectShape::clone_3()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::shapes::RoundRectShape,"android/graphics/drawable/shapes/RoundRectShape")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::RoundRectShape,0,"<init>","([FLandroid/graphics/RectF;[F)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::RoundRectShape,1,"draw","(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::RoundRectShape,2,"onResize","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::RoundRectShape,3,"clone","()Landroid/graphics/drawable/shapes/RoundRectShape;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::RoundRectShape,4,"clone","()Landroid/graphics/drawable/shapes/RectShape;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::RoundRectShape,5,"clone","()Landroid/graphics/drawable/shapes/Shape;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::RoundRectShape,6,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ROUNDRECTSHAPE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
