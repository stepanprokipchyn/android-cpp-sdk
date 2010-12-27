/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.client.CredentialsProvider
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_CREDENTIALSPROVIDER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_CREDENTIALSPROVIDER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class Credentials; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class AuthScope; } } } } }


#include <org/apache/http/auth/AuthScope.hpp>
#include <org/apache/http/auth/Credentials.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client {

	class CredentialsProvider;
	class CredentialsProvider
		: public cpp_object<CredentialsProvider>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		CredentialsProvider(jobject jobj)
		: cpp_object<CredentialsProvider>(jobj)
		{
		}

		void setCredentials(local_ref< org::apache::http::auth::AuthScope > const&, local_ref< org::apache::http::auth::Credentials > const&);
		local_ref< org::apache::http::auth::Credentials > getCredentials(local_ref< org::apache::http::auth::AuthScope > const&);
		void clear();
	}; //class CredentialsProvider

} //namespace client
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_CREDENTIALSPROVIDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_CREDENTIALSPROVIDER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_CREDENTIALSPROVIDER_HPP_IMPL

namespace j2cpp {


void org::apache::http::client::CredentialsProvider::setCredentials(local_ref< org::apache::http::auth::AuthScope > const &a0, local_ref< org::apache::http::auth::Credentials > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::apache::http::auth::Credentials > org::apache::http::client::CredentialsProvider::getCredentials(local_ref< org::apache::http::auth::AuthScope > const &a0)
{
	return local_ref< org::apache::http::auth::Credentials >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::client::CredentialsProvider::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::client::CredentialsProvider,"org/apache/http/client/CredentialsProvider")
J2CPP_DEFINE_METHOD(org::apache::http::client::CredentialsProvider,0,"setCredentials","(Lorg/apache/http/auth/AuthScope;Lorg/apache/http/auth/Credentials;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::CredentialsProvider,1,"getCredentials","(Lorg/apache/http/auth/AuthScope;)Lorg/apache/http/auth/Credentials;")
J2CPP_DEFINE_METHOD(org::apache::http::client::CredentialsProvider,2,"clear","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_CREDENTIALSPROVIDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
