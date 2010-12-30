/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.util.EncodingUtils
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_UTIL_ENCODINGUTILS_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_UTIL_ENCODINGUTILS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace util {

	class EncodingUtils;
	class EncodingUtils
		: public object<EncodingUtils>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)

		explicit EncodingUtils(jobject jobj)
		: object<EncodingUtils>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< java::lang::String > getString(local_ref< array<jbyte,1> >  const&, jint, jint, local_ref< java::lang::String >  const&);
		static local_ref< java::lang::String > getString(local_ref< array<jbyte,1> >  const&, local_ref< java::lang::String >  const&);
		static local_ref< array<jbyte,1> > getBytes(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static local_ref< array<jbyte,1> > getAsciiBytes(local_ref< java::lang::String >  const&);
		static local_ref< java::lang::String > getAsciiString(local_ref< array<jbyte,1> >  const&, jint, jint);
		static local_ref< java::lang::String > getAsciiString(local_ref< array<jbyte,1> >  const&);
	}; //class EncodingUtils

} //namespace util
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_UTIL_ENCODINGUTILS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_UTIL_ENCODINGUTILS_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_UTIL_ENCODINGUTILS_HPP_IMPL

namespace j2cpp {



org::apache::http::util::EncodingUtils::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::String > org::apache::http::util::EncodingUtils::getString(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2, local_ref< java::lang::String > const &a3)
{
	return call_static_method<
		org::apache::http::util::EncodingUtils::J2CPP_CLASS_NAME,
		org::apache::http::util::EncodingUtils::J2CPP_METHOD_NAME(1),
		org::apache::http::util::EncodingUtils::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(a0, a1, a2, a3);
}

local_ref< java::lang::String > org::apache::http::util::EncodingUtils::getString(local_ref< array<jbyte,1> > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		org::apache::http::util::EncodingUtils::J2CPP_CLASS_NAME,
		org::apache::http::util::EncodingUtils::J2CPP_METHOD_NAME(2),
		org::apache::http::util::EncodingUtils::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String > >
	(a0, a1);
}

local_ref< array<jbyte,1> > org::apache::http::util::EncodingUtils::getBytes(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		org::apache::http::util::EncodingUtils::J2CPP_CLASS_NAME,
		org::apache::http::util::EncodingUtils::J2CPP_METHOD_NAME(3),
		org::apache::http::util::EncodingUtils::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< array<jbyte,1> > >
	(a0, a1);
}

local_ref< array<jbyte,1> > org::apache::http::util::EncodingUtils::getAsciiBytes(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		org::apache::http::util::EncodingUtils::J2CPP_CLASS_NAME,
		org::apache::http::util::EncodingUtils::J2CPP_METHOD_NAME(4),
		org::apache::http::util::EncodingUtils::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< array<jbyte,1> > >
	(a0);
}

local_ref< java::lang::String > org::apache::http::util::EncodingUtils::getAsciiString(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_static_method<
		org::apache::http::util::EncodingUtils::J2CPP_CLASS_NAME,
		org::apache::http::util::EncodingUtils::J2CPP_METHOD_NAME(5),
		org::apache::http::util::EncodingUtils::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String > >
	(a0, a1, a2);
}

local_ref< java::lang::String > org::apache::http::util::EncodingUtils::getAsciiString(local_ref< array<jbyte,1> > const &a0)
{
	return call_static_method<
		org::apache::http::util::EncodingUtils::J2CPP_CLASS_NAME,
		org::apache::http::util::EncodingUtils::J2CPP_METHOD_NAME(6),
		org::apache::http::util::EncodingUtils::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::util::EncodingUtils,"org/apache/http/util/EncodingUtils")
J2CPP_DEFINE_METHOD(org::apache::http::util::EncodingUtils,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::util::EncodingUtils,1,"getString","([BIILjava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::util::EncodingUtils,2,"getString","([BLjava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::util::EncodingUtils,3,"getBytes","(Ljava/lang/String;Ljava/lang/String;)[B")
J2CPP_DEFINE_METHOD(org::apache::http::util::EncodingUtils,4,"getAsciiBytes","(Ljava/lang/String;)[B")
J2CPP_DEFINE_METHOD(org::apache::http::util::EncodingUtils,5,"getAsciiString","([BII)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::util::EncodingUtils,6,"getAsciiString","([B)Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_UTIL_ENCODINGUTILS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
