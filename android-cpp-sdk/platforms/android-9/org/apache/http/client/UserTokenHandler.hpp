/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.client.UserTokenHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_USERTOKENHANDLER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_USERTOKENHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client {

	class UserTokenHandler;
	class UserTokenHandler
		: public object<UserTokenHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit UserTokenHandler(jobject jobj)
		: object<UserTokenHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::Object > getUserToken(local_ref< org::apache::http::protocol::HttpContext >  const&);
	}; //class UserTokenHandler

} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_USERTOKENHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_USERTOKENHANDLER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_USERTOKENHANDLER_HPP_IMPL

namespace j2cpp {



org::apache::http::client::UserTokenHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::Object > org::apache::http::client::UserTokenHandler::getUserToken(local_ref< org::apache::http::protocol::HttpContext > const &a0)
{
	return call_method<
		org::apache::http::client::UserTokenHandler::J2CPP_CLASS_NAME,
		org::apache::http::client::UserTokenHandler::J2CPP_METHOD_NAME(0),
		org::apache::http::client::UserTokenHandler::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::client::UserTokenHandler,"org/apache/http/client/UserTokenHandler")
J2CPP_DEFINE_METHOD(org::apache::http::client::UserTokenHandler,0,"getUserToken","(Lorg/apache/http/protocol/HttpContext;)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_USERTOKENHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
