/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.drawable.DrawableContainer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_DRAWABLECONTAINER_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_DRAWABLECONTAINER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class ConstantState; } } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace graphics { class ColorFilter; } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/ColorFilter.hpp>
#include <android/graphics/Rect.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <java/lang/Runnable.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable {

	class DrawableContainer;
	namespace DrawableContainer_ {

		class DrawableContainerState;
		class DrawableContainerState
			: public object<DrawableContainerState>
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

			explicit DrawableContainerState(jobject jobj)
			: object<DrawableContainerState>(jobj)
			{
			}

			operator local_ref<android::graphics::drawable::Drawable_::ConstantState>() const;


			jint getChangingConfigurations();
			jint addChild(local_ref< android::graphics::drawable::Drawable >  const&);
			jint getChildCount();
			local_ref< array< local_ref< android::graphics::drawable::Drawable >, 1> > getChildren();
			void setVariablePadding(jboolean);
			local_ref< android::graphics::Rect > getConstantPadding();
			void setConstantSize(jboolean);
			jboolean isConstantSize();
			jint getConstantWidth();
			jint getConstantHeight();
			jint getConstantMinimumWidth();
			jint getConstantMinimumHeight();
			jint getOpacity();
			jboolean isStateful();
			void growArray(jint, jint);
			jboolean canConstantState();
		}; //class DrawableContainerState

	} //namespace DrawableContainer_

	class DrawableContainer
		: public object<DrawableContainer>
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

		typedef DrawableContainer_::DrawableContainerState DrawableContainerState;

		explicit DrawableContainer(jobject jobj)
		: object<DrawableContainer>(jobj)
		{
		}

		operator local_ref<android::graphics::drawable::Drawable>() const;
		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;


		DrawableContainer();
		void draw(local_ref< android::graphics::Canvas >  const&);
		jint getChangingConfigurations();
		jboolean getPadding(local_ref< android::graphics::Rect >  const&);
		void setAlpha(jint);
		void setDither(jboolean);
		void setColorFilter(local_ref< android::graphics::ColorFilter >  const&);
		jboolean isStateful();
		jint getIntrinsicWidth();
		jint getIntrinsicHeight();
		jint getMinimumWidth();
		jint getMinimumHeight();
		void invalidateDrawable(local_ref< android::graphics::drawable::Drawable >  const&);
		void scheduleDrawable(local_ref< android::graphics::drawable::Drawable >  const&, local_ref< java::lang::Runnable >  const&, jlong);
		void unscheduleDrawable(local_ref< android::graphics::drawable::Drawable >  const&, local_ref< java::lang::Runnable >  const&);
		jboolean setVisible(jboolean, jboolean);
		jint getOpacity();
		jboolean selectDrawable(jint);
		local_ref< android::graphics::drawable::Drawable > getCurrent();
		local_ref< android::graphics::drawable::Drawable_::ConstantState > getConstantState();
		local_ref< android::graphics::drawable::Drawable > mutate();
	}; //class DrawableContainer

} //namespace drawable
} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_DRAWABLECONTAINER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_DRAWABLECONTAINER_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_DRAWABLECONTAINER_HPP_IMPL

namespace j2cpp {




android::graphics::drawable::DrawableContainer_::DrawableContainerState::operator local_ref<android::graphics::drawable::Drawable_::ConstantState>() const
{
	return local_ref<android::graphics::drawable::Drawable_::ConstantState>(get_jobject());
}


jint android::graphics::drawable::DrawableContainer_::DrawableContainerState::getChangingConfigurations()
{
	return call_method<
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_NAME(1),
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject());
}

jint android::graphics::drawable::DrawableContainer_::DrawableContainerState::addChild(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_NAME(2),
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject(), a0);
}

