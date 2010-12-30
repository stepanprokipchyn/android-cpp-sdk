/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.cookie.BestMatchSpecFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPECFACTORY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPECFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class CookieSpec; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class CookieSpecFactory; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/cookie/CookieSpec.hpp>
#include <org/apache/http/cookie/CookieSpecFactory.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace cookie {

	class BestMatchSpecFactory;
	class BestMatchSpecFactory
		: public object<BestMatchSpecFactory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit BestMatchSpecFactory(jobject jobj)
		: object<BestMatchSpecFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::cookie::CookieSpecFactory>() const;


		BestMatchSpecFactory();
		local_ref< org::apache::http::cookie::CookieSpec > newInstance(local_ref< org::apache::http::params::HttpParams >  const&);
	}; //class BestMatchSpecFactory

} //namespace cookie
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPECFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPECFACTORY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPECFACTORY_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::cookie::BestMatchSpecFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::cookie::BestMatchSpecFactory::operator local_ref<org::apache::http::cookie::CookieSpecFactory>() const
{
	return local_ref<org::apache::http::cookie::CookieSpecFactory>(get_jobject());
}


org::apache::http::impl::cookie::BestMatchSpecFactory::BestMatchSpecFactory()
: object<org::apache::http::impl::cookie::BestMatchSpecFactory>(
	call_new_object<
		org::apache::http::impl::cookie::BestMatchSpecFactory::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BestMatchSpecFactory::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::cookie::BestMatchSpecFactory::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


local_ref< org::apache::http::cookie::CookieSpec > org::apache::http::impl::cookie::BestMatchSpecFactory::newInstance(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return call_method<
		org::apache::http::impl::cookie::BestMatchSpecFactory::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BestMatchSpecFactory::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::cookie::BestMatchSpecFactory::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::apache::http::cookie::CookieSpec > >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::cookie::BestMatchSpecFactory,"org/apache/http/impl/cookie/BestMatchSpecFactory")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BestMatchSpecFactory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BestMatchSpecFactory,1,"newInstance","(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/cookie/CookieSpec;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPECFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
