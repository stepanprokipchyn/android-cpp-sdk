/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.HttpVersion
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPVERSION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_HTTPVERSION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class ProtocolVersion; } } } }


#include <java/io/Serializable.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/ProtocolVersion.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class HttpVersion;
	class HttpVersion
		: public object<HttpVersion>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit HttpVersion(jobject jobj)
		: object<HttpVersion>(jobj)
		{
		}

		operator local_ref<org::apache::http::ProtocolVersion>() const;
		operator local_ref<java::io::Serializable>() const;


		HttpVersion(jint, jint);
		local_ref< org::apache::http::ProtocolVersion > forVersion(jint, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > HTTP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< org::apache::http::HttpVersion > > HTTP_0_9;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< org::apache::http::HttpVersion > > HTTP_1_0;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< org::apache::http::HttpVersion > > HTTP_1_1;
	}; //class HttpVersion

} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPVERSION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPVERSION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_HTTPVERSION_HPP_IMPL

namespace j2cpp {



org::apache::http::HttpVersion::operator local_ref<org::apache::http::ProtocolVersion>() const
{
	return local_ref<org::apache::http::ProtocolVersion>(get_jobject());
}

org::apache::http::HttpVersion::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


org::apache::http::HttpVersion::HttpVersion(jint a0, jint a1)
: object<org::apache::http::HttpVersion>(
	call_new_object<
		org::apache::http::HttpVersion::J2CPP_CLASS_NAME,
		org::apache::http::HttpVersion::J2CPP_METHOD_NAME(0),
		org::apache::http::HttpVersion::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}


local_ref< org::apache::http::ProtocolVersion > org::apache::http::HttpVersion::forVersion(jint a0, jint a1)
{
	return call_method<
		org::apache::http::HttpVersion::J2CPP_CLASS_NAME,
		org::apache::http::HttpVersion::J2CPP_METHOD_NAME(1),
		org::apache::http::HttpVersion::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::apache::http::ProtocolVersion > >
	(get_jobject(), a0, a1);
}



static_field<
	org::apache::http::HttpVersion::J2CPP_CLASS_NAME,
	org::apache::http::HttpVersion::J2CPP_FIELD_NAME(0),
	org::apache::http::HttpVersion::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::apache::http::HttpVersion::HTTP;

static_field<
	org::apache::http::HttpVersion::J2CPP_CLASS_NAME,
	org::apache::http::HttpVersion::J2CPP_FIELD_NAME(1),
	org::apache::http::HttpVersion::J2CPP_FIELD_SIGNATURE(1),
	local_ref< org::apache::http::HttpVersion >
> org::apache::http::HttpVersion::HTTP_0_9;

static_field<
	org::apache::http::HttpVersion::J2CPP_CLASS_NAME,
	org::apache::http::HttpVersion::J2CPP_FIELD_NAME(2),
	org::apache::http::HttpVersion::J2CPP_FIELD_SIGNATURE(2),
	local_ref< org::apache::http::HttpVersion >
> org::apache::http::HttpVersion::HTTP_1_0;

static_field<
	org::apache::http::HttpVersion::J2CPP_CLASS_NAME,
	org::apache::http::HttpVersion::J2CPP_FIELD_NAME(3),
	org::apache::http::HttpVersion::J2CPP_FIELD_SIGNATURE(3),
	local_ref< org::apache::http::HttpVersion >
> org::apache::http::HttpVersion::HTTP_1_1;


J2CPP_DEFINE_CLASS(org::apache::http::HttpVersion,"org/apache/http/HttpVersion")
J2CPP_DEFINE_METHOD(org::apache::http::HttpVersion,0,"<init>","(II)V")
J2CPP_DEFINE_METHOD(org::apache::http::HttpVersion,1,"forVersion","(II)Lorg/apache/http/ProtocolVersion;")
J2CPP_DEFINE_METHOD(org::apache::http::HttpVersion,2,"<clinit>","()V")
J2CPP_DEFINE_FIELD(org::apache::http::HttpVersion,0,"HTTP","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::HttpVersion,1,"HTTP_0_9","Lorg/apache/http/HttpVersion;")
J2CPP_DEFINE_FIELD(org::apache::http::HttpVersion,2,"HTTP_1_0","Lorg/apache/http/HttpVersion;")
J2CPP_DEFINE_FIELD(org::apache::http::HttpVersion,3,"HTTP_1_1","Lorg/apache/http/HttpVersion;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPVERSION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
