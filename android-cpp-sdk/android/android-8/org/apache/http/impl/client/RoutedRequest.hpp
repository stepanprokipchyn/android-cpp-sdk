/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.client.RoutedRequest
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_ROUTEDREQUEST_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_ROUTEDREQUEST_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace client { class RequestWrapper; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } } }


#include <org/apache/http/conn/routing/HttpRoute.hpp>
#include <org/apache/http/impl/client/RequestWrapper.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace client {

	class RoutedRequest;
	class RoutedRequest
		: public cpp_object<RoutedRequest>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		RoutedRequest(jobject jobj)
		: cpp_object<RoutedRequest>(jobj)
		{
		}

		local_ref< org::apache::http::impl::client::RequestWrapper > getRequest();
		local_ref< org::apache::http::conn::routing::HttpRoute > getRoute();

	}; //class RoutedRequest

} //namespace client
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_ROUTEDREQUEST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_ROUTEDREQUEST_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_ROUTEDREQUEST_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::client::RoutedRequest > create< org::apache::http::impl::client::RoutedRequest>(local_ref< org::apache::http::impl::client::RequestWrapper > const &a0, local_ref< org::apache::http::conn::routing::HttpRoute > const &a1)
{
	return local_ref< org::apache::http::impl::client::RoutedRequest >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::client::RoutedRequest::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::client::RoutedRequest::J2CPP_CLASS_NAME, org::apache::http::impl::client::RoutedRequest::J2CPP_METHOD_NAME(0), org::apache::http::impl::client::RoutedRequest::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::apache::http::impl::client::RequestWrapper > org::apache::http::impl::client::RoutedRequest::getRequest()
{
	return local_ref< org::apache::http::impl::client::RequestWrapper >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< org::apache::http::conn::routing::HttpRoute > org::apache::http::impl::client::RoutedRequest::getRoute()
{
	return local_ref< org::apache::http::conn::routing::HttpRoute >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}



J2CPP_DEFINE_CLASS(org::apache::http::impl::client::RoutedRequest,"org/apache/http/impl/client/RoutedRequest")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RoutedRequest,0,"<init>","(Lorg/apache/http/impl/client/RequestWrapper;Lorg/apache/http/conn/routing/HttpRoute;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RoutedRequest,1,"getRequest","()Lorg/apache/http/impl/client/RequestWrapper;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RoutedRequest,2,"getRoute","()Lorg/apache/http/conn/routing/HttpRoute;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::client::RoutedRequest,0,"request","Lorg/apache/http/impl/client/RequestWrapper;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::client::RoutedRequest,1,"route","Lorg/apache/http/conn/routing/HttpRoute;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_ROUTEDREQUEST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
