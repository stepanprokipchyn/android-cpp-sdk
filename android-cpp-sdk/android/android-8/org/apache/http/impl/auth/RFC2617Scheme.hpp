/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.auth.RFC2617Scheme
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_RFC2617SCHEME_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_RFC2617SCHEME_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace auth {

	class RFC2617Scheme;
	class RFC2617Scheme
		: public cpp_object<RFC2617Scheme>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		RFC2617Scheme(jobject jobj)
		: cpp_object<RFC2617Scheme>(jobj)
		{
		}

		local_ref< java::lang::String > getParameter(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getRealm();
	}; //class RFC2617Scheme

} //namespace auth
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_RFC2617SCHEME_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_RFC2617SCHEME_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_RFC2617SCHEME_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::auth::RFC2617Scheme > create< org::apache::http::impl::auth::RFC2617Scheme>()
{
	return local_ref< org::apache::http::impl::auth::RFC2617Scheme >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::auth::RFC2617Scheme::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::auth::RFC2617Scheme::J2CPP_CLASS_NAME, org::apache::http::impl::auth::RFC2617Scheme::J2CPP_METHOD_NAME(0), org::apache::http::impl::auth::RFC2617Scheme::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}



local_ref< java::lang::String > org::apache::http::impl::auth::RFC2617Scheme::getParameter(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::impl::auth::RFC2617Scheme::getRealm()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::auth::RFC2617Scheme,"org/apache/http/impl/auth/RFC2617Scheme")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::RFC2617Scheme,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::RFC2617Scheme,1,"parseChallenge","(Lorg/apache/http/util/CharArrayBuffer;II)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::RFC2617Scheme,2,"getParameters","()Ljava/util/Map;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::RFC2617Scheme,3,"getParameter","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::RFC2617Scheme,4,"getRealm","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_RFC2617SCHEME_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
