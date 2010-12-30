/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.LoginFilter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_LOGINFILTER_HPP_DECL
#define J2CPP_ANDROID_TEXT_LOGINFILTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace text { class InputFilter; } } }
namespace j2cpp { namespace android { namespace text { class Spanned; } } }


#include <android/text/InputFilter.hpp>
#include <android/text/Spanned.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text {

	class LoginFilter;
	namespace LoginFilter_ {

		class UsernameFilterGeneric;
		class UsernameFilterGeneric
			: public object<UsernameFilterGeneric>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)

			explicit UsernameFilterGeneric(jobject jobj)
			: object<UsernameFilterGeneric>(jobj)
			{
			}

			operator local_ref<android::text::LoginFilter>() const;


			UsernameFilterGeneric();
			UsernameFilterGeneric(jboolean);
			jboolean isAllowed(jchar);
		}; //class UsernameFilterGeneric

		class UsernameFilterGMail;
		class UsernameFilterGMail
			: public object<UsernameFilterGMail>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)

			explicit UsernameFilterGMail(jobject jobj)
			: object<UsernameFilterGMail>(jobj)
			{
			}

			operator local_ref<android::text::LoginFilter>() const;


			UsernameFilterGMail();
			UsernameFilterGMail(jboolean);
			jboolean isAllowed(jchar);
		}; //class UsernameFilterGMail

		class PasswordFilterGMail;
		class PasswordFilterGMail
			: public object<PasswordFilterGMail>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)

			explicit PasswordFilterGMail(jobject jobj)
			: object<PasswordFilterGMail>(jobj)
			{
			}

			operator local_ref<android::text::LoginFilter>() const;


			PasswordFilterGMail();
			PasswordFilterGMail(jboolean);
			jboolean isAllowed(jchar);
		}; //class PasswordFilterGMail

	} //namespace LoginFilter_

	class LoginFilter
		: public object<LoginFilter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		typedef LoginFilter_::UsernameFilterGeneric UsernameFilterGeneric;
		typedef LoginFilter_::UsernameFilterGMail UsernameFilterGMail;
		typedef LoginFilter_::PasswordFilterGMail PasswordFilterGMail;

		explicit LoginFilter(jobject jobj)
		: object<LoginFilter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::text::InputFilter>() const;


		local_ref< java::lang::CharSequence > filter(local_ref< java::lang::CharSequence >  const&, jint, jint, local_ref< android::text::Spanned >  const&, jint, jint);
		void onStart();
		void onInvalidCharacter(jchar);
		void onStop();
		jboolean isAllowed(jchar);
	}; //class LoginFilter

} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_LOGINFILTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_LOGINFILTER_HPP_IMPL
#define J2CPP_ANDROID_TEXT_LOGINFILTER_HPP_IMPL

