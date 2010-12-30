/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.style.LeadingMarginSpan
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_LEADINGMARGINSPAN_HPP_DECL
#define J2CPP_ANDROID_TEXT_STYLE_LEADINGMARGINSPAN_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace text { class Layout; } } }
namespace j2cpp { namespace android { namespace text { namespace style { class ParagraphStyle; } } } }
namespace j2cpp { namespace android { namespace text { class ParcelableSpan; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/Paint.hpp>
#include <android/os/Parcel.hpp>
#include <android/text/Layout.hpp>
#include <android/text/ParcelableSpan.hpp>
#include <android/text/style/ParagraphStyle.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text { namespace style {

	class LeadingMarginSpan;
	namespace LeadingMarginSpan_ {

		class Standard;
		class Standard
			: public object<Standard>
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

			explicit Standard(jobject jobj)
			: object<Standard>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<android::text::style::LeadingMarginSpan>() const;
			operator local_ref<android::text::ParcelableSpan>() const;


			Standard(jint, jint);
			Standard(jint);
			Standard(local_ref< android::os::Parcel > const&);
			jint getSpanTypeId();
			jint describeContents();
			void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
			jint getLeadingMargin(jboolean);
			void drawLeadingMargin(local_ref< android::graphics::Canvas >  const&, local_ref< android::graphics::Paint >  const&, jint, jint, jint, jint, jint, local_ref< java::lang::CharSequence >  const&, jint, jint, jboolean, local_ref< android::text::Layout >  const&);
		}; //class Standard

	} //namespace LeadingMarginSpan_

	class LeadingMarginSpan
		: public object<LeadingMarginSpan>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		typedef LeadingMarginSpan_::Standard Standard;

		explicit LeadingMarginSpan(jobject jobj)
		: object<LeadingMarginSpan>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::text::style::ParagraphStyle>() const;


		jint getLeadingMargin(jboolean);
		void drawLeadingMargin(local_ref< android::graphics::Canvas >  const&, local_ref< android::graphics::Paint >  const&, jint, jint, jint, jint, jint, local_ref< java::lang::CharSequence >  const&, jint, jint, jboolean, local_ref< android::text::Layout >  const&);
	}; //class LeadingMarginSpan

} //namespace style
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_LEADINGMARGINSPAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_LEADINGMARGINSPAN_HPP_IMPL
#define J2CPP_ANDROID_TEXT_STYLE_LEADINGMARGINSPAN_HPP_IMPL

namespace j2cpp {




android::text::style::LeadingMarginSpan_::Standard::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::text::style::LeadingMarginSpan_::Standard::operator local_ref<android::text::style::LeadingMarginSpan>() const
{
	return local_ref<android::text::style::LeadingMarginSpan>(get_jobject());
}

android::text::style::LeadingMarginSpan_::Standard::operator local_ref<android::text::ParcelableSpan>() const
{
	return local_ref<android::text::ParcelableSpan>(get_jobject());
}


android::text::style::LeadingMarginSpan_::Standard::Standard(jint a0, jint a1)
: object<android::text::style::LeadingMarginSpan_::Standard>(
	call_new_object<
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_CLASS_NAME,
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_METHOD_NAME(0),
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



android::text::style::LeadingMarginSpan_::Standard::Standard(jint a0)
: object<android::text::style::LeadingMarginSpan_::Standard>(
	call_new_object<
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_CLASS_NAME,
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_METHOD_NAME(1),
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



android::text::style::LeadingMarginSpan_::Standard::Standard(local_ref< android::os::Parcel > const &a0)
: object<android::text::style::LeadingMarginSpan_::Standard>(
	call_new_object<
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_CLASS_NAME,
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_METHOD_NAME(2),
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_METHOD_SIGNATURE(2)>
	(a0)
)
{
}


jint android::text::style::LeadingMarginSpan_::Standard::getSpanTypeId()
{
	return call_method<
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_CLASS_NAME,
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_METHOD_NAME(3),
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

jint android::text::style::LeadingMarginSpan_::Standard::describeContents()
{
	return call_method<
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_CLASS_NAME,
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_METHOD_NAME(4),
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

void android::text::style::LeadingMarginSpan_::Standard::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_CLASS_NAME,
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_METHOD_NAME(5),
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1);
}

jint android::text::style::LeadingMarginSpan_::Standard::getLeadingMargin(jboolean a0)
{
	return call_method<
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_CLASS_NAME,
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_METHOD_NAME(6),
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject(), a0);
}

void android::text::style::LeadingMarginSpan_::Standard::drawLeadingMargin(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::Paint > const &a1, jint a2, jint a3, jint a4, jint a5, jint a6, local_ref< java::lang::CharSequence > const &a7, jint a8, jint a9, jboolean a10, local_ref< android::text::Layout > const &a11)
{
	return call_method<
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_CLASS_NAME,
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_METHOD_NAME(7),
		android::text::style::LeadingMarginSpan_::Standard::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}


J2CPP_DEFINE_CLASS(android::text::style::LeadingMarginSpan_::Standard,"android/text/style/LeadingMarginSpan$Standard")
J2CPP_DEFINE_METHOD(android::text::style::LeadingMarginSpan_::Standard,0,"<init>","(II)V")
J2CPP_DEFINE_METHOD(android::text::style::LeadingMarginSpan_::Standard,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(android::text::style::LeadingMarginSpan_::Standard,2,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::text::style::LeadingMarginSpan_::Standard,3,"getSpanTypeId","()I")
J2CPP_DEFINE_METHOD(android::text::style::LeadingMarginSpan_::Standard,4,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::text::style::LeadingMarginSpan_::Standard,5,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::text::style::LeadingMarginSpan_::Standard,6,"getLeadingMargin","(Z)I")
J2CPP_DEFINE_METHOD(android::text::style::LeadingMarginSpan_::Standard,7,"drawLeadingMargin","(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V")



android::text::style::LeadingMarginSpan::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::text::style::LeadingMarginSpan::operator local_ref<android::text::style::ParagraphStyle>() const
{
	return local_ref<android::text::style::ParagraphStyle>(get_jobject());
}

jint android::text::style::LeadingMarginSpan::getLeadingMargin(jboolean a0)
{
	return call_method<
		android::text::style::LeadingMarginSpan::J2CPP_CLASS_NAME,
		android::text::style::LeadingMarginSpan::J2CPP_METHOD_NAME(0),
		android::text::style::LeadingMarginSpan::J2CPP_METHOD_SIGNATURE(0), 
		jint >
	(get_jobject(), a0);
}

void android::text::style::LeadingMarginSpan::drawLeadingMargin(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::Paint > const &a1, jint a2, jint a3, jint a4, jint a5, jint a6, local_ref< java::lang::CharSequence > const &a7, jint a8, jint a9, jboolean a10, local_ref< android::text::Layout > const &a11)
{
	return call_method<
		android::text::style::LeadingMarginSpan::J2CPP_CLASS_NAME,
		android::text::style::LeadingMarginSpan::J2CPP_METHOD_NAME(1),
		android::text::style::LeadingMarginSpan::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}


J2CPP_DEFINE_CLASS(android::text::style::LeadingMarginSpan,"android/text/style/LeadingMarginSpan")
J2CPP_DEFINE_METHOD(android::text::style::LeadingMarginSpan,0,"getLeadingMargin","(Z)I")
J2CPP_DEFINE_METHOD(android::text::style::LeadingMarginSpan,1,"drawLeadingMargin","(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_LEADINGMARGINSPAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
