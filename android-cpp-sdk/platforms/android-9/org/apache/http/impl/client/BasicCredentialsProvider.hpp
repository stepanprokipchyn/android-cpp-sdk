/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.client.BasicCredentialsProvider
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCREDENTIALSPROVIDER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCREDENTIALSPROVIDER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class Credentials; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class AuthScope; } } } } }


#include <java/lang/String.hpp>
#include <org/apache/http/auth/AuthScope.hpp>
#include <org/apache/http/auth/Credentials.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace client {

	class BasicCredentialsProvider;
	class BasicCredentialsProvider
		: public cpp_object<BasicCredentialsProvider>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		BasicCredentialsProvider(jobject jobj)
		: cpp_object<BasicCredentialsProvider>(jobj)
		{
		}

		void setCredentials(local_ref< org::apache::http::auth::AuthScope > const&, local_ref< org::apache::http::auth::Credentials > const&);
		local_ref< org::apache::http::auth::Credentials > getCredentials(local_ref< org::apache::http::auth::AuthScope > const&);
		local_ref< java::lang::String > toString();
		void clear();
	}; //class BasicCredentialsProvider

} //namespace client
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCREDENTIALSPROVIDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCREDENTIALSPROVIDER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCREDENTIALSPROVIDER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::client::BasicCredentialsProvider > create< org::apache::http::impl::client::BasicCredentialsProvider>()
{
	return local_ref< org::apache::http::impl::client::BasicCredentialsProvider >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::client::BasicCredentialsProvider::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::client::BasicCredentialsProvider::J2CPP_CLASS_NAME, org::apache::http::impl::client::BasicCredentialsProvider::J2CPP_METHOD_NAME(0), org::apache::http::impl::client::BasicCredentialsProvider::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void org::apache::http::impl::client::BasicCredentialsProvider::setCredentials(local_ref< org::apache::http::auth::AuthScope > const &a0, local_ref< org::apache::http::auth::Credentials > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::apache::http::auth::Credentials > org::apache::http::impl::client::BasicCredentialsProvider::getCredentials(local_ref< org::apache::http::auth::AuthScope > const &a0)
{
	return local_ref< org::apache::http::auth::Credentials >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::impl::client::BasicCredentialsProvider::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void org::apache::http::impl::client::BasicCredentialsProvider::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::client::BasicCredentialsProvider,"org/apache/http/impl/client/BasicCredentialsProvider")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicCredentialsProvider,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicCredentialsProvider,1,"setCredentials","(Lorg/apache/http/auth/AuthScope;Lorg/apache/http/auth/Credentials;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicCredentialsProvider,2,"getCredentials","(Lorg/apache/http/auth/AuthScope;)Lorg/apache/http/auth/Credentials;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicCredentialsProvider,3,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicCredentialsProvider,4,"clear","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCREDENTIALSPROVIDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
