/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.client.utils.URLEncodedUtils
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_UTILS_URLENCODEDUTILS_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_UTILS_URLENCODEDUTILS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Scanner; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace java { namespace net { class URI; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpEntity; } } } }


#include <java/lang/String.hpp>
#include <java/net/URI.hpp>
#include <java/util/List.hpp>
#include <java/util/Scanner.hpp>
#include <org/apache/http/HttpEntity.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client { namespace utils {

	class URLEncodedUtils;
	class URLEncodedUtils
		: public cpp_object<URLEncodedUtils>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_FIELD(0)

		URLEncodedUtils(jobject jobj)
		: cpp_object<URLEncodedUtils>(jobj)
		{
		}

		static local_ref< java::util::List > parse(local_ref< java::net::URI > const&, local_ref< java::lang::String > const&);
		static local_ref< java::util::List > parse(local_ref< org::apache::http::HttpEntity > const&);
		static cpp_boolean isEncoded(local_ref< org::apache::http::HttpEntity > const&);
		static void parse(local_ref< java::util::List > const&, local_ref< java::util::Scanner > const&, local_ref< java::lang::String > const&);
		static local_ref< java::lang::String > format(local_ref< java::util::List > const&, local_ref< java::lang::String > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > CONTENT_TYPE;
	}; //class URLEncodedUtils

} //namespace utils
} //namespace client
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_UTILS_URLENCODEDUTILS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_UTILS_URLENCODEDUTILS_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_UTILS_URLENCODEDUTILS_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::client::utils::URLEncodedUtils > create< org::apache::http::client::utils::URLEncodedUtils>()
{
	return local_ref< org::apache::http::client::utils::URLEncodedUtils >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::client::utils::URLEncodedUtils::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::client::utils::URLEncodedUtils::J2CPP_CLASS_NAME, org::apache::http::client::utils::URLEncodedUtils::J2CPP_METHOD_NAME(0), org::apache::http::client::utils::URLEncodedUtils::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::util::List > org::apache::http::client::utils::URLEncodedUtils::parse(local_ref< java::net::URI > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::util::List > org::apache::http::client::utils::URLEncodedUtils::parse(local_ref< org::apache::http::HttpEntity > const &a0)
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::client::utils::URLEncodedUtils::isEncoded(local_ref< org::apache::http::HttpEntity > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::client::utils::URLEncodedUtils::parse(local_ref< java::util::List > const &a0, local_ref< java::util::Scanner > const &a1, local_ref< java::lang::String > const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::client::utils::URLEncodedUtils::format(local_ref< java::util::List > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	org::apache::http::client::utils::URLEncodedUtils::J2CPP_CLASS_NAME,
	org::apache::http::client::utils::URLEncodedUtils::J2CPP_FIELD_NAME(0),
	org::apache::http::client::utils::URLEncodedUtils::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::apache::http::client::utils::URLEncodedUtils::CONTENT_TYPE;


J2CPP_DEFINE_CLASS(org::apache::http::client::utils::URLEncodedUtils,"org/apache/http/client/utils/URLEncodedUtils")
J2CPP_DEFINE_METHOD(org::apache::http::client::utils::URLEncodedUtils,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::client::utils::URLEncodedUtils,1,"parse","(Ljava/net/URI;Ljava/lang/String;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(org::apache::http::client::utils::URLEncodedUtils,2,"parse","(Lorg/apache/http/HttpEntity;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(org::apache::http::client::utils::URLEncodedUtils,3,"isEncoded","(Lorg/apache/http/HttpEntity;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::client::utils::URLEncodedUtils,4,"parse","(Ljava/util/List;Ljava/util/Scanner;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::utils::URLEncodedUtils,5,"format","(Ljava/util/List;Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::utils::URLEncodedUtils,0,"CONTENT_TYPE","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_UTILS_URLENCODEDUTILS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
