/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.OutputStreamWriter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_OUTPUTSTREAMWRITER_HPP_DECL
#define J2CPP_JAVA_IO_OUTPUTSTREAMWRITER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Writer; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace nio { namespace charset { class CharsetEncoder; } } } }
namespace j2cpp { namespace java { namespace nio { namespace charset { class Charset; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/OutputStream.hpp>
#include <java/io/Writer.hpp>
#include <java/lang/String.hpp>
#include <java/nio/charset/Charset.hpp>
#include <java/nio/charset/CharsetEncoder.hpp>


namespace j2cpp {

namespace java { namespace io {

	class OutputStreamWriter;
	class OutputStreamWriter
		: public object<OutputStreamWriter>
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

		explicit OutputStreamWriter(jobject jobj)
		: object<OutputStreamWriter>(jobj)
		{
		}

		operator local_ref<java::io::Writer>() const;


		OutputStreamWriter(local_ref< java::io::OutputStream > const&);
		OutputStreamWriter(local_ref< java::io::OutputStream > const&, local_ref< java::lang::String > const&);
		OutputStreamWriter(local_ref< java::io::OutputStream > const&, local_ref< java::nio::charset::Charset > const&);
		OutputStreamWriter(local_ref< java::io::OutputStream > const&, local_ref< java::nio::charset::CharsetEncoder > const&);
		void close();
		void flush();
		local_ref< java::lang::String > getEncoding();
		void write(local_ref< array<jchar,1> >  const&, jint, jint);
		void write(jint);
		void write(local_ref< java::lang::String >  const&, jint, jint);
	}; //class OutputStreamWriter

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_OUTPUTSTREAMWRITER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_OUTPUTSTREAMWRITER_HPP_IMPL
#define J2CPP_JAVA_IO_OUTPUTSTREAMWRITER_HPP_IMPL

namespace j2cpp {



java::io::OutputStreamWriter::operator local_ref<java::io::Writer>() const
{
	return local_ref<java::io::Writer>(get_jobject());
}


java::io::OutputStreamWriter::OutputStreamWriter(local_ref< java::io::OutputStream > const &a0)
: object<java::io::OutputStreamWriter>(
	call_new_object<
		java::io::OutputStreamWriter::J2CPP_CLASS_NAME,
		java::io::OutputStreamWriter::J2CPP_METHOD_NAME(0),
		java::io::OutputStreamWriter::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::io::OutputStreamWriter::OutputStreamWriter(local_ref< java::io::OutputStream > const &a0, local_ref< java::lang::String > const &a1)
: object<java::io::OutputStreamWriter>(
	call_new_object<
		java::io::OutputStreamWriter::J2CPP_CLASS_NAME,
		java::io::OutputStreamWriter::J2CPP_METHOD_NAME(1),
		java::io::OutputStreamWriter::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



java::io::OutputStreamWriter::OutputStreamWriter(local_ref< java::io::OutputStream > const &a0, local_ref< java::nio::charset::Charset > const &a1)
: object<java::io::OutputStreamWriter>(
	call_new_object<
		java::io::OutputStreamWriter::J2CPP_CLASS_NAME,
		java::io::OutputStreamWriter::J2CPP_METHOD_NAME(2),
		java::io::OutputStreamWriter::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1)
)
{
}



java::io::OutputStreamWriter::OutputStreamWriter(local_ref< java::io::OutputStream > const &a0, local_ref< java::nio::charset::CharsetEncoder > const &a1)
: object<java::io::OutputStreamWriter>(
	call_new_object<
		java::io::OutputStreamWriter::J2CPP_CLASS_NAME,
		java::io::OutputStreamWriter::J2CPP_METHOD_NAME(3),
		java::io::OutputStreamWriter::J2CPP_METHOD_SIGNATURE(3)>
	(a0, a1)
)
{
}


void java::io::OutputStreamWriter::close()
{
	return call_method<
		java::io::OutputStreamWriter::J2CPP_CLASS_NAME,
		java::io::OutputStreamWriter::J2CPP_METHOD_NAME(4),
		java::io::OutputStreamWriter::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject());
}

void java::io::OutputStreamWriter::flush()
{
	return call_method<
		java::io::OutputStreamWriter::J2CPP_CLASS_NAME,
		java::io::OutputStreamWriter::J2CPP_METHOD_NAME(5),
		java::io::OutputStreamWriter::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject());
}

local_ref< java::lang::String > java::io::OutputStreamWriter::getEncoding()
{
	return call_method<
		java::io::OutputStreamWriter::J2CPP_CLASS_NAME,
		java::io::OutputStreamWriter::J2CPP_METHOD_NAME(6),
		java::io::OutputStreamWriter::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void java::io::OutputStreamWriter::write(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::OutputStreamWriter::J2CPP_CLASS_NAME,
		java::io::OutputStreamWriter::J2CPP_METHOD_NAME(7),
		java::io::OutputStreamWriter::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1, a2);
}

void java::io::OutputStreamWriter::write(jint a0)
{
	return call_method<
		java::io::OutputStreamWriter::J2CPP_CLASS_NAME,
		java::io::OutputStreamWriter::J2CPP_METHOD_NAME(8),
		java::io::OutputStreamWriter::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

void java::io::OutputStreamWriter::write(local_ref< java::lang::String > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::OutputStreamWriter::J2CPP_CLASS_NAME,
		java::io::OutputStreamWriter::J2CPP_METHOD_NAME(9),
		java::io::OutputStreamWriter::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(java::io::OutputStreamWriter,"java/io/OutputStreamWriter")
J2CPP_DEFINE_METHOD(java::io::OutputStreamWriter,0,"<init>","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(java::io::OutputStreamWriter,1,"<init>","(Ljava/io/OutputStream;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::OutputStreamWriter,2,"<init>","(Ljava/io/OutputStream;Ljava/nio/charset/Charset;)V")
J2CPP_DEFINE_METHOD(java::io::OutputStreamWriter,3,"<init>","(Ljava/io/OutputStream;Ljava/nio/charset/CharsetEncoder;)V")
J2CPP_DEFINE_METHOD(java::io::OutputStreamWriter,4,"close","()V")
J2CPP_DEFINE_METHOD(java::io::OutputStreamWriter,5,"flush","()V")
J2CPP_DEFINE_METHOD(java::io::OutputStreamWriter,6,"getEncoding","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::OutputStreamWriter,7,"write","([CII)V")
J2CPP_DEFINE_METHOD(java::io::OutputStreamWriter,8,"write","(I)V")
J2CPP_DEFINE_METHOD(java::io::OutputStreamWriter,9,"write","(Ljava/lang/String;II)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_OUTPUTSTREAMWRITER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION