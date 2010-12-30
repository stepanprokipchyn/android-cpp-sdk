/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.cookie.RFC2965VersionAttributeHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965VERSIONATTRIBUTEHANDLER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965VERSIONATTRIBUTEHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class CookieAttributeHandler; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class CookieOrigin; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class SetCookie; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/cookie/Cookie.hpp>
#include <org/apache/http/cookie/CookieAttributeHandler.hpp>
#include <org/apache/http/cookie/CookieOrigin.hpp>
#include <org/apache/http/cookie/SetCookie.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace cookie {

	class RFC2965VersionAttributeHandler;
	class RFC2965VersionAttributeHandler
		: public object<RFC2965VersionAttributeHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit RFC2965VersionAttributeHandler(jobject jobj)
		: object<RFC2965VersionAttributeHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::cookie::CookieAttributeHandler>() const;


		RFC2965VersionAttributeHandler();
		void parse(local_ref< org::apache::http::cookie::SetCookie >  const&, local_ref< java::lang::String >  const&);
		void validate(local_ref< org::apache::http::cookie::Cookie >  const&, local_ref< org::apache::http::cookie::CookieOrigin >  const&);
		jboolean match(local_ref< org::apache::http::cookie::Cookie >  const&, local_ref< org::apache::http::cookie::CookieOrigin >  const&);
	}; //class RFC2965VersionAttributeHandler

} //namespace cookie
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965VERSIONATTRIBUTEHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965VERSIONATTRIBUTEHANDLER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965VERSIONATTRIBUTEHANDLER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::operator local_ref<org::apache::http::cookie::CookieAttributeHandler>() const
{
	return local_ref<org::apache::http::cookie::CookieAttributeHandler>(get_jobject());
}


org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::RFC2965VersionAttributeHandler()
: object<org::apache::http::impl::cookie::RFC2965VersionAttributeHandler>(
	call_new_object<
		org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::parse(local_ref< org::apache::http::cookie::SetCookie > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1);
}

void org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::validate(local_ref< org::apache::http::cookie::Cookie > const &a0, local_ref< org::apache::http::cookie::CookieOrigin > const &a1)
{
	return call_method<
		org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1);
}

jboolean org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::match(local_ref< org::apache::http::cookie::Cookie > const &a0, local_ref< org::apache::http::cookie::CookieOrigin > const &a1)
{
	return call_method<
		org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::cookie::RFC2965VersionAttributeHandler::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::cookie::RFC2965VersionAttributeHandler,"org/apache/http/impl/cookie/RFC2965VersionAttributeHandler")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::RFC2965VersionAttributeHandler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::RFC2965VersionAttributeHandler,1,"parse","(Lorg/apache/http/cookie/SetCookie;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::RFC2965VersionAttributeHandler,2,"validate","(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::RFC2965VersionAttributeHandler,3,"match","(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965VERSIONATTRIBUTEHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