namespace j2cpp {




android::text::LoginFilter_::UsernameFilterGeneric::operator local_ref<android::text::LoginFilter>() const
{
	return local_ref<android::text::LoginFilter>(get_jobject());
}


android::text::LoginFilter_::UsernameFilterGeneric::UsernameFilterGeneric()
: object<android::text::LoginFilter_::UsernameFilterGeneric>(
	call_new_object<
		android::text::LoginFilter_::UsernameFilterGeneric::J2CPP_CLASS_NAME,
		android::text::LoginFilter_::UsernameFilterGeneric::J2CPP_METHOD_NAME(0),
		android::text::LoginFilter_::UsernameFilterGeneric::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



android::text::LoginFilter_::UsernameFilterGeneric::UsernameFilterGeneric(jboolean a0)
: object<android::text::LoginFilter_::UsernameFilterGeneric>(
	call_new_object<
		android::text::LoginFilter_::UsernameFilterGeneric::J2CPP_CLASS_NAME,
		android::text::LoginFilter_::UsernameFilterGeneric::J2CPP_METHOD_NAME(1),
		android::text::LoginFilter_::UsernameFilterGeneric::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}


jboolean android::text::LoginFilter_::UsernameFilterGeneric::isAllowed(jchar a0)
{
	return call_method<
		android::text::LoginFilter_::UsernameFilterGeneric::J2CPP_CLASS_NAME,
		android::text::LoginFilter_::UsernameFilterGeneric::J2CPP_METHOD_NAME(2),
		android::text::LoginFilter_::UsernameFilterGeneric::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::text::LoginFilter_::UsernameFilterGeneric,"android/text/LoginFilter$UsernameFilterGeneric")
J2CPP_DEFINE_METHOD(android::text::LoginFilter_::UsernameFilterGeneric,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::LoginFilter_::UsernameFilterGeneric,1,"<init>","(Z)V")
J2CPP_DEFINE_METHOD(android::text::LoginFilter_::UsernameFilterGeneric,2,"isAllowed","(C)Z")


android::text::LoginFilter_::UsernameFilterGMail::operator local_ref<android::text::LoginFilter>() const
{
	return local_ref<android::text::LoginFilter>(get_jobject());
}


android::text::LoginFilter_::UsernameFilterGMail::UsernameFilterGMail()
: object<android::text::LoginFilter_::UsernameFilterGMail>(
	call_new_object<
		android::text::LoginFilter_::UsernameFilterGMail::J2CPP_CLASS_NAME,
		android::text::LoginFilter_::UsernameFilterGMail::J2CPP_METHOD_NAME(0),
		android::text::LoginFilter_::UsernameFilterGMail::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



android::text::LoginFilter_::UsernameFilterGMail::UsernameFilterGMail(jboolean a0)
: object<android::text::LoginFilter_::UsernameFilterGMail>(
	call_new_object<
		android::text::LoginFilter_::UsernameFilterGMail::J2CPP_CLASS_NAME,
		android::text::LoginFilter_::UsernameFilterGMail::J2CPP_METHOD_NAME(1),
		android::text::LoginFilter_::UsernameFilterGMail::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}


jboolean android::text::LoginFilter_::UsernameFilterGMail::isAllowed(jchar a0)
{
	return call_method<
		android::text::LoginFilter_::UsernameFilterGMail::J2CPP_CLASS_NAME,
		android::text::LoginFilter_::UsernameFilterGMail::J2CPP_METHOD_NAME(2),
		android::text::LoginFilter_::UsernameFilterGMail::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::text::LoginFilter_::UsernameFilterGMail,"android/text/LoginFilter$UsernameFilterGMail")
J2CPP_DEFINE_METHOD(android::text::LoginFilter_::UsernameFilterGMail,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::LoginFilter_::UsernameFilterGMail,1,"<init>","(Z)V")
J2CPP_DEFINE_METHOD(android::text::LoginFilter_::UsernameFilterGMail,2,"isAllowed","(C)Z")


android::text::LoginFilter_::PasswordFilterGMail::operator local_ref<android::text::LoginFilter>() const
{
	return local_ref<android::text::LoginFilter>(get_jobject());
}


android::text::LoginFilter_::PasswordFilterGMail::PasswordFilterGMail()
: object<android::text::LoginFilter_::PasswordFilterGMail>(
	call_new_object<
		android::text::LoginFilter_::PasswordFilterGMail::J2CPP_CLASS_NAME,
		android::text::LoginFilter_::PasswordFilterGMail::J2CPP_METHOD_NAME(0),
		android::text::LoginFilter_::PasswordFilterGMail::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



android::text::LoginFilter_::PasswordFilterGMail::PasswordFilterGMail(jboolean a0)
: object<android::text::LoginFilter_::PasswordFilterGMail>(
	call_new_object<
		android::text::LoginFilter_::PasswordFilterGMail::J2CPP_CLASS_NAME,
		android::text::LoginFilter_::PasswordFilterGMail::J2CPP_METHOD_NAME(1),
		android::text::LoginFilter_::PasswordFilterGMail::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}


jboolean android::text::LoginFilter_::PasswordFilterGMail::isAllowed(jchar a0)
{
	return call_method<
		android::text::LoginFilter_::PasswordFilterGMail::J2CPP_CLASS_NAME,
		android::text::LoginFilter_::PasswordFilterGMail::J2CPP_METHOD_NAME(2),
		android::text::LoginFilter_::PasswordFilterGMail::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::text::LoginFilter_::PasswordFilterGMail,"android/text/LoginFilter$PasswordFilterGMail")
J2CPP_DEFINE_METHOD(android::text::LoginFilter_::PasswordFilterGMail,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::LoginFilter_::PasswordFilterGMail,1,"<init>","(Z)V")
J2CPP_DEFINE_METHOD(android::text::LoginFilter_::PasswordFilterGMail,2,"isAllowed","(C)Z")



android::text::LoginFilter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::text::LoginFilter::operator local_ref<android::text::InputFilter>() const
{
	return local_ref<android::text::InputFilter>(get_jobject());
}


local_ref< java::lang::CharSequence > android::text::LoginFilter::filter(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2, local_ref< android::text::Spanned > const &a3, jint a4, jint a5)
{
	return call_method<
		android::text::LoginFilter::J2CPP_CLASS_NAME,
		android::text::LoginFilter::J2CPP_METHOD_NAME(1),
		android::text::LoginFilter::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::CharSequence > >
	(get_jobject(), a0, a1, a2, a3, a4, a5);
}

void android::text::LoginFilter::onStart()
{
	return call_method<
		android::text::LoginFilter::J2CPP_CLASS_NAME,
		android::text::LoginFilter::J2CPP_METHOD_NAME(2),
		android::text::LoginFilter::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject());
}

void android::text::LoginFilter::onInvalidCharacter(jchar a0)
{
	return call_method<
		android::text::LoginFilter::J2CPP_CLASS_NAME,
		android::text::LoginFilter::J2CPP_METHOD_NAME(3),
		android::text::LoginFilter::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

void android::text::LoginFilter::onStop()
{
	return call_method<
		android::text::LoginFilter::J2CPP_CLASS_NAME,
		android::text::LoginFilter::J2CPP_METHOD_NAME(4),
		android::text::LoginFilter::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject());
}

jboolean android::text::LoginFilter::isAllowed(jchar a0)
{
	return call_method<
		android::text::LoginFilter::J2CPP_CLASS_NAME,
		android::text::LoginFilter::J2CPP_METHOD_NAME(5),
		android::text::LoginFilter::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::text::LoginFilter,"android/text/LoginFilter")
J2CPP_DEFINE_METHOD(android::text::LoginFilter,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::LoginFilter,1,"filter","(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::text::LoginFilter,2,"onStart","()V")
J2CPP_DEFINE_METHOD(android::text::LoginFilter,3,"onInvalidCharacter","(C)V")
J2CPP_DEFINE_METHOD(android::text::LoginFilter,4,"onStop","()V")
J2CPP_DEFINE_METHOD(android::text::LoginFilter,5,"isAllowed","(C)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_LOGINFILTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
