/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.client.protocol.ResponseProcessCookies
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_RESPONSEPROCESSCOOKIES_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_RESPONSEPROCESSCOOKIES_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }


#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client { namespace protocol {

	class ResponseProcessCookies;
	class ResponseProcessCookies
		: public cpp_object<ResponseProcessCookies>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		ResponseProcessCookies(jobject jobj)
		: cpp_object<ResponseProcessCookies>(jobj)
		{
		}

		void process(local_ref< org::apache::http::HttpResponse > const&, local_ref< org::apache::http::protocol::HttpContext > const&);
	}; //class ResponseProcessCookies

} //namespace protocol
} //namespace client
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_RESPONSEPROCESSCOOKIES_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_RESPONSEPROCESSCOOKIES_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_RESPONSEPROCESSCOOKIES_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::client::protocol::ResponseProcessCookies > create< org::apache::http::client::protocol::ResponseProcessCookies>()
{
	return local_ref< org::apache::http::client::protocol::ResponseProcessCookies >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::client::protocol::ResponseProcessCookies::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::client::protocol::ResponseProcessCookies::J2CPP_CLASS_NAME, org::apache::http::client::protocol::ResponseProcessCookies::J2CPP_METHOD_NAME(0), org::apache::http::client::protocol::ResponseProcessCookies::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void org::apache::http::client::protocol::ResponseProcessCookies::process(local_ref< org::apache::http::HttpResponse > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::client::protocol::ResponseProcessCookies,"org/apache/http/client/protocol/ResponseProcessCookies")
J2CPP_DEFINE_METHOD(org::apache::http::client::protocol::ResponseProcessCookies,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::client::protocol::ResponseProcessCookies,1,"process","(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_RESPONSEPROCESSCOOKIES_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
