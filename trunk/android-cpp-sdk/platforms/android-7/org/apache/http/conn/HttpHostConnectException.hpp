/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.conn.HttpHostConnectException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_HTTPHOSTCONNECTEXCEPTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_HTTPHOSTCONNECTEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace io { class IOException; } } }
namespace j2cpp { namespace java { namespace net { class SocketException; } } }
namespace j2cpp { namespace java { namespace net { class ConnectException; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpHost; } } } }


#include <java/io/IOException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Throwable.hpp>
#include <java/net/ConnectException.hpp>
#include <java/net/SocketException.hpp>
#include <org/apache/http/HttpHost.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn {

	class HttpHostConnectException;
	class HttpHostConnectException
		: public object<HttpHostConnectException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit HttpHostConnectException(jobject jobj)
		: object<HttpHostConnectException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::io::IOException>() const;
		operator local_ref<java::net::SocketException>() const;
		operator local_ref<java::net::ConnectException>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;


		HttpHostConnectException(local_ref< org::apache::http::HttpHost > const&, local_ref< java::net::ConnectException > const&);
		local_ref< org::apache::http::HttpHost > getHost();
	}; //class HttpHostConnectException

} //namespace conn
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_HTTPHOSTCONNECTEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_HTTPHOSTCONNECTEXCEPTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_HTTPHOSTCONNECTEXCEPTION_HPP_IMPL

namespace j2cpp {



org::apache::http::conn::HttpHostConnectException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

org::apache::http::conn::HttpHostConnectException::operator local_ref<java::io::IOException>() const
{
	return local_ref<java::io::IOException>(get_jobject());
}

org::apache::http::conn::HttpHostConnectException::operator local_ref<java::net::SocketException>() const
{
	return local_ref<java::net::SocketException>(get_jobject());
}

org::apache::http::conn::HttpHostConnectException::operator local_ref<java::net::ConnectException>() const
{
	return local_ref<java::net::ConnectException>(get_jobject());
}

org::apache::http::conn::HttpHostConnectException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::conn::HttpHostConnectException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

org::apache::http::conn::HttpHostConnectException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}


org::apache::http::conn::HttpHostConnectException::HttpHostConnectException(local_ref< org::apache::http::HttpHost > const &a0, local_ref< java::net::ConnectException > const &a1)
: object<org::apache::http::conn::HttpHostConnectException>(
	call_new_object<
		org::apache::http::conn::HttpHostConnectException::J2CPP_CLASS_NAME,
		org::apache::http::conn::HttpHostConnectException::J2CPP_METHOD_NAME(0),
		org::apache::http::conn::HttpHostConnectException::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


local_ref< org::apache::http::HttpHost > org::apache::http::conn::HttpHostConnectException::getHost()
{
	return call_method<
		org::apache::http::conn::HttpHostConnectException::J2CPP_CLASS_NAME,
		org::apache::http::conn::HttpHostConnectException::J2CPP_METHOD_NAME(1),
		org::apache::http::conn::HttpHostConnectException::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::apache::http::HttpHost >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::HttpHostConnectException,"org/apache/http/conn/HttpHostConnectException")
J2CPP_DEFINE_METHOD(org::apache::http::conn::HttpHostConnectException,0,"<init>","(Lorg/apache/http/HttpHost;Ljava/net/ConnectException;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::HttpHostConnectException,1,"getHost","()Lorg/apache/http/HttpHost;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_HTTPHOSTCONNECTEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION