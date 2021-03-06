/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.opengl.GLUtils
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OPENGL_GLUTILS_HPP_DECL
#define J2CPP_ANDROID_OPENGL_GLUTILS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { class Bitmap; } } }


#include <android/graphics/Bitmap.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace opengl {

	class GLUtils;
	class GLUtils
		: public object<GLUtils>
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

		explicit GLUtils(jobject jobj)
		: object<GLUtils>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static jint getInternalFormat(local_ref< android::graphics::Bitmap >  const&);
		static jint getType(local_ref< android::graphics::Bitmap >  const&);
		static void texImage2D(jint, jint, jint, local_ref< android::graphics::Bitmap >  const&, jint);
		static void texImage2D(jint, jint, jint, local_ref< android::graphics::Bitmap >  const&, jint, jint);
		static void texImage2D(jint, jint, local_ref< android::graphics::Bitmap >  const&, jint);
		static void texSubImage2D(jint, jint, jint, jint, local_ref< android::graphics::Bitmap >  const&);
		static void texSubImage2D(jint, jint, jint, jint, local_ref< android::graphics::Bitmap >  const&, jint, jint);
	}; //class GLUtils

} //namespace opengl
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OPENGL_GLUTILS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OPENGL_GLUTILS_HPP_IMPL
#define J2CPP_ANDROID_OPENGL_GLUTILS_HPP_IMPL

namespace j2cpp {



android::opengl::GLUtils::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jint android::opengl::GLUtils::getInternalFormat(local_ref< android::graphics::Bitmap > const &a0)
{
	return call_static_method<
		android::opengl::GLUtils::J2CPP_CLASS_NAME,
		android::opengl::GLUtils::J2CPP_METHOD_NAME(1),
		android::opengl::GLUtils::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(a0);
}

jint android::opengl::GLUtils::getType(local_ref< android::graphics::Bitmap > const &a0)
{
	return call_static_method<
		android::opengl::GLUtils::J2CPP_CLASS_NAME,
		android::opengl::GLUtils::J2CPP_METHOD_NAME(2),
		android::opengl::GLUtils::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(a0);
}

void android::opengl::GLUtils::texImage2D(jint a0, jint a1, jint a2, local_ref< android::graphics::Bitmap > const &a3, jint a4)
{
	return call_static_method<
		android::opengl::GLUtils::J2CPP_CLASS_NAME,
		android::opengl::GLUtils::J2CPP_METHOD_NAME(3),
		android::opengl::GLUtils::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(a0, a1, a2, a3, a4);
}

void android::opengl::GLUtils::texImage2D(jint a0, jint a1, jint a2, local_ref< android::graphics::Bitmap > const &a3, jint a4, jint a5)
{
	return call_static_method<
		android::opengl::GLUtils::J2CPP_CLASS_NAME,
		android::opengl::GLUtils::J2CPP_METHOD_NAME(4),
		android::opengl::GLUtils::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(a0, a1, a2, a3, a4, a5);
}

void android::opengl::GLUtils::texImage2D(jint a0, jint a1, local_ref< android::graphics::Bitmap > const &a2, jint a3)
{
	return call_static_method<
		android::opengl::GLUtils::J2CPP_CLASS_NAME,
		android::opengl::GLUtils::J2CPP_METHOD_NAME(5),
		android::opengl::GLUtils::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(a0, a1, a2, a3);
}

void android::opengl::GLUtils::texSubImage2D(jint a0, jint a1, jint a2, jint a3, local_ref< android::graphics::Bitmap > const &a4)
{
	return call_static_method<
		android::opengl::GLUtils::J2CPP_CLASS_NAME,
		android::opengl::GLUtils::J2CPP_METHOD_NAME(6),
		android::opengl::GLUtils::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(a0, a1, a2, a3, a4);
}

void android::opengl::GLUtils::texSubImage2D(jint a0, jint a1, jint a2, jint a3, local_ref< android::graphics::Bitmap > const &a4, jint a5, jint a6)
{
	return call_static_method<
		android::opengl::GLUtils::J2CPP_CLASS_NAME,
		android::opengl::GLUtils::J2CPP_METHOD_NAME(7),
		android::opengl::GLUtils::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(a0, a1, a2, a3, a4, a5, a6);
}


J2CPP_DEFINE_CLASS(android::opengl::GLUtils,"android/opengl/GLUtils")
J2CPP_DEFINE_METHOD(android::opengl::GLUtils,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::opengl::GLUtils,1,"getInternalFormat","(Landroid/graphics/Bitmap;)I")
J2CPP_DEFINE_METHOD(android::opengl::GLUtils,2,"getType","(Landroid/graphics/Bitmap;)I")
J2CPP_DEFINE_METHOD(android::opengl::GLUtils,3,"texImage2D","(IIILandroid/graphics/Bitmap;I)V")
J2CPP_DEFINE_METHOD(android::opengl::GLUtils,4,"texImage2D","(IIILandroid/graphics/Bitmap;II)V")
J2CPP_DEFINE_METHOD(android::opengl::GLUtils,5,"texImage2D","(IILandroid/graphics/Bitmap;I)V")
J2CPP_DEFINE_METHOD(android::opengl::GLUtils,6,"texSubImage2D","(IIIILandroid/graphics/Bitmap;)V")
J2CPP_DEFINE_METHOD(android::opengl::GLUtils,7,"texSubImage2D","(IIIILandroid/graphics/Bitmap;II)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OPENGL_GLUTILS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
