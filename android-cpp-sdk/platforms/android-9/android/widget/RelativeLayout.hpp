/*================================================================================
  code generated by: java2cpp
  class: android.widget.RelativeLayout
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_RELATIVELAYOUT_HPP_DECL
#define J2CPP_ANDROID_WIDGET_RELATIVELAYOUT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class MarginLayoutParams; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace widget { namespace RelativeLayout_ { class LayoutParams; } } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/view/accessibility/AccessibilityEvent.hpp>
#include <android/widget/RelativeLayout.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class RelativeLayout;
	namespace RelativeLayout_ {

		class LayoutParams;
		class LayoutParams
			: public cpp_object<LayoutParams>
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
			J2CPP_DECLARE_FIELD(0)

			LayoutParams(jobject jobj)
			: cpp_object<LayoutParams>(jobj)
			, alignWithParent(jobj)
			{
			}

			local_ref< java::lang::String > debug(local_ref< java::lang::String > const&);
			void addRule(cpp_int const&);
			void addRule(cpp_int const&, cpp_int const&);
			local_ref< cpp_int_array<1> > getRules();

			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_boolean > alignWithParent;
		}; //class LayoutParams

	} //namespace RelativeLayout_

	class RelativeLayout
		: public cpp_object<RelativeLayout>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)
		J2CPP_DECLARE_FIELD(15)
		J2CPP_DECLARE_FIELD(16)

		typedef RelativeLayout_::LayoutParams LayoutParams;

		RelativeLayout(jobject jobj)
		: cpp_object<RelativeLayout>(jobj)
		{
		}

		void setIgnoreGravity(cpp_int const&);
		void setGravity(cpp_int const&);
		void setHorizontalGravity(cpp_int const&);
		void setVerticalGravity(cpp_int const&);
		cpp_int getBaseline();
		void requestLayout();
		local_ref< android::widget::RelativeLayout_::LayoutParams > generateLayoutParams(local_ref< android::util::AttributeSet > const&);
		cpp_boolean dispatchPopulateAccessibilityEvent(local_ref< android::view::accessibility::AccessibilityEvent > const&);
		local_ref< android::view::ViewGroup_::LayoutParams > generateLayoutParams_1(local_ref< android::util::AttributeSet > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > TRUE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > LEFT_OF;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > RIGHT_OF;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > ABOVE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > BELOW;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > ALIGN_BASELINE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > ALIGN_LEFT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > ALIGN_TOP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > ALIGN_RIGHT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), cpp_int > ALIGN_BOTTOM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), cpp_int > ALIGN_PARENT_LEFT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), cpp_int > ALIGN_PARENT_TOP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), cpp_int > ALIGN_PARENT_RIGHT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), cpp_int > ALIGN_PARENT_BOTTOM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), cpp_int > CENTER_IN_PARENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), cpp_int > CENTER_HORIZONTAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), cpp_int > CENTER_VERTICAL;
	}; //class RelativeLayout

} //namespace widget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_RELATIVELAYOUT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_RELATIVELAYOUT_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_RELATIVELAYOUT_HPP_IMPL

namespace j2cpp {



template <>
local_ref< android::widget::RelativeLayout_::LayoutParams > create< android::widget::RelativeLayout_::LayoutParams>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::widget::RelativeLayout_::LayoutParams >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::RelativeLayout_::LayoutParams::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::RelativeLayout_::LayoutParams::J2CPP_CLASS_NAME, android::widget::RelativeLayout_::LayoutParams::J2CPP_METHOD_NAME(0), android::widget::RelativeLayout_::LayoutParams::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::RelativeLayout_::LayoutParams > create< android::widget::RelativeLayout_::LayoutParams>(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< android::widget::RelativeLayout_::LayoutParams >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::RelativeLayout_::LayoutParams::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::RelativeLayout_::LayoutParams::J2CPP_CLASS_NAME, android::widget::RelativeLayout_::LayoutParams::J2CPP_METHOD_NAME(1), android::widget::RelativeLayout_::LayoutParams::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::RelativeLayout_::LayoutParams > create< android::widget::RelativeLayout_::LayoutParams>(local_ref< android::view::ViewGroup_::LayoutParams > const &a0)
{
	return local_ref< android::widget::RelativeLayout_::LayoutParams >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::RelativeLayout_::LayoutParams::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::RelativeLayout_::LayoutParams::J2CPP_CLASS_NAME, android::widget::RelativeLayout_::LayoutParams::J2CPP_METHOD_NAME(2), android::widget::RelativeLayout_::LayoutParams::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::RelativeLayout_::LayoutParams > create< android::widget::RelativeLayout_::LayoutParams>(local_ref< android::view::ViewGroup_::MarginLayoutParams > const &a0)
{
	return local_ref< android::widget::RelativeLayout_::LayoutParams >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::RelativeLayout_::LayoutParams::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::RelativeLayout_::LayoutParams::J2CPP_CLASS_NAME, android::widget::RelativeLayout_::LayoutParams::J2CPP_METHOD_NAME(3), android::widget::RelativeLayout_::LayoutParams::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::widget::RelativeLayout_::LayoutParams::debug(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::RelativeLayout_::LayoutParams::addRule(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::RelativeLayout_::LayoutParams::addRule(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_int_array<1> > android::widget::RelativeLayout_::LayoutParams::getRules()
{
	return local_ref< cpp_int_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}



J2CPP_DEFINE_CLASS(android::widget::RelativeLayout_::LayoutParams,"android/widget/RelativeLayout$LayoutParams")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout_::LayoutParams,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout_::LayoutParams,1,"<init>","(II)V")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout_::LayoutParams,2,"<init>","(Landroid/view/ViewGroup$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout_::LayoutParams,3,"<init>","(Landroid/view/ViewGroup$MarginLayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout_::LayoutParams,4,"debug","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout_::LayoutParams,5,"addRule","(I)V")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout_::LayoutParams,6,"addRule","(II)V")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout_::LayoutParams,7,"getRules","()[I")
J2CPP_DEFINE_FIELD(android::widget::RelativeLayout_::LayoutParams,0,"alignWithParent","Z")


template <>
local_ref< android::widget::RelativeLayout > create< android::widget::RelativeLayout>(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::widget::RelativeLayout >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::RelativeLayout::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::RelativeLayout::J2CPP_CLASS_NAME, android::widget::RelativeLayout::J2CPP_METHOD_NAME(0), android::widget::RelativeLayout::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::RelativeLayout > create< android::widget::RelativeLayout>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::widget::RelativeLayout >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::RelativeLayout::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::RelativeLayout::J2CPP_CLASS_NAME, android::widget::RelativeLayout::J2CPP_METHOD_NAME(1), android::widget::RelativeLayout::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::RelativeLayout > create< android::widget::RelativeLayout>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
{
	return local_ref< android::widget::RelativeLayout >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::RelativeLayout::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::RelativeLayout::J2CPP_CLASS_NAME, android::widget::RelativeLayout::J2CPP_METHOD_NAME(2), android::widget::RelativeLayout::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::widget::RelativeLayout::setIgnoreGravity(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::RelativeLayout::setGravity(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::RelativeLayout::setHorizontalGravity(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::RelativeLayout::setVerticalGravity(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::RelativeLayout::getBaseline()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void android::widget::RelativeLayout::requestLayout()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}



local_ref< android::widget::RelativeLayout_::LayoutParams > android::widget::RelativeLayout::generateLayoutParams(local_ref< android::util::AttributeSet > const &a0)
{
	return local_ref< android::widget::RelativeLayout_::LayoutParams >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}




cpp_boolean android::widget::RelativeLayout::dispatchPopulateAccessibilityEvent(local_ref< android::view::accessibility::AccessibilityEvent > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::ViewGroup_::LayoutParams > android::widget::RelativeLayout::generateLayoutParams_1(local_ref< android::util::AttributeSet > const &a0)
{
	return local_ref< android::view::ViewGroup_::LayoutParams >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::widget::RelativeLayout::J2CPP_CLASS_NAME,
	android::widget::RelativeLayout::J2CPP_FIELD_NAME(0),
	android::widget::RelativeLayout::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::widget::RelativeLayout::TRUE;

static_field<
	android::widget::RelativeLayout::J2CPP_CLASS_NAME,
	android::widget::RelativeLayout::J2CPP_FIELD_NAME(1),
	android::widget::RelativeLayout::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::widget::RelativeLayout::LEFT_OF;

static_field<
	android::widget::RelativeLayout::J2CPP_CLASS_NAME,
	android::widget::RelativeLayout::J2CPP_FIELD_NAME(2),
	android::widget::RelativeLayout::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::widget::RelativeLayout::RIGHT_OF;

static_field<
	android::widget::RelativeLayout::J2CPP_CLASS_NAME,
	android::widget::RelativeLayout::J2CPP_FIELD_NAME(3),
	android::widget::RelativeLayout::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::widget::RelativeLayout::ABOVE;

static_field<
	android::widget::RelativeLayout::J2CPP_CLASS_NAME,
	android::widget::RelativeLayout::J2CPP_FIELD_NAME(4),
	android::widget::RelativeLayout::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> android::widget::RelativeLayout::BELOW;

static_field<
	android::widget::RelativeLayout::J2CPP_CLASS_NAME,
	android::widget::RelativeLayout::J2CPP_FIELD_NAME(5),
	android::widget::RelativeLayout::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::widget::RelativeLayout::ALIGN_BASELINE;

static_field<
	android::widget::RelativeLayout::J2CPP_CLASS_NAME,
	android::widget::RelativeLayout::J2CPP_FIELD_NAME(6),
	android::widget::RelativeLayout::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> android::widget::RelativeLayout::ALIGN_LEFT;

static_field<
	android::widget::RelativeLayout::J2CPP_CLASS_NAME,
	android::widget::RelativeLayout::J2CPP_FIELD_NAME(7),
	android::widget::RelativeLayout::J2CPP_FIELD_SIGNATURE(7),
	cpp_int
> android::widget::RelativeLayout::ALIGN_TOP;

static_field<
	android::widget::RelativeLayout::J2CPP_CLASS_NAME,
	android::widget::RelativeLayout::J2CPP_FIELD_NAME(8),
	android::widget::RelativeLayout::J2CPP_FIELD_SIGNATURE(8),
	cpp_int
> android::widget::RelativeLayout::ALIGN_RIGHT;

static_field<
	android::widget::RelativeLayout::J2CPP_CLASS_NAME,
	android::widget::RelativeLayout::J2CPP_FIELD_NAME(9),
	android::widget::RelativeLayout::J2CPP_FIELD_SIGNATURE(9),
	cpp_int
> android::widget::RelativeLayout::ALIGN_BOTTOM;

static_field<
	android::widget::RelativeLayout::J2CPP_CLASS_NAME,
	android::widget::RelativeLayout::J2CPP_FIELD_NAME(10),
	android::widget::RelativeLayout::J2CPP_FIELD_SIGNATURE(10),
	cpp_int
> android::widget::RelativeLayout::ALIGN_PARENT_LEFT;

static_field<
	android::widget::RelativeLayout::J2CPP_CLASS_NAME,
	android::widget::RelativeLayout::J2CPP_FIELD_NAME(11),
	android::widget::RelativeLayout::J2CPP_FIELD_SIGNATURE(11),
	cpp_int
> android::widget::RelativeLayout::ALIGN_PARENT_TOP;

static_field<
	android::widget::RelativeLayout::J2CPP_CLASS_NAME,
	android::widget::RelativeLayout::J2CPP_FIELD_NAME(12),
	android::widget::RelativeLayout::J2CPP_FIELD_SIGNATURE(12),
	cpp_int
> android::widget::RelativeLayout::ALIGN_PARENT_RIGHT;

static_field<
	android::widget::RelativeLayout::J2CPP_CLASS_NAME,
	android::widget::RelativeLayout::J2CPP_FIELD_NAME(13),
	android::widget::RelativeLayout::J2CPP_FIELD_SIGNATURE(13),
	cpp_int
> android::widget::RelativeLayout::ALIGN_PARENT_BOTTOM;

static_field<
	android::widget::RelativeLayout::J2CPP_CLASS_NAME,
	android::widget::RelativeLayout::J2CPP_FIELD_NAME(14),
	android::widget::RelativeLayout::J2CPP_FIELD_SIGNATURE(14),
	cpp_int
> android::widget::RelativeLayout::CENTER_IN_PARENT;

static_field<
	android::widget::RelativeLayout::J2CPP_CLASS_NAME,
	android::widget::RelativeLayout::J2CPP_FIELD_NAME(15),
	android::widget::RelativeLayout::J2CPP_FIELD_SIGNATURE(15),
	cpp_int
> android::widget::RelativeLayout::CENTER_HORIZONTAL;

static_field<
	android::widget::RelativeLayout::J2CPP_CLASS_NAME,
	android::widget::RelativeLayout::J2CPP_FIELD_NAME(16),
	android::widget::RelativeLayout::J2CPP_FIELD_SIGNATURE(16),
	cpp_int
> android::widget::RelativeLayout::CENTER_VERTICAL;


J2CPP_DEFINE_CLASS(android::widget::RelativeLayout,"android/widget/RelativeLayout")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout,3,"setIgnoreGravity","(I)V")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout,4,"setGravity","(I)V")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout,5,"setHorizontalGravity","(I)V")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout,6,"setVerticalGravity","(I)V")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout,7,"getBaseline","()I")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout,8,"requestLayout","()V")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout,9,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout,10,"onLayout","(ZIIII)V")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout,11,"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/widget/RelativeLayout$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout,12,"generateDefaultLayoutParams","()Landroid/view/ViewGroup$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout,13,"checkLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Z")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout,14,"generateLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Landroid/view/ViewGroup$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout,15,"dispatchPopulateAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::RelativeLayout,16,"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;")
J2CPP_DEFINE_FIELD(android::widget::RelativeLayout,0,"TRUE","I")
J2CPP_DEFINE_FIELD(android::widget::RelativeLayout,1,"LEFT_OF","I")
J2CPP_DEFINE_FIELD(android::widget::RelativeLayout,2,"RIGHT_OF","I")
J2CPP_DEFINE_FIELD(android::widget::RelativeLayout,3,"ABOVE","I")
J2CPP_DEFINE_FIELD(android::widget::RelativeLayout,4,"BELOW","I")
J2CPP_DEFINE_FIELD(android::widget::RelativeLayout,5,"ALIGN_BASELINE","I")
J2CPP_DEFINE_FIELD(android::widget::RelativeLayout,6,"ALIGN_LEFT","I")
J2CPP_DEFINE_FIELD(android::widget::RelativeLayout,7,"ALIGN_TOP","I")
J2CPP_DEFINE_FIELD(android::widget::RelativeLayout,8,"ALIGN_RIGHT","I")
J2CPP_DEFINE_FIELD(android::widget::RelativeLayout,9,"ALIGN_BOTTOM","I")
J2CPP_DEFINE_FIELD(android::widget::RelativeLayout,10,"ALIGN_PARENT_LEFT","I")
J2CPP_DEFINE_FIELD(android::widget::RelativeLayout,11,"ALIGN_PARENT_TOP","I")
J2CPP_DEFINE_FIELD(android::widget::RelativeLayout,12,"ALIGN_PARENT_RIGHT","I")
J2CPP_DEFINE_FIELD(android::widget::RelativeLayout,13,"ALIGN_PARENT_BOTTOM","I")
J2CPP_DEFINE_FIELD(android::widget::RelativeLayout,14,"CENTER_IN_PARENT","I")
J2CPP_DEFINE_FIELD(android::widget::RelativeLayout,15,"CENTER_HORIZONTAL","I")
J2CPP_DEFINE_FIELD(android::widget::RelativeLayout,16,"CENTER_VERTICAL","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_RELATIVELAYOUT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
