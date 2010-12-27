/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.io.ContentLengthOutputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_CONTENTLENGTHOUTPUTSTREAM_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_CONTENTLENGTHOUTPUTSTREAM_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class SessionOutputBuffer; } } } } }


#include <org/apache/http/io/SessionOutputBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace io {

	class ContentLengthOutputStream;
	class ContentLengthOutputStream
		: public cpp_object<ContentLengthOutputStream>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		ContentLengthOutputStream(jobject jobj)
		: cpp_object<ContentLengthOutputStream>(jobj)
		{
		}

		void close();
		void flush();
		void write(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		void write(local_ref< cpp_byte_array<1> > const&);
		void write(cpp_int const&);
	}; //class ContentLengthOutputStream

} //namespace io
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_CONTENTLENGTHOUTPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_CONTENTLENGTHOUTPUTSTREAM_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_CONTENTLENGTHOUTPUTSTREAM_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::io::ContentLengthOutputStream > create< org::apache::http::impl::io::ContentLengthOutputStream>(local_ref< org::apache::http::io::SessionOutputBuffer > const &a0, cpp_long const &a1)
{
	return local_ref< org::apache::http::impl::io::ContentLengthOutputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_CLASS_NAME, org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_METHOD_NAME(0), org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::apache::http::impl::io::ContentLengthOutputStream::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void org::apache::http::impl::io::ContentLengthOutputStream::flush()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void org::apache::http::impl::io::ContentLengthOutputStream::write(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void org::apache::http::impl::io::ContentLengthOutputStream::write(local_ref< cpp_byte_array<1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::impl::io::ContentLengthOutputStream::write(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::io::ContentLengthOutputStream,"org/apache/http/impl/io/ContentLengthOutputStream")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ContentLengthOutputStream,0,"<init>","(Lorg/apache/http/io/SessionOutputBuffer;J)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ContentLengthOutputStream,1,"close","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ContentLengthOutputStream,2,"flush","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ContentLengthOutputStream,3,"write","([BII)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ContentLengthOutputStream,4,"write","([B)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ContentLengthOutputStream,5,"write","(I)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_CONTENTLENGTHOUTPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
