/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.io.ChunkedOutputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_CHUNKEDOUTPUTSTREAM_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_CHUNKEDOUTPUTSTREAM_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class SessionOutputBuffer; } } } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class Flushable; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/Closeable.hpp>
#include <java/io/Flushable.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/http/io/SessionOutputBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace io {

	class ChunkedOutputStream;
	class ChunkedOutputStream
		: public object<ChunkedOutputStream>
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
		J2CPP_DECLARE_METHOD(10)

		explicit ChunkedOutputStream(jobject jobj)
		: object<ChunkedOutputStream>(jobj)
		{
		}

		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::Flushable>() const;
		operator local_ref<java::io::OutputStream>() const;
		operator local_ref<java::lang::Object>() const;


		ChunkedOutputStream(local_ref< org::apache::http::io::SessionOutputBuffer > const&, jint);
		ChunkedOutputStream(local_ref< org::apache::http::io::SessionOutputBuffer > const&);
		void finish();
		void write(jint);
		void write(local_ref< array<jbyte,1> >  const&);
		void write(local_ref< array<jbyte,1> >  const&, jint, jint);
		void flush();
		void close();
	}; //class ChunkedOutputStream

} //namespace io
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_CHUNKEDOUTPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_CHUNKEDOUTPUTSTREAM_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_CHUNKEDOUTPUTSTREAM_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::io::ChunkedOutputStream::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

org::apache::http::impl::io::ChunkedOutputStream::operator local_ref<java::io::Flushable>() const
{
	return local_ref<java::io::Flushable>(get_jobject());
}

org::apache::http::impl::io::ChunkedOutputStream::operator local_ref<java::io::OutputStream>() const
{
	return local_ref<java::io::OutputStream>(get_jobject());
}

org::apache::http::impl::io::ChunkedOutputStream::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::impl::io::ChunkedOutputStream::ChunkedOutputStream(local_ref< org::apache::http::io::SessionOutputBuffer > const &a0, jint a1)
: object<org::apache::http::impl::io::ChunkedOutputStream>(
	call_new_object<
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



org::apache::http::impl::io::ChunkedOutputStream::ChunkedOutputStream(local_ref< org::apache::http::io::SessionOutputBuffer > const &a0)
: object<org::apache::http::impl::io::ChunkedOutputStream>(
	call_new_object<
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}





void org::apache::http::impl::io::ChunkedOutputStream::finish()
{
	return call_method<
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_METHOD_NAME(5),
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}

void org::apache::http::impl::io::ChunkedOutputStream::write(jint a0)
{
	return call_method<
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_METHOD_NAME(6),
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::impl::io::ChunkedOutputStream::write(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_METHOD_NAME(7),
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::impl::io::ChunkedOutputStream::write(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_METHOD_NAME(8),
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::apache::http::impl::io::ChunkedOutputStream::flush()
{
	return call_method<
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_METHOD_NAME(9),
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject());
}

void org::apache::http::impl::io::ChunkedOutputStream::close()
{
	return call_method<
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_METHOD_NAME(10),
		org::apache::http::impl::io::ChunkedOutputStream::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::io::ChunkedOutputStream,"org/apache/http/impl/io/ChunkedOutputStream")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ChunkedOutputStream,0,"<init>","(Lorg/apache/http/io/SessionOutputBuffer;I)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ChunkedOutputStream,1,"<init>","(Lorg/apache/http/io/SessionOutputBuffer;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ChunkedOutputStream,2,"flushCache","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ChunkedOutputStream,3,"flushCacheWithAppend","([BII)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ChunkedOutputStream,4,"writeClosingChunk","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ChunkedOutputStream,5,"finish","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ChunkedOutputStream,6,"write","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ChunkedOutputStream,7,"write","([B)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ChunkedOutputStream,8,"write","([BII)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ChunkedOutputStream,9,"flush","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ChunkedOutputStream,10,"close","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_CHUNKEDOUTPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
