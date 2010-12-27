/*================================================================================
  code generated by: java2cpp
  class: android.inputmethodservice.KeyboardView
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_INPUTMETHODSERVICE_KEYBOARDVIEW_HPP_DECL
#define J2CPP_ANDROID_INPUTMETHODSERVICE_KEYBOARDVIEW_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace inputmethodservice { class Keyboard; } } }
namespace j2cpp { namespace android { namespace inputmethodservice { namespace KeyboardView_ { class OnKeyboardActionListener; } } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }


#include <android/content/Context.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/inputmethodservice/Keyboard.hpp>
#include <android/inputmethodservice/KeyboardView.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/view/View.hpp>
#include <java/lang/CharSequence.hpp>


namespace j2cpp {

namespace android { namespace inputmethodservice {

	class KeyboardView;
	namespace KeyboardView_ {

		class OnKeyboardActionListener;
		class OnKeyboardActionListener
			: public cpp_object<OnKeyboardActionListener>
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

			OnKeyboardActionListener(jobject jobj)
			: cpp_object<OnKeyboardActionListener>(jobj)
			{
			}

			void onPress(cpp_int const&);
			void onRelease(cpp_int const&);
			void onKey(cpp_int const&, local_ref< cpp_int_array<1> > const&);
			void onText(local_ref< java::lang::CharSequence > const&);
			void swipeLeft();
			void swipeRight();
			void swipeDown();
			void swipeUp();
		}; //class OnKeyboardActionListener

	} //namespace KeyboardView_

	class KeyboardView
		: public cpp_object<KeyboardView>
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

		typedef KeyboardView_::OnKeyboardActionListener OnKeyboardActionListener;

		KeyboardView(jobject jobj)
		: cpp_object<KeyboardView>(jobj)
		{
		}

		void setOnKeyboardActionListener(local_ref< android::inputmethodservice::KeyboardView_::OnKeyboardActionListener > const&);
		void setKeyboard(local_ref< android::inputmethodservice::Keyboard > const&);
		local_ref< android::inputmethodservice::Keyboard > getKeyboard();
		cpp_boolean setShifted(cpp_boolean const&);
		cpp_boolean isShifted();
		void setPreviewEnabled(cpp_boolean const&);
		cpp_boolean isPreviewEnabled();
		void setVerticalCorrection(cpp_int const&);
		void setPopupParent(local_ref< android::view::View > const&);
		void setPopupOffset(cpp_int const&, cpp_int const&);
		void setProximityCorrectionEnabled(cpp_boolean const&);
		cpp_boolean isProximityCorrectionEnabled();
		void onMeasure(cpp_int const&, cpp_int const&);
		void onSizeChanged(cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);
		void onDraw(local_ref< android::graphics::Canvas > const&);
		void invalidateAllKeys();
		void invalidateKey(cpp_int const&);
		cpp_boolean onTouchEvent(local_ref< android::view::MotionEvent > const&);
		void closing();
		void onDetachedFromWindow();
		cpp_boolean handleBack();
		void onClick(local_ref< android::view::View > const&);
	}; //class KeyboardView

} //namespace inputmethodservice
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_INPUTMETHODSERVICE_KEYBOARDVIEW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_INPUTMETHODSERVICE_KEYBOARDVIEW_HPP_IMPL
#define J2CPP_ANDROID_INPUTMETHODSERVICE_KEYBOARDVIEW_HPP_IMPL

namespace j2cpp {



void android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::onPress(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::onRelease(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::onKey(cpp_int const &a0, local_ref< cpp_int_array<1> > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::onText(local_ref< java::lang::CharSequence > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::swipeLeft()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::swipeRight()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::swipeDown()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void android::inputmethodservice::KeyboardView_::OnKeyboardActionListener::swipeUp()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::inputmethodservice::KeyboardView_::OnKeyboardActionListener,"android/inputmethodservice/KeyboardView$OnKeyboardActionListener")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView_::OnKeyboardActionListener,0,"onPress","(I)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView_::OnKeyboardActionListener,1,"onRelease","(I)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView_::OnKeyboardActionListener,2,"onKey","(I[I)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView_::OnKeyboardActionListener,3,"onText","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView_::OnKeyboardActionListener,4,"swipeLeft","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView_::OnKeyboardActionListener,5,"swipeRight","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView_::OnKeyboardActionListener,6,"swipeDown","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView_::OnKeyboardActionListener,7,"swipeUp","()V")


template <>
local_ref< android::inputmethodservice::KeyboardView > create< android::inputmethodservice::KeyboardView>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::inputmethodservice::KeyboardView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME>(),
			get_method_id<android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME, android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(0), android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::inputmethodservice::KeyboardView > create< android::inputmethodservice::KeyboardView>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
{
	return local_ref< android::inputmethodservice::KeyboardView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME>(),
			get_method_id<android::inputmethodservice::KeyboardView::J2CPP_CLASS_NAME, android::inputmethodservice::KeyboardView::J2CPP_METHOD_NAME(1), android::inputmethodservice::KeyboardView::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::inputmethodservice::KeyboardView::setOnKeyboardActionListener(local_ref< android::inputmethodservice::KeyboardView_::OnKeyboardActionListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}


void android::inputmethodservice::KeyboardView::setKeyboard(local_ref< android::inputmethodservice::Keyboard > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::inputmethodservice::Keyboard > android::inputmethodservice::KeyboardView::getKeyboard()
{
	return local_ref< android::inputmethodservice::Keyboard >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_boolean android::inputmethodservice::KeyboardView::setShifted(cpp_boolean const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::inputmethodservice::KeyboardView::isShifted()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void android::inputmethodservice::KeyboardView::setPreviewEnabled(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::inputmethodservice::KeyboardView::isPreviewEnabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void android::inputmethodservice::KeyboardView::setVerticalCorrection(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

void android::inputmethodservice::KeyboardView::setPopupParent(local_ref< android::view::View > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

void android::inputmethodservice::KeyboardView::setPopupOffset(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::inputmethodservice::KeyboardView::setProximityCorrectionEnabled(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::inputmethodservice::KeyboardView::isProximityCorrectionEnabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

void android::inputmethodservice::KeyboardView::onMeasure(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::inputmethodservice::KeyboardView::onSizeChanged(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::inputmethodservice::KeyboardView::onDraw(local_ref< android::graphics::Canvas > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

void android::inputmethodservice::KeyboardView::invalidateAllKeys()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

void android::inputmethodservice::KeyboardView::invalidateKey(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}


cpp_boolean android::inputmethodservice::KeyboardView::onTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype()
		)
	);
}





void android::inputmethodservice::KeyboardView::closing()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}

void android::inputmethodservice::KeyboardView::onDetachedFromWindow()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>()
		)
	);
}

cpp_boolean android::inputmethodservice::KeyboardView::handleBack()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>()
		)
	);
}

void android::inputmethodservice::KeyboardView::onClick(local_ref< android::view::View > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::inputmethodservice::KeyboardView,"android/inputmethodservice/KeyboardView")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,2,"setOnKeyboardActionListener","(Landroid/inputmethodservice/KeyboardView$OnKeyboardActionListener;)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,3,"getOnKeyboardActionListener","()Landroid/inputmethodservice/KeyboardView$OnKeyboardActionListener;")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,4,"setKeyboard","(Landroid/inputmethodservice/Keyboard;)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,5,"getKeyboard","()Landroid/inputmethodservice/Keyboard;")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,6,"setShifted","(Z)Z")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,7,"isShifted","()Z")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,8,"setPreviewEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,9,"isPreviewEnabled","()Z")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,10,"setVerticalCorrection","(I)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,11,"setPopupParent","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,12,"setPopupOffset","(II)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,13,"setProximityCorrectionEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,14,"isProximityCorrectionEnabled","()Z")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,15,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,16,"onSizeChanged","(IIII)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,17,"onDraw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,18,"invalidateAllKeys","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,19,"invalidateKey","(I)V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,20,"onLongPress","(Landroid/inputmethodservice/Keyboard$Key;)Z")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,21,"onTouchEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,22,"swipeRight","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,23,"swipeLeft","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,24,"swipeUp","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,25,"swipeDown","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,26,"closing","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,27,"onDetachedFromWindow","()V")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,28,"handleBack","()Z")
J2CPP_DEFINE_METHOD(android::inputmethodservice::KeyboardView,29,"onClick","(Landroid/view/View;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_INPUTMETHODSERVICE_KEYBOARDVIEW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