jint android::graphics::drawable::DrawableContainer_::DrawableContainerState::getChildCount()
{
	return call_method<
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_NAME(3),
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

local_ref< array< local_ref< android::graphics::drawable::Drawable >, 1> > android::graphics::drawable::DrawableContainer_::DrawableContainerState::getChildren()
{
	return call_method<
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_NAME(4),
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< array< local_ref< android::graphics::drawable::Drawable >, 1> > >
	(get_jobject());
}

void android::graphics::drawable::DrawableContainer_::DrawableContainerState::setVariablePadding(jboolean a0)
{
	return call_method<
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_NAME(5),
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

local_ref< android::graphics::Rect > android::graphics::drawable::DrawableContainer_::DrawableContainerState::getConstantPadding()
{
	return call_method<
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_NAME(6),
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::graphics::Rect > >
	(get_jobject());
}

void android::graphics::drawable::DrawableContainer_::DrawableContainerState::setConstantSize(jboolean a0)
{
	return call_method<
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_NAME(7),
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}

jboolean android::graphics::drawable::DrawableContainer_::DrawableContainerState::isConstantSize()
{
	return call_method<
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_NAME(8),
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(get_jobject());
}

jint android::graphics::drawable::DrawableContainer_::DrawableContainerState::getConstantWidth()
{
	return call_method<
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_NAME(9),
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_SIGNATURE(9), 
		jint >
	(get_jobject());
}

jint android::graphics::drawable::DrawableContainer_::DrawableContainerState::getConstantHeight()
{
	return call_method<
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_NAME(10),
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject());
}

jint android::graphics::drawable::DrawableContainer_::DrawableContainerState::getConstantMinimumWidth()
{
	return call_method<
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_NAME(11),
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_SIGNATURE(11), 
		jint >
	(get_jobject());
}

jint android::graphics::drawable::DrawableContainer_::DrawableContainerState::getConstantMinimumHeight()
{
	return call_method<
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_NAME(12),
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_SIGNATURE(12), 
		jint >
	(get_jobject());
}

jint android::graphics::drawable::DrawableContainer_::DrawableContainerState::getOpacity()
{
	return call_method<
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_NAME(13),
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_SIGNATURE(13), 
		jint >
	(get_jobject());
}

jboolean android::graphics::drawable::DrawableContainer_::DrawableContainerState::isStateful()
{
	return call_method<
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_NAME(14),
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_SIGNATURE(14), 
		jboolean >
	(get_jobject());
}

void android::graphics::drawable::DrawableContainer_::DrawableContainerState::growArray(jint a0, jint a1)
{
	return call_method<
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_NAME(15),
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0, a1);
}

jboolean android::graphics::drawable::DrawableContainer_::DrawableContainerState::canConstantState()
{
	return call_method<
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_NAME(16),
		android::graphics::drawable::DrawableContainer_::DrawableContainerState::J2CPP_METHOD_SIGNATURE(16), 
		jboolean >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::DrawableContainer_::DrawableContainerState,"android/graphics/drawable/DrawableContainer$DrawableContainerState")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer_::DrawableContainerState,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer_::DrawableContainerState,1,"getChangingConfigurations","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer_::DrawableContainerState,2,"addChild","(Landroid/graphics/drawable/Drawable;)I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer_::DrawableContainerState,3,"getChildCount","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer_::DrawableContainerState,4,"getChildren","()[android.graphics.drawable.Drawable")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer_::DrawableContainerState,5,"setVariablePadding","(Z)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer_::DrawableContainerState,6,"getConstantPadding","()Landroid/graphics/Rect;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer_::DrawableContainerState,7,"setConstantSize","(Z)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer_::DrawableContainerState,8,"isConstantSize","()Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer_::DrawableContainerState,9,"getConstantWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer_::DrawableContainerState,10,"getConstantHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer_::DrawableContainerState,11,"getConstantMinimumWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer_::DrawableContainerState,12,"getConstantMinimumHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer_::DrawableContainerState,13,"getOpacity","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer_::DrawableContainerState,14,"isStateful","()Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer_::DrawableContainerState,15,"growArray","(II)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer_::DrawableContainerState,16,"canConstantState","()Z")



android::graphics::drawable::DrawableContainer::operator local_ref<android::graphics::drawable::Drawable>() const
{
	return local_ref<android::graphics::drawable::Drawable>(get_jobject());
}

android::graphics::drawable::DrawableContainer::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}


android::graphics::drawable::DrawableContainer::DrawableContainer()
: object<android::graphics::drawable::DrawableContainer>(
	call_new_object<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(0),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void android::graphics::drawable::DrawableContainer::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(1),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}

