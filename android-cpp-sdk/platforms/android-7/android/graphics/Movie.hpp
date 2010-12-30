/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.Movie
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_MOVIE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_MOVIE_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/Paint.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class Movie;
	class Movie
		: public object<Movie>
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

		explicit Movie(jobject jobj)
		: object<Movie>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jint width();
		jint height();
		jboolean isOpaque();
		jint duration();
		jboolean setTime(jint);
		void draw(local_ref< android::graphics::Canvas >  const&, jfloat, jfloat, local_ref< android::graphics::Paint >  const&);
		void draw(local_ref< android::graphics::Canvas >  const&, jfloat, jfloat);
		static local_ref< android::graphics::Movie > decodeStream(local_ref< java::io::InputStream >  const&);
		static local_ref< android::graphics::Movie > decodeByteArray(local_ref< array<jbyte,1> >  const&, jint, jint);
		static local_ref< android::graphics::Movie > decodeFile(local_ref< java::lang::String >  const&);
	}; //class Movie

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_MOVIE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_MOVIE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_MOVIE_HPP_IMPL

namespace j2cpp {



android::graphics::Movie::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jint android::graphics::Movie::width()
{
	return call_method<
		android::graphics::Movie::J2CPP_CLASS_NAME,
		android::graphics::Movie::J2CPP_METHOD_NAME(1),
		android::graphics::Movie::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject());
}

jint android::graphics::Movie::height()
{
	return call_method<
		android::graphics::Movie::J2CPP_CLASS_NAME,
		android::graphics::Movie::J2CPP_METHOD_NAME(2),
		android::graphics::Movie::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

jboolean android::graphics::Movie::isOpaque()
{
	return call_method<
		android::graphics::Movie::J2CPP_CLASS_NAME,
		android::graphics::Movie::J2CPP_METHOD_NAME(3),
		android::graphics::Movie::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject());
}

jint android::graphics::Movie::duration()
{
	return call_method<
		android::graphics::Movie::J2CPP_CLASS_NAME,
		android::graphics::Movie::J2CPP_METHOD_NAME(4),
		android::graphics::Movie::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

jboolean android::graphics::Movie::setTime(jint a0)
{
	return call_method<
		android::graphics::Movie::J2CPP_CLASS_NAME,
		android::graphics::Movie::J2CPP_METHOD_NAME(5),
		android::graphics::Movie::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject(), a0);
}

void android::graphics::Movie::draw(local_ref< android::graphics::Canvas > const &a0, jfloat a1, jfloat a2, local_ref< android::graphics::Paint > const &a3)
{
	return call_method<
		android::graphics::Movie::J2CPP_CLASS_NAME,
		android::graphics::Movie::J2CPP_METHOD_NAME(6),
		android::graphics::Movie::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void android::graphics::Movie::draw(local_ref< android::graphics::Canvas > const &a0, jfloat a1, jfloat a2)
{
	return call_method<
		android::graphics::Movie::J2CPP_CLASS_NAME,
		android::graphics::Movie::J2CPP_METHOD_NAME(7),
		android::graphics::Movie::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1, a2);
}

local_ref< android::graphics::Movie > android::graphics::Movie::decodeStream(local_ref< java::io::InputStream > const &a0)
{
	return call_static_method<
		android::graphics::Movie::J2CPP_CLASS_NAME,
		android::graphics::Movie::J2CPP_METHOD_NAME(8),
		android::graphics::Movie::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::graphics::Movie > >
	(a0);
}

local_ref< android::graphics::Movie > android::graphics::Movie::decodeByteArray(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_static_method<
		android::graphics::Movie::J2CPP_CLASS_NAME,
		android::graphics::Movie::J2CPP_METHOD_NAME(9),
		android::graphics::Movie::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::graphics::Movie > >
	(a0, a1, a2);
}

local_ref< android::graphics::Movie > android::graphics::Movie::decodeFile(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::graphics::Movie::J2CPP_CLASS_NAME,
		android::graphics::Movie::J2CPP_METHOD_NAME(10),
		android::graphics::Movie::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< android::graphics::Movie > >
	(a0);
}


J2CPP_DEFINE_CLASS(android::graphics::Movie,"android/graphics/Movie")
J2CPP_DEFINE_METHOD(android::graphics::Movie,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::Movie,1,"width","()I")
J2CPP_DEFINE_METHOD(android::graphics::Movie,2,"height","()I")
J2CPP_DEFINE_METHOD(android::graphics::Movie,3,"isOpaque","()Z")
J2CPP_DEFINE_METHOD(android::graphics::Movie,4,"duration","()I")
J2CPP_DEFINE_METHOD(android::graphics::Movie,5,"setTime","(I)Z")
J2CPP_DEFINE_METHOD(android::graphics::Movie,6,"draw","(Landroid/graphics/Canvas;FFLandroid/graphics/Paint;)V")
J2CPP_DEFINE_METHOD(android::graphics::Movie,7,"draw","(Landroid/graphics/Canvas;FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Movie,8,"decodeStream","(Ljava/io/InputStream;)Landroid/graphics/Movie;")
J2CPP_DEFINE_METHOD(android::graphics::Movie,9,"decodeByteArray","([BII)Landroid/graphics/Movie;")
J2CPP_DEFINE_METHOD(android::graphics::Movie,10,"decodeFile","(Ljava/lang/String;)Landroid/graphics/Movie;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_MOVIE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
