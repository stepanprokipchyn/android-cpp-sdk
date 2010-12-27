/*================================================================================
  code generated by: java2cpp
  class: android.opengl.GLSurfaceView
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OPENGL_GLSURFACEVIEW_HPP_DECL
#define J2CPP_ANDROID_OPENGL_GLSURFACEVIEW_HPP_DECL


namespace j2cpp { namespace javax { namespace microedition { namespace khronos { namespace egl { class EGLContext; } } } } }
namespace j2cpp { namespace javax { namespace microedition { namespace khronos { namespace egl { class EGLSurface; } } } } }
namespace j2cpp { namespace javax { namespace microedition { namespace khronos { namespace egl { class EGLDisplay; } } } } }
namespace j2cpp { namespace javax { namespace microedition { namespace khronos { namespace egl { class EGL10; } } } } }
namespace j2cpp { namespace javax { namespace microedition { namespace khronos { namespace egl { class EGLConfig; } } } } }
namespace j2cpp { namespace javax { namespace microedition { namespace khronos { namespace opengles { class GL10; } } } } }
namespace j2cpp { namespace javax { namespace microedition { namespace khronos { namespace opengles { class GL; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { class SurfaceHolder; } } }
namespace j2cpp { namespace android { namespace opengl { namespace GLSurfaceView_ { class Renderer; } } } }
namespace j2cpp { namespace android { namespace opengl { namespace GLSurfaceView_ { class GLWrapper; } } } }
namespace j2cpp { namespace android { namespace opengl { namespace GLSurfaceView_ { class EGLWindowSurfaceFactory; } } } }
namespace j2cpp { namespace android { namespace opengl { namespace GLSurfaceView_ { class EGLConfigChooser; } } } }
namespace j2cpp { namespace android { namespace opengl { namespace GLSurfaceView_ { class EGLContextFactory; } } } }


#include <android/content/Context.hpp>
#include <android/opengl/GLSurfaceView.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/SurfaceHolder.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <javax/microedition/khronos/egl/EGL10.hpp>
#include <javax/microedition/khronos/egl/EGLConfig.hpp>
#include <javax/microedition/khronos/egl/EGLContext.hpp>
#include <javax/microedition/khronos/egl/EGLDisplay.hpp>
#include <javax/microedition/khronos/egl/EGLSurface.hpp>
#include <javax/microedition/khronos/opengles/GL.hpp>
#include <javax/microedition/khronos/opengles/GL10.hpp>


namespace j2cpp {

namespace android { namespace opengl {

	class GLSurfaceView;
	namespace GLSurfaceView_ {

		class Renderer;
		class Renderer
			: public cpp_object<Renderer>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)

			Renderer(jobject jobj)
			: cpp_object<Renderer>(jobj)
			{
			}

			void onSurfaceCreated(local_ref< javax::microedition::khronos::opengles::GL10 > const&, local_ref< javax::microedition::khronos::egl::EGLConfig > const&);
			void onSurfaceChanged(local_ref< javax::microedition::khronos::opengles::GL10 > const&, cpp_int const&, cpp_int const&);
			void onDrawFrame(local_ref< javax::microedition::khronos::opengles::GL10 > const&);
		}; //class Renderer

		class GLWrapper;
		class GLWrapper
			: public cpp_object<GLWrapper>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			GLWrapper(jobject jobj)
			: cpp_object<GLWrapper>(jobj)
			{
			}

			local_ref< javax::microedition::khronos::opengles::GL > wrap(local_ref< javax::microedition::khronos::opengles::GL > const&);
		}; //class GLWrapper

		class EGLWindowSurfaceFactory;
		class EGLWindowSurfaceFactory
			: public cpp_object<EGLWindowSurfaceFactory>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			EGLWindowSurfaceFactory(jobject jobj)
			: cpp_object<EGLWindowSurfaceFactory>(jobj)
			{
			}

			local_ref< javax::microedition::khronos::egl::EGLSurface > createWindowSurface(local_ref< javax::microedition::khronos::egl::EGL10 > const&, local_ref< javax::microedition::khronos::egl::EGLDisplay > const&, local_ref< javax::microedition::khronos::egl::EGLConfig > const&, local_ref< java::lang::Object > const&);
			void destroySurface(local_ref< javax::microedition::khronos::egl::EGL10 > const&, local_ref< javax::microedition::khronos::egl::EGLDisplay > const&, local_ref< javax::microedition::khronos::egl::EGLSurface > const&);
		}; //class EGLWindowSurfaceFactory

		class EGLConfigChooser;
		class EGLConfigChooser
			: public cpp_object<EGLConfigChooser>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			EGLConfigChooser(jobject jobj)
			: cpp_object<EGLConfigChooser>(jobj)
			{
			}

			local_ref< javax::microedition::khronos::egl::EGLConfig > chooseConfig(local_ref< javax::microedition::khronos::egl::EGL10 > const&, local_ref< javax::microedition::khronos::egl::EGLDisplay > const&);
		}; //class EGLConfigChooser

		class EGLContextFactory;
		class EGLContextFactory
			: public cpp_object<EGLContextFactory>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			EGLContextFactory(jobject jobj)
			: cpp_object<EGLContextFactory>(jobj)
			{
			}

			local_ref< javax::microedition::khronos::egl::EGLContext > createContext(local_ref< javax::microedition::khronos::egl::EGL10 > const&, local_ref< javax::microedition::khronos::egl::EGLDisplay > const&, local_ref< javax::microedition::khronos::egl::EGLConfig > const&);
			void destroyContext(local_ref< javax::microedition::khronos::egl::EGL10 > const&, local_ref< javax::microedition::khronos::egl::EGLDisplay > const&, local_ref< javax::microedition::khronos::egl::EGLContext > const&);
		}; //class EGLContextFactory

	} //namespace GLSurfaceView_

	class GLSurfaceView
		: public cpp_object<GLSurfaceView>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		typedef GLSurfaceView_::Renderer Renderer;
		typedef GLSurfaceView_::GLWrapper GLWrapper;
		typedef GLSurfaceView_::EGLWindowSurfaceFactory EGLWindowSurfaceFactory;
		typedef GLSurfaceView_::EGLConfigChooser EGLConfigChooser;
		typedef GLSurfaceView_::EGLContextFactory EGLContextFactory;

		GLSurfaceView(jobject jobj)
		: cpp_object<GLSurfaceView>(jobj)
		{
		}

		void setGLWrapper(local_ref< android::opengl::GLSurfaceView_::GLWrapper > const&);
		void setDebugFlags(cpp_int const&);
		cpp_int getDebugFlags();
		void setRenderer(local_ref< android::opengl::GLSurfaceView_::Renderer > const&);
		void setEGLContextFactory(local_ref< android::opengl::GLSurfaceView_::EGLContextFactory > const&);
		void setEGLWindowSurfaceFactory(local_ref< android::opengl::GLSurfaceView_::EGLWindowSurfaceFactory > const&);
		void setEGLConfigChooser(local_ref< android::opengl::GLSurfaceView_::EGLConfigChooser > const&);
		void setEGLConfigChooser(cpp_boolean const&);
		void setEGLConfigChooser(cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);
		void setEGLContextClientVersion(cpp_int const&);
		void setRenderMode(cpp_int const&);
		cpp_int getRenderMode();
		void requestRender();
		void surfaceCreated(local_ref< android::view::SurfaceHolder > const&);
		void surfaceDestroyed(local_ref< android::view::SurfaceHolder > const&);
		void surfaceChanged(local_ref< android::view::SurfaceHolder > const&, cpp_int const&, cpp_int const&, cpp_int const&);
		void onPause();
		void onResume();
		void queueEvent(local_ref< java::lang::Runnable > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > RENDERMODE_WHEN_DIRTY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > RENDERMODE_CONTINUOUSLY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > DEBUG_CHECK_GL_ERROR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > DEBUG_LOG_GL_CALLS;
	}; //class GLSurfaceView

} //namespace opengl
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_OPENGL_GLSURFACEVIEW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OPENGL_GLSURFACEVIEW_HPP_IMPL
#define J2CPP_ANDROID_OPENGL_GLSURFACEVIEW_HPP_IMPL

namespace j2cpp {



void android::opengl::GLSurfaceView_::Renderer::onSurfaceCreated(local_ref< javax::microedition::khronos::opengles::GL10 > const &a0, local_ref< javax::microedition::khronos::egl::EGLConfig > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::opengl::GLSurfaceView_::Renderer::onSurfaceChanged(local_ref< javax::microedition::khronos::opengles::GL10 > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::opengl::GLSurfaceView_::Renderer::onDrawFrame(local_ref< javax::microedition::khronos::opengles::GL10 > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::opengl::GLSurfaceView_::Renderer,"android/opengl/GLSurfaceView$Renderer")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView_::Renderer,0,"onSurfaceCreated","(Ljavax/microedition/khronos/opengles/GL10;Ljavax/microedition/khronos/egl/EGLConfig;)V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView_::Renderer,1,"onSurfaceChanged","(Ljavax/microedition/khronos/opengles/GL10;II)V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView_::Renderer,2,"onDrawFrame","(Ljavax/microedition/khronos/opengles/GL10;)V")

local_ref< javax::microedition::khronos::opengles::GL > android::opengl::GLSurfaceView_::GLWrapper::wrap(local_ref< javax::microedition::khronos::opengles::GL > const &a0)
{
	return local_ref< javax::microedition::khronos::opengles::GL >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::opengl::GLSurfaceView_::GLWrapper,"android/opengl/GLSurfaceView$GLWrapper")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView_::GLWrapper,0,"wrap","(Ljavax/microedition/khronos/opengles/GL;)Ljavax/microedition/khronos/opengles/GL;")

local_ref< javax::microedition::khronos::egl::EGLSurface > android::opengl::GLSurfaceView_::EGLWindowSurfaceFactory::createWindowSurface(local_ref< javax::microedition::khronos::egl::EGL10 > const &a0, local_ref< javax::microedition::khronos::egl::EGLDisplay > const &a1, local_ref< javax::microedition::khronos::egl::EGLConfig > const &a2, local_ref< java::lang::Object > const &a3)
{
	return local_ref< javax::microedition::khronos::egl::EGLSurface >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::opengl::GLSurfaceView_::EGLWindowSurfaceFactory::destroySurface(local_ref< javax::microedition::khronos::egl::EGL10 > const &a0, local_ref< javax::microedition::khronos::egl::EGLDisplay > const &a1, local_ref< javax::microedition::khronos::egl::EGLSurface > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::opengl::GLSurfaceView_::EGLWindowSurfaceFactory,"android/opengl/GLSurfaceView$EGLWindowSurfaceFactory")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView_::EGLWindowSurfaceFactory,0,"createWindowSurface","(Ljavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;Ljava/lang/Object;)Ljavax/microedition/khronos/egl/EGLSurface;")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView_::EGLWindowSurfaceFactory,1,"destroySurface","(Ljavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLSurface;)V")

local_ref< javax::microedition::khronos::egl::EGLConfig > android::opengl::GLSurfaceView_::EGLConfigChooser::chooseConfig(local_ref< javax::microedition::khronos::egl::EGL10 > const &a0, local_ref< javax::microedition::khronos::egl::EGLDisplay > const &a1)
{
	return local_ref< javax::microedition::khronos::egl::EGLConfig >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::opengl::GLSurfaceView_::EGLConfigChooser,"android/opengl/GLSurfaceView$EGLConfigChooser")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView_::EGLConfigChooser,0,"chooseConfig","(Ljavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;)Ljavax/microedition/khronos/egl/EGLConfig;")

local_ref< javax::microedition::khronos::egl::EGLContext > android::opengl::GLSurfaceView_::EGLContextFactory::createContext(local_ref< javax::microedition::khronos::egl::EGL10 > const &a0, local_ref< javax::microedition::khronos::egl::EGLDisplay > const &a1, local_ref< javax::microedition::khronos::egl::EGLConfig > const &a2)
{
	return local_ref< javax::microedition::khronos::egl::EGLContext >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::opengl::GLSurfaceView_::EGLContextFactory::destroyContext(local_ref< javax::microedition::khronos::egl::EGL10 > const &a0, local_ref< javax::microedition::khronos::egl::EGLDisplay > const &a1, local_ref< javax::microedition::khronos::egl::EGLContext > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::opengl::GLSurfaceView_::EGLContextFactory,"android/opengl/GLSurfaceView$EGLContextFactory")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView_::EGLContextFactory,0,"createContext","(Ljavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLConfig;)Ljavax/microedition/khronos/egl/EGLContext;")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView_::EGLContextFactory,1,"destroyContext","(Ljavax/microedition/khronos/egl/EGL10;Ljavax/microedition/khronos/egl/EGLDisplay;Ljavax/microedition/khronos/egl/EGLContext;)V")


template <>
local_ref< android::opengl::GLSurfaceView > create< android::opengl::GLSurfaceView>(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::opengl::GLSurfaceView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::opengl::GLSurfaceView::J2CPP_CLASS_NAME>(),
			get_method_id<android::opengl::GLSurfaceView::J2CPP_CLASS_NAME, android::opengl::GLSurfaceView::J2CPP_METHOD_NAME(0), android::opengl::GLSurfaceView::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::opengl::GLSurfaceView > create< android::opengl::GLSurfaceView>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::opengl::GLSurfaceView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::opengl::GLSurfaceView::J2CPP_CLASS_NAME>(),
			get_method_id<android::opengl::GLSurfaceView::J2CPP_CLASS_NAME, android::opengl::GLSurfaceView::J2CPP_METHOD_NAME(1), android::opengl::GLSurfaceView::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::opengl::GLSurfaceView::setGLWrapper(local_ref< android::opengl::GLSurfaceView_::GLWrapper > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void android::opengl::GLSurfaceView::setDebugFlags(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::opengl::GLSurfaceView::getDebugFlags()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::opengl::GLSurfaceView::setRenderer(local_ref< android::opengl::GLSurfaceView_::Renderer > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void android::opengl::GLSurfaceView::setEGLContextFactory(local_ref< android::opengl::GLSurfaceView_::EGLContextFactory > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void android::opengl::GLSurfaceView::setEGLWindowSurfaceFactory(local_ref< android::opengl::GLSurfaceView_::EGLWindowSurfaceFactory > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void android::opengl::GLSurfaceView::setEGLConfigChooser(local_ref< android::opengl::GLSurfaceView_::EGLConfigChooser > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void android::opengl::GLSurfaceView::setEGLConfigChooser(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

void android::opengl::GLSurfaceView::setEGLConfigChooser(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3, cpp_int const &a4, cpp_int const &a5)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}

void android::opengl::GLSurfaceView::setEGLContextClientVersion(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

void android::opengl::GLSurfaceView::setRenderMode(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::opengl::GLSurfaceView::getRenderMode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

void android::opengl::GLSurfaceView::requestRender()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

void android::opengl::GLSurfaceView::surfaceCreated(local_ref< android::view::SurfaceHolder > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

void android::opengl::GLSurfaceView::surfaceDestroyed(local_ref< android::view::SurfaceHolder > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

void android::opengl::GLSurfaceView::surfaceChanged(local_ref< android::view::SurfaceHolder > const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::opengl::GLSurfaceView::onPause()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

void android::opengl::GLSurfaceView::onResume()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

void android::opengl::GLSurfaceView::queueEvent(local_ref< java::lang::Runnable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}



static_field<
	android::opengl::GLSurfaceView::J2CPP_CLASS_NAME,
	android::opengl::GLSurfaceView::J2CPP_FIELD_NAME(0),
	android::opengl::GLSurfaceView::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::opengl::GLSurfaceView::RENDERMODE_WHEN_DIRTY;

static_field<
	android::opengl::GLSurfaceView::J2CPP_CLASS_NAME,
	android::opengl::GLSurfaceView::J2CPP_FIELD_NAME(1),
	android::opengl::GLSurfaceView::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::opengl::GLSurfaceView::RENDERMODE_CONTINUOUSLY;

static_field<
	android::opengl::GLSurfaceView::J2CPP_CLASS_NAME,
	android::opengl::GLSurfaceView::J2CPP_FIELD_NAME(2),
	android::opengl::GLSurfaceView::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::opengl::GLSurfaceView::DEBUG_CHECK_GL_ERROR;

static_field<
	android::opengl::GLSurfaceView::J2CPP_CLASS_NAME,
	android::opengl::GLSurfaceView::J2CPP_FIELD_NAME(3),
	android::opengl::GLSurfaceView::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::opengl::GLSurfaceView::DEBUG_LOG_GL_CALLS;


J2CPP_DEFINE_CLASS(android::opengl::GLSurfaceView,"android/opengl/GLSurfaceView")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,2,"setGLWrapper","(Landroid/opengl/GLSurfaceView$GLWrapper;)V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,3,"setDebugFlags","(I)V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,4,"getDebugFlags","()I")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,5,"setRenderer","(Landroid/opengl/GLSurfaceView$Renderer;)V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,6,"setEGLContextFactory","(Landroid/opengl/GLSurfaceView$EGLContextFactory;)V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,7,"setEGLWindowSurfaceFactory","(Landroid/opengl/GLSurfaceView$EGLWindowSurfaceFactory;)V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,8,"setEGLConfigChooser","(Landroid/opengl/GLSurfaceView$EGLConfigChooser;)V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,9,"setEGLConfigChooser","(Z)V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,10,"setEGLConfigChooser","(IIIIII)V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,11,"setEGLContextClientVersion","(I)V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,12,"setRenderMode","(I)V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,13,"getRenderMode","()I")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,14,"requestRender","()V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,15,"surfaceCreated","(Landroid/view/SurfaceHolder;)V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,16,"surfaceDestroyed","(Landroid/view/SurfaceHolder;)V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,17,"surfaceChanged","(Landroid/view/SurfaceHolder;III)V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,18,"onPause","()V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,19,"onResume","()V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,20,"queueEvent","(Ljava/lang/Runnable;)V")
J2CPP_DEFINE_METHOD(android::opengl::GLSurfaceView,21,"onDetachedFromWindow","()V")
J2CPP_DEFINE_FIELD(android::opengl::GLSurfaceView,0,"RENDERMODE_WHEN_DIRTY","I")
J2CPP_DEFINE_FIELD(android::opengl::GLSurfaceView,1,"RENDERMODE_CONTINUOUSLY","I")
J2CPP_DEFINE_FIELD(android::opengl::GLSurfaceView,2,"DEBUG_CHECK_GL_ERROR","I")
J2CPP_DEFINE_FIELD(android::opengl::GLSurfaceView,3,"DEBUG_LOG_GL_CALLS","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OPENGL_GLSURFACEVIEW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
