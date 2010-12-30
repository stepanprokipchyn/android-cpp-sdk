/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.client.methods.HttpDelete
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPDELETE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPDELETE_HPP_DECL


namespace j2cpp { namespace java { namespace net { class URI; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { namespace methods { class HttpRequestBase; } } } } } }


#include <java/lang/String.hpp>
#include <java/net/URI.hpp>
#include <org/apache/http/client/methods/HttpRequestBase.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client { namespace methods {

	class HttpDelete;
	class HttpDelete
		: public object<HttpDelete>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)

		explicit HttpDelete(jobject jobj)
		: object<HttpDelete>(jobj)
		{
		}

		operator local_ref<org::apache::http::client::methods::HttpRequestBase>() const;


		HttpDelete();
		HttpDelete(local_ref< java::net::URI > const&);
		HttpDelete(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getMethod();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > METHOD_NAME;
	}; //class HttpDelete

} //namespace methods
} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPDELETE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPDELETE_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPDELETE_HPP_IMPL

namespace j2cpp {



org::apache::http::client::methods::HttpDelete::operator local_ref<org::apache::http::client::methods::HttpRequestBase>() const
{
	return local_ref<org::apache::http::client::methods::HttpRequestBase>(get_jobject());
}


org::apache::http::client::methods::HttpDelete::HttpDelete()
: object<org::apache::http::client::methods::HttpDelete>(
	call_new_object<
		org::apache::http::client::methods::HttpDelete::J2CPP_CLASS_NAME,
		org::apache::http::client::methods::HttpDelete::J2CPP_METHOD_NAME(0),
		org::apache::http::client::methods::HttpDelete::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



org::apache::http::client::methods::HttpDelete::HttpDelete(local_ref< java::net::URI > const &a0)
: object<org::apache::http::client::methods::HttpDelete>(
	call_new_object<
		org::apache::http::client::methods::HttpDelete::J2CPP_CLASS_NAME,
		org::apache::http::client::methods::HttpDelete::J2CPP_METHOD_NAME(1),
		org::apache::http::client::methods::HttpDelete::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



org::apache::http::client::methods::HttpDelete::HttpDelete(local_ref< java::lang::String > const &a0)
: object<org::apache::http::client::methods::HttpDelete>(
	call_new_object<
		org::apache::http::client::methods::HttpDelete::J2CPP_CLASS_NAME,
		org::apache::http::client::methods::HttpDelete::J2CPP_METHOD_NAME(2),
		org::apache::http::client::methods::HttpDelete::J2CPP_METHOD_SIGNATURE(2)>
	(a0)
)
{
}


local_ref< java::lang::String > org::apache::http::client::methods::HttpDelete::getMethod()
{
	return call_method<
		org::apache::http::client::methods::HttpDelete::J2CPP_CLASS_NAME,
		org::apache::http::client::methods::HttpDelete::J2CPP_METHOD_NAME(3),
		org::apache::http::client::methods::HttpDelete::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String > >
	(get_jobject());
}


static_field<
	org::apache::http::client::methods::HttpDelete::J2CPP_CLASS_NAME,
	org::apache::http::client::methods::HttpDelete::J2CPP_FIELD_NAME(0),
	org::apache::http::client::methods::HttpDelete::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::apache::http::client::methods::HttpDelete::METHOD_NAME;


J2CPP_DEFINE_CLASS(org::apache::http::client::methods::HttpDelete,"org/apache/http/client/methods/HttpDelete")
J2CPP_DEFINE_METHOD(org::apache::http::client::methods::HttpDelete,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::client::methods::HttpDelete,1,"<init>","(Ljava/net/URI;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::methods::HttpDelete,2,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::methods::HttpDelete,3,"getMethod","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::methods::HttpDelete,0,"METHOD_NAME","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPDELETE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
