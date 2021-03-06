/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.auth.NTLMEngine
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_NTLMENGINE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_NTLMENGINE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace auth {

	class NTLMEngine;
	class NTLMEngine
		: public object<NTLMEngine>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit NTLMEngine(jobject jobj)
		: object<NTLMEngine>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > generateType1Msg(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > generateType3Msg(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
	}; //class NTLMEngine

} //namespace auth
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_NTLMENGINE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_NTLMENGINE_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_NTLMENGINE_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::auth::NTLMEngine::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::impl::auth::NTLMEngine::generateType1Msg(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::apache::http::impl::auth::NTLMEngine::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::NTLMEngine::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::auth::NTLMEngine::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::String >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > org::apache::http::impl::auth::NTLMEngine::generateType3Msg(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3, local_ref< java::lang::String > const &a4)
{
	return call_method<
		org::apache::http::impl::auth::NTLMEngine::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::NTLMEngine::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::auth::NTLMEngine::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject(), a0, a1, a2, a3, a4);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::auth::NTLMEngine,"org/apache/http/impl/auth/NTLMEngine")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::NTLMEngine,0,"generateType1Msg","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::NTLMEngine,1,"generateType3Msg","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_NTLMENGINE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
