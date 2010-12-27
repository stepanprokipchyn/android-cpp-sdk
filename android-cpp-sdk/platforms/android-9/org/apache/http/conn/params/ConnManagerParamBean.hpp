/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.conn.params.ConnManagerParamBean
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNMANAGERPARAMBEAN_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNMANAGERPARAMBEAN_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace params { class ConnPerRouteBean; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <org/apache/http/conn/params/ConnPerRouteBean.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace params {

	class ConnManagerParamBean;
	class ConnManagerParamBean
		: public cpp_object<ConnManagerParamBean>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		ConnManagerParamBean(jobject jobj)
		: cpp_object<ConnManagerParamBean>(jobj)
		{
		}

		void setTimeout(cpp_long const&);
		void setMaxTotalConnections(cpp_int const&);
		void setConnectionsPerRoute(local_ref< org::apache::http::conn::params::ConnPerRouteBean > const&);
	}; //class ConnManagerParamBean

} //namespace params
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNMANAGERPARAMBEAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNMANAGERPARAMBEAN_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNMANAGERPARAMBEAN_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::conn::params::ConnManagerParamBean > create< org::apache::http::conn::params::ConnManagerParamBean>(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return local_ref< org::apache::http::conn::params::ConnManagerParamBean >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::conn::params::ConnManagerParamBean::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::conn::params::ConnManagerParamBean::J2CPP_CLASS_NAME, org::apache::http::conn::params::ConnManagerParamBean::J2CPP_METHOD_NAME(0), org::apache::http::conn::params::ConnManagerParamBean::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::conn::params::ConnManagerParamBean::setTimeout(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::conn::params::ConnManagerParamBean::setMaxTotalConnections(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::conn::params::ConnManagerParamBean::setConnectionsPerRoute(local_ref< org::apache::http::conn::params::ConnPerRouteBean > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::params::ConnManagerParamBean,"org/apache/http/conn/params/ConnManagerParamBean")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnManagerParamBean,0,"<init>","(Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnManagerParamBean,1,"setTimeout","(J)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnManagerParamBean,2,"setMaxTotalConnections","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnManagerParamBean,3,"setConnectionsPerRoute","(Lorg/apache/http/conn/params/ConnPerRouteBean;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNMANAGERPARAMBEAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
