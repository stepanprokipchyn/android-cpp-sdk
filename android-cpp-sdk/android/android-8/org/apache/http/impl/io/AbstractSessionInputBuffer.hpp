/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.io.AbstractSessionInputBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONINPUTBUFFER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONINPUTBUFFER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class HttpTransportMetrics; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <org/apache/http/io/HttpTransportMetrics.hpp>
#include <org/apache/http/util/CharArrayBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace io {

	class AbstractSessionInputBuffer;
	class AbstractSessionInputBuffer
		: public cpp_object<AbstractSessionInputBuffer>
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
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)

		AbstractSessionInputBuffer(jobject jobj)
		: cpp_object<AbstractSessionInputBuffer>(jobj)
		{
		}

		cpp_int read();
		cpp_int read(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_int read(local_ref< cpp_byte_array<1> > const&);
		cpp_int readLine(local_ref< org::apache::http::util::CharArrayBuffer > const&);
		local_ref< java::lang::String > readLine();
		local_ref< org::apache::http::io::HttpTransportMetrics > getMetrics();
	}; //class AbstractSessionInputBuffer

} //namespace io
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONINPUTBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONINPUTBUFFER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONINPUTBUFFER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::io::AbstractSessionInputBuffer > create< org::apache::http::impl::io::AbstractSessionInputBuffer>()
{
	return local_ref< org::apache::http::impl::io::AbstractSessionInputBuffer >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_CLASS_NAME, org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_METHOD_NAME(0), org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}




cpp_int org::apache::http::impl::io::AbstractSessionInputBuffer::read()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int org::apache::http::impl::io::AbstractSessionInputBuffer::read(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int org::apache::http::impl::io::AbstractSessionInputBuffer::read(local_ref< cpp_byte_array<1> > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int org::apache::http::impl::io::AbstractSessionInputBuffer::readLine(local_ref< org::apache::http::util::CharArrayBuffer > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::impl::io::AbstractSessionInputBuffer::readLine()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< org::apache::http::io::HttpTransportMetrics > org::apache::http::impl::io::AbstractSessionInputBuffer::getMetrics()
{
	return local_ref< org::apache::http::io::HttpTransportMetrics >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::io::AbstractSessionInputBuffer,"org/apache/http/impl/io/AbstractSessionInputBuffer")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionInputBuffer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionInputBuffer,1,"init","(Ljava/io/InputStream;ILorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionInputBuffer,2,"fillBuffer","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionInputBuffer,3,"hasBufferedData","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionInputBuffer,4,"read","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionInputBuffer,5,"read","([BII)I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionInputBuffer,6,"read","([B)I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionInputBuffer,7,"readLine","(Lorg/apache/http/util/CharArrayBuffer;)I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionInputBuffer,8,"readLine","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionInputBuffer,9,"getMetrics","()Lorg/apache/http/io/HttpTransportMetrics;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONINPUTBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
