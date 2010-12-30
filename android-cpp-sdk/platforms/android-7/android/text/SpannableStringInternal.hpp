/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.SpannableStringInternal
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_SPANNABLESTRINGINTERNAL_HPP_DECL
#define J2CPP_ANDROID_TEXT_SPANNABLESTRINGINTERNAL_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace text {

	class SpannableStringInternal;
	class SpannableStringInternal
		: public object<SpannableStringInternal>
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

		explicit SpannableStringInternal(jobject jobj)
		: object<SpannableStringInternal>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jint length();
		jchar charAt(jint);
		local_ref< java::lang::String > toString();
		void getChars(jint, jint, local_ref< array<jchar,1> >  const&, jint);
		jint getSpanStart(local_ref< java::lang::Object >  const&);
		jint getSpanEnd(local_ref< java::lang::Object >  const&);
		jint getSpanFlags(local_ref< java::lang::Object >  const&);
		local_ref< array< local_ref< java::lang::Object >, 1> > getSpans(jint, jint, local_ref< java::lang::Class >  const&);
		jint nextSpanTransition(jint, jint, local_ref< java::lang::Class >  const&);
	}; //class SpannableStringInternal

} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_SPANNABLESTRINGINTERNAL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_SPANNABLESTRINGINTERNAL_HPP_IMPL
#define J2CPP_ANDROID_TEXT_SPANNABLESTRINGINTERNAL_HPP_IMPL

namespace j2cpp {



android::text::SpannableStringInternal::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jint android::text::SpannableStringInternal::length()
{
	return call_method<
		android::text::SpannableStringInternal::J2CPP_CLASS_NAME,
		android::text::SpannableStringInternal::J2CPP_METHOD_NAME(1),
		android::text::SpannableStringInternal::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject());
}

jchar android::text::SpannableStringInternal::charAt(jint a0)
{
	return call_method<
		android::text::SpannableStringInternal::J2CPP_CLASS_NAME,
		android::text::SpannableStringInternal::J2CPP_METHOD_NAME(2),
		android::text::SpannableStringInternal::J2CPP_METHOD_SIGNATURE(2), 
		jchar >
	(get_jobject(), a0);
}

local_ref< java::lang::String > android::text::SpannableStringInternal::toString()
{
	return call_method<
		android::text::SpannableStringInternal::J2CPP_CLASS_NAME,
		android::text::SpannableStringInternal::J2CPP_METHOD_NAME(3),
		android::text::SpannableStringInternal::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void android::text::SpannableStringInternal::getChars(jint a0, jint a1, local_ref< array<jchar,1> > const &a2, jint a3)
{
	return call_method<
		android::text::SpannableStringInternal::J2CPP_CLASS_NAME,
		android::text::SpannableStringInternal::J2CPP_METHOD_NAME(4),
		android::text::SpannableStringInternal::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

jint android::text::SpannableStringInternal::getSpanStart(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::text::SpannableStringInternal::J2CPP_CLASS_NAME,
		android::text::SpannableStringInternal::J2CPP_METHOD_NAME(5),
		android::text::SpannableStringInternal::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject(), a0);
}

jint android::text::SpannableStringInternal::getSpanEnd(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::text::SpannableStringInternal::J2CPP_CLASS_NAME,
		android::text::SpannableStringInternal::J2CPP_METHOD_NAME(6),
		android::text::SpannableStringInternal::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject(), a0);
}

jint android::text::SpannableStringInternal::getSpanFlags(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::text::SpannableStringInternal::J2CPP_CLASS_NAME,
		android::text::SpannableStringInternal::J2CPP_METHOD_NAME(7),
		android::text::SpannableStringInternal::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject(), a0);
}

local_ref< array< local_ref< java::lang::Object >, 1> > android::text::SpannableStringInternal::getSpans(jint a0, jint a1, local_ref< java::lang::Class > const &a2)
{
	return call_method<
		android::text::SpannableStringInternal::J2CPP_CLASS_NAME,
		android::text::SpannableStringInternal::J2CPP_METHOD_NAME(8),
		android::text::SpannableStringInternal::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< array< local_ref< java::lang::Object >, 1> > >
	(get_jobject(), a0, a1, a2);
}

jint android::text::SpannableStringInternal::nextSpanTransition(jint a0, jint a1, local_ref< java::lang::Class > const &a2)
{
	return call_method<
		android::text::SpannableStringInternal::J2CPP_CLASS_NAME,
		android::text::SpannableStringInternal::J2CPP_METHOD_NAME(9),
		android::text::SpannableStringInternal::J2CPP_METHOD_SIGNATURE(9), 
		jint >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::text::SpannableStringInternal,"android/text/SpannableStringInternal")
J2CPP_DEFINE_METHOD(android::text::SpannableStringInternal,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::SpannableStringInternal,1,"length","()I")
J2CPP_DEFINE_METHOD(android::text::SpannableStringInternal,2,"charAt","(I)C")
J2CPP_DEFINE_METHOD(android::text::SpannableStringInternal,3,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringInternal,4,"getChars","(II[CI)V")
J2CPP_DEFINE_METHOD(android::text::SpannableStringInternal,5,"getSpanStart","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(android::text::SpannableStringInternal,6,"getSpanEnd","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(android::text::SpannableStringInternal,7,"getSpanFlags","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(android::text::SpannableStringInternal,8,"getSpans","(IILjava/lang/Class;)[java.lang.Object")
J2CPP_DEFINE_METHOD(android::text::SpannableStringInternal,9,"nextSpanTransition","(IILjava/lang/Class;)I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_SPANNABLESTRINGINTERNAL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
