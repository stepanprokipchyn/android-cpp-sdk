/*================================================================================
  code generated by: java2cpp
  class: android.text.style.TextAppearanceSpan
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN_HPP_DECL
#define J2CPP_ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace text { class TextPaint; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class ColorStateList; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <android/content/Context.hpp>
#include <android/content/res/ColorStateList.hpp>
#include <android/os/Parcel.hpp>
#include <android/text/TextPaint.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace text { namespace style {

	class TextAppearanceSpan;
	class TextAppearanceSpan
		: public cpp_object<TextAppearanceSpan>
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

		TextAppearanceSpan(jobject jobj)
		: cpp_object<TextAppearanceSpan>(jobj)
		{
		}

		cpp_int getSpanTypeId();
		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);
		local_ref< java::lang::String > getFamily();
		local_ref< android::content::res::ColorStateList > getTextColor();
		local_ref< android::content::res::ColorStateList > getLinkTextColor();
		cpp_int getTextSize();
		cpp_int getTextStyle();
		void updateDrawState(local_ref< android::text::TextPaint > const&);
		void updateMeasureState(local_ref< android::text::TextPaint > const&);
	}; //class TextAppearanceSpan

} //namespace style
} //namespace text
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN_HPP_IMPL
#define J2CPP_ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::text::style::TextAppearanceSpan > create< android::text::style::TextAppearanceSpan>(local_ref< android::content::Context > const &a0, cpp_int const &a1)
{
	return local_ref< android::text::style::TextAppearanceSpan >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME, android::text::style::TextAppearanceSpan::J2CPP_METHOD_NAME(0), android::text::style::TextAppearanceSpan::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::text::style::TextAppearanceSpan > create< android::text::style::TextAppearanceSpan>(local_ref< android::content::Context > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< android::text::style::TextAppearanceSpan >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME, android::text::style::TextAppearanceSpan::J2CPP_METHOD_NAME(1), android::text::style::TextAppearanceSpan::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< android::text::style::TextAppearanceSpan > create< android::text::style::TextAppearanceSpan>(local_ref< java::lang::String > const &a0, cpp_int const &a1, cpp_int const &a2, local_ref< android::content::res::ColorStateList > const &a3, local_ref< android::content::res::ColorStateList > const &a4)
{
	return local_ref< android::text::style::TextAppearanceSpan >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME, android::text::style::TextAppearanceSpan::J2CPP_METHOD_NAME(2), android::text::style::TextAppearanceSpan::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

template <>
local_ref< android::text::style::TextAppearanceSpan > create< android::text::style::TextAppearanceSpan>(local_ref< android::os::Parcel > const &a0)
{
	return local_ref< android::text::style::TextAppearanceSpan >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::style::TextAppearanceSpan::J2CPP_CLASS_NAME, android::text::style::TextAppearanceSpan::J2CPP_METHOD_NAME(3), android::text::style::TextAppearanceSpan::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::text::style::TextAppearanceSpan::getSpanTypeId()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int android::text::style::TextAppearanceSpan::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::text::style::TextAppearanceSpan::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::text::style::TextAppearanceSpan::getFamily()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< android::content::res::ColorStateList > android::text::style::TextAppearanceSpan::getTextColor()
{
	return local_ref< android::content::res::ColorStateList >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< android::content::res::ColorStateList > android::text::style::TextAppearanceSpan::getLinkTextColor()
{
	return local_ref< android::content::res::ColorStateList >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_int android::text::style::TextAppearanceSpan::getTextSize()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_int android::text::style::TextAppearanceSpan::getTextStyle()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void android::text::style::TextAppearanceSpan::updateDrawState(local_ref< android::text::TextPaint > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

void android::text::style::TextAppearanceSpan::updateMeasureState(local_ref< android::text::TextPaint > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::text::style::TextAppearanceSpan,"android/text/style/TextAppearanceSpan")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,0,"<init>","(Landroid/content/Context;I)V")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,1,"<init>","(Landroid/content/Context;II)V")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,2,"<init>","(Ljava/lang/String;IILandroid/content/res/ColorStateList;Landroid/content/res/ColorStateList;)V")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,3,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,4,"getSpanTypeId","()I")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,5,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,6,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,7,"getFamily","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,8,"getTextColor","()Landroid/content/res/ColorStateList;")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,9,"getLinkTextColor","()Landroid/content/res/ColorStateList;")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,10,"getTextSize","()I")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,11,"getTextStyle","()I")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,12,"updateDrawState","(Landroid/text/TextPaint;)V")
J2CPP_DEFINE_METHOD(android::text::style::TextAppearanceSpan,13,"updateMeasureState","(Landroid/text/TextPaint;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