jint android::graphics::drawable::DrawableContainer::getChangingConfigurations()
{
	return call_method<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(2),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

jboolean android::graphics::drawable::DrawableContainer::getPadding(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(3),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject(), a0);
}

void android::graphics::drawable::DrawableContainer::setAlpha(jint a0)
{
	return call_method<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(4),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::DrawableContainer::setDither(jboolean a0)
{
	return call_method<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(5),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::DrawableContainer::setColorFilter(local_ref< android::graphics::ColorFilter > const &a0)
{
	return call_method<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(6),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}


jboolean android::graphics::drawable::DrawableContainer::isStateful()
{
	return call_method<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(8),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(get_jobject());
}



jint android::graphics::drawable::DrawableContainer::getIntrinsicWidth()
{
	return call_method<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(11),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(11), 
		jint >
	(get_jobject());
}

jint android::graphics::drawable::DrawableContainer::getIntrinsicHeight()
{
	return call_method<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(12),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(12), 
		jint >
	(get_jobject());
}

jint android::graphics::drawable::DrawableContainer::getMinimumWidth()
{
	return call_method<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(13),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(13), 
		jint >
	(get_jobject());
}

jint android::graphics::drawable::DrawableContainer::getMinimumHeight()
{
	return call_method<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(14),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(14), 
		jint >
	(get_jobject());
}

void android::graphics::drawable::DrawableContainer::invalidateDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(15),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::DrawableContainer::scheduleDrawable(local_ref< android::graphics::drawable::Drawable > const &a0, local_ref< java::lang::Runnable > const &a1, jlong a2)
{
	return call_method<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(16),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::graphics::drawable::DrawableContainer::unscheduleDrawable(local_ref< android::graphics::drawable::Drawable > const &a0, local_ref< java::lang::Runnable > const &a1)
{
	return call_method<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(17),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0, a1);
}

jboolean android::graphics::drawable::DrawableContainer::setVisible(jboolean a0, jboolean a1)
{
	return call_method<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(18),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(18), 
		jboolean >
	(get_jobject(), a0, a1);
}

jint android::graphics::drawable::DrawableContainer::getOpacity()
{
	return call_method<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(19),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(19), 
		jint >
	(get_jobject());
}

jboolean android::graphics::drawable::DrawableContainer::selectDrawable(jint a0)
{
	return call_method<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(20),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(20), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::DrawableContainer::getCurrent()
{
	return call_method<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(21),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< android::graphics::drawable::Drawable > >
	(get_jobject());
}

local_ref< android::graphics::drawable::Drawable_::ConstantState > android::graphics::drawable::DrawableContainer::getConstantState()
{
	return call_method<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(22),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< android::graphics::drawable::Drawable_::ConstantState > >
	(get_jobject());
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::DrawableContainer::mutate()
{
	return call_method<
		android::graphics::drawable::DrawableContainer::J2CPP_CLASS_NAME,
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_NAME(23),
		android::graphics::drawable::DrawableContainer::J2CPP_METHOD_SIGNATURE(23), 
		local_ref< android::graphics::drawable::Drawable > >
	(get_jobject());
}



J2CPP_DEFINE_CLASS(android::graphics::drawable::DrawableContainer,"android/graphics/drawable/DrawableContainer")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,1,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,2,"getChangingConfigurations","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,3,"getPadding","(Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,4,"setAlpha","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,5,"setDither","(Z)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,6,"setColorFilter","(Landroid/graphics/ColorFilter;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,7,"onBoundsChange","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,8,"isStateful","()Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,9,"onStateChange","([I)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,10,"onLevelChange","(I)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,11,"getIntrinsicWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,12,"getIntrinsicHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,13,"getMinimumWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,14,"getMinimumHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,15,"invalidateDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,16,"scheduleDrawable","(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,17,"unscheduleDrawable","(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,18,"setVisible","(ZZ)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,19,"getOpacity","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,20,"selectDrawable","(I)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,21,"getCurrent","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,22,"getConstantState","()Landroid/graphics/drawable/Drawable$ConstantState;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,23,"mutate","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::DrawableContainer,24,"setConstantState","(Landroid/graphics/drawable/DrawableContainer$DrawableContainerState;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_DRAWABLECONTAINER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
