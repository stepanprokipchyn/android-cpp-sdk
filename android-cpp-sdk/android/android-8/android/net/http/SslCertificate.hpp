/*================================================================================
  code generated by: java2cpp
  class: android.net.http.SslCertificate
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_HTTP_SSLCERTIFICATE_HPP_DECL
#define J2CPP_ANDROID_NET_HTTP_SSLCERTIFICATE_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace net { namespace http { namespace SslCertificate_ { class DName; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class X509Certificate; } } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }


#include <android/net/http/SslCertificate.hpp>
#include <android/os/Bundle.hpp>
#include <java/lang/String.hpp>
#include <java/security/cert/X509Certificate.hpp>
#include <java/util/Date.hpp>


namespace j2cpp {

namespace android { namespace net { namespace http {

	class SslCertificate;
	namespace SslCertificate_ {

		class DName;
		class DName
			: public cpp_object<DName>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_METHOD(4)
			J2CPP_DECLARE_FIELD(0)

			DName(jobject jobj)
			: cpp_object<DName>(jobj)
			{
			}

			local_ref< java::lang::String > getDName();
			local_ref< java::lang::String > getCName();
			local_ref< java::lang::String > getOName();
			local_ref< java::lang::String > getUName();

		}; //class DName

	} //namespace SslCertificate_

	class SslCertificate
		: public cpp_object<SslCertificate>
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

		typedef SslCertificate_::DName DName;

		SslCertificate(jobject jobj)
		: cpp_object<SslCertificate>(jobj)
		{
		}

		static local_ref< android::os::Bundle > saveState(local_ref< android::net::http::SslCertificate > const&);
		static local_ref< android::net::http::SslCertificate > restoreState(local_ref< android::os::Bundle > const&);
		local_ref< java::util::Date > getValidNotBeforeDate();
		local_ref< java::lang::String > getValidNotBefore();
		local_ref< java::util::Date > getValidNotAfterDate();
		local_ref< java::lang::String > getValidNotAfter();
		local_ref< android::net::http::SslCertificate_::DName > getIssuedTo();
		local_ref< android::net::http::SslCertificate_::DName > getIssuedBy();
		local_ref< java::lang::String > toString();
	}; //class SslCertificate

} //namespace http
} //namespace net
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_HTTP_SSLCERTIFICATE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_HTTP_SSLCERTIFICATE_HPP_IMPL
#define J2CPP_ANDROID_NET_HTTP_SSLCERTIFICATE_HPP_IMPL

namespace j2cpp {



template <>
local_ref< android::net::http::SslCertificate_::DName > create< android::net::http::SslCertificate_::DName>(local_ref< android::net::http::SslCertificate > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< android::net::http::SslCertificate_::DName >(
		environment::get().get_jenv()->NewObject(
			get_class<android::net::http::SslCertificate_::DName::J2CPP_CLASS_NAME>(),
			get_method_id<android::net::http::SslCertificate_::DName::J2CPP_CLASS_NAME, android::net::http::SslCertificate_::DName::J2CPP_METHOD_NAME(0), android::net::http::SslCertificate_::DName::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::net::http::SslCertificate_::DName::getDName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > android::net::http::SslCertificate_::DName::getCName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > android::net::http::SslCertificate_::DName::getOName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::lang::String > android::net::http::SslCertificate_::DName::getUName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}



J2CPP_DEFINE_CLASS(android::net::http::SslCertificate_::DName,"android/net/http/SslCertificate$DName")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate_::DName,0,"<init>","(Landroid/net/http/SslCertificate;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate_::DName,1,"getDName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate_::DName,2,"getCName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate_::DName,3,"getOName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate_::DName,4,"getUName","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::http::SslCertificate_::DName,0,"this$0","Landroid/net/http/SslCertificate;")


template <>
local_ref< android::net::http::SslCertificate > create< android::net::http::SslCertificate>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3)
{
	return local_ref< android::net::http::SslCertificate >(
		environment::get().get_jenv()->NewObject(
			get_class<android::net::http::SslCertificate::J2CPP_CLASS_NAME>(),
			get_method_id<android::net::http::SslCertificate::J2CPP_CLASS_NAME, android::net::http::SslCertificate::J2CPP_METHOD_NAME(0), android::net::http::SslCertificate::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

template <>
local_ref< android::net::http::SslCertificate > create< android::net::http::SslCertificate>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::util::Date > const &a2, local_ref< java::util::Date > const &a3)
{
	return local_ref< android::net::http::SslCertificate >(
		environment::get().get_jenv()->NewObject(
			get_class<android::net::http::SslCertificate::J2CPP_CLASS_NAME>(),
			get_method_id<android::net::http::SslCertificate::J2CPP_CLASS_NAME, android::net::http::SslCertificate::J2CPP_METHOD_NAME(1), android::net::http::SslCertificate::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

template <>
local_ref< android::net::http::SslCertificate > create< android::net::http::SslCertificate>(local_ref< java::security::cert::X509Certificate > const &a0)
{
	return local_ref< android::net::http::SslCertificate >(
		environment::get().get_jenv()->NewObject(
			get_class<android::net::http::SslCertificate::J2CPP_CLASS_NAME>(),
			get_method_id<android::net::http::SslCertificate::J2CPP_CLASS_NAME, android::net::http::SslCertificate::J2CPP_METHOD_NAME(2), android::net::http::SslCertificate::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::os::Bundle > android::net::http::SslCertificate::saveState(local_ref< android::net::http::SslCertificate > const &a0)
{
	return local_ref< android::os::Bundle >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::net::http::SslCertificate > android::net::http::SslCertificate::restoreState(local_ref< android::os::Bundle > const &a0)
{
	return local_ref< android::net::http::SslCertificate >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Date > android::net::http::SslCertificate::getValidNotBeforeDate()
{
	return local_ref< java::util::Date >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::String > android::net::http::SslCertificate::getValidNotBefore()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::util::Date > android::net::http::SslCertificate::getValidNotAfterDate()
{
	return local_ref< java::util::Date >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::lang::String > android::net::http::SslCertificate::getValidNotAfter()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< android::net::http::SslCertificate_::DName > android::net::http::SslCertificate::getIssuedTo()
{
	return local_ref< android::net::http::SslCertificate_::DName >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< android::net::http::SslCertificate_::DName > android::net::http::SslCertificate::getIssuedBy()
{
	return local_ref< android::net::http::SslCertificate_::DName >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< java::lang::String > android::net::http::SslCertificate::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::net::http::SslCertificate,"android/net/http/SslCertificate")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,0,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,1,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/util/Date;Ljava/util/Date;)V")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,2,"<init>","(Ljava/security/cert/X509Certificate;)V")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,3,"saveState","(Landroid/net/http/SslCertificate;)Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,4,"restoreState","(Landroid/os/Bundle;)Landroid/net/http/SslCertificate;")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,5,"getValidNotBeforeDate","()Ljava/util/Date;")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,6,"getValidNotBefore","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,7,"getValidNotAfterDate","()Ljava/util/Date;")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,8,"getValidNotAfter","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,9,"getIssuedTo","()Landroid/net/http/SslCertificate$DName;")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,10,"getIssuedBy","()Landroid/net/http/SslCertificate$DName;")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,11,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_HTTP_SSLCERTIFICATE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
