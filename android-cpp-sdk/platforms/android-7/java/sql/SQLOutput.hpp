/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.sql.SQLOutput
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SQLOUTPUT_HPP_DECL
#define J2CPP_JAVA_SQL_SQLOUTPUT_HPP_DECL


namespace j2cpp { namespace java { namespace net { class URL; } } }
namespace j2cpp { namespace java { namespace io { class Reader; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace math { class BigDecimal; } } }
namespace j2cpp { namespace java { namespace sql { class Ref; } } }
namespace j2cpp { namespace java { namespace sql { class Clob; } } }
namespace j2cpp { namespace java { namespace sql { class Blob; } } }
namespace j2cpp { namespace java { namespace sql { class Date; } } }
namespace j2cpp { namespace java { namespace sql { class SQLData; } } }
namespace j2cpp { namespace java { namespace sql { class Time; } } }
namespace j2cpp { namespace java { namespace sql { class Array; } } }
namespace j2cpp { namespace java { namespace sql { class Struct; } } }
namespace j2cpp { namespace java { namespace sql { class Timestamp; } } }


#include <java/io/InputStream.hpp>
#include <java/io/Reader.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/math/BigDecimal.hpp>
#include <java/net/URL.hpp>
#include <java/sql/Array.hpp>
#include <java/sql/Blob.hpp>
#include <java/sql/Clob.hpp>
#include <java/sql/Date.hpp>
#include <java/sql/Ref.hpp>
#include <java/sql/SQLData.hpp>
#include <java/sql/Struct.hpp>
#include <java/sql/Time.hpp>
#include <java/sql/Timestamp.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class SQLOutput;
	class SQLOutput
		: public object<SQLOutput>
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
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)

		explicit SQLOutput(jobject jobj)
		: object<SQLOutput>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void writeString(local_ref< java::lang::String >  const&);
		void writeBoolean(jboolean);
		void writeByte(jbyte);
		void writeShort(jshort);
		void writeInt(jint);
		void writeLong(jlong);
		void writeFloat(jfloat);
		void writeDouble(jdouble);
		void writeBigDecimal(local_ref< java::math::BigDecimal >  const&);
		void writeBytes(local_ref< array<jbyte,1> >  const&);
		void writeDate(local_ref< java::sql::Date >  const&);
		void writeTime(local_ref< java::sql::Time >  const&);
		void writeTimestamp(local_ref< java::sql::Timestamp >  const&);
		void writeCharacterStream(local_ref< java::io::Reader >  const&);
		void writeAsciiStream(local_ref< java::io::InputStream >  const&);
		void writeBinaryStream(local_ref< java::io::InputStream >  const&);
		void writeObject(local_ref< java::sql::SQLData >  const&);
		void writeRef(local_ref< java::sql::Ref >  const&);
		void writeBlob(local_ref< java::sql::Blob >  const&);
		void writeClob(local_ref< java::sql::Clob >  const&);
		void writeStruct(local_ref< java::sql::Struct >  const&);
		void writeArray(local_ref< java::sql::Array >  const&);
		void writeURL(local_ref< java::net::URL >  const&);
	}; //class SQLOutput

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SQLOUTPUT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SQLOUTPUT_HPP_IMPL
#define J2CPP_JAVA_SQL_SQLOUTPUT_HPP_IMPL

namespace j2cpp {



java::sql::SQLOutput::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void java::sql::SQLOutput::writeString(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(0),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeBoolean(jboolean a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(1),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeByte(jbyte a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(2),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeShort(jshort a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(3),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeInt(jint a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(4),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeLong(jlong a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(5),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeFloat(jfloat a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(6),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeDouble(jdouble a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(7),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeBigDecimal(local_ref< java::math::BigDecimal > const &a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(8),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeBytes(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(9),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeDate(local_ref< java::sql::Date > const &a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(10),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeTime(local_ref< java::sql::Time > const &a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(11),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeTimestamp(local_ref< java::sql::Timestamp > const &a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(12),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeCharacterStream(local_ref< java::io::Reader > const &a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(13),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeAsciiStream(local_ref< java::io::InputStream > const &a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(14),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeBinaryStream(local_ref< java::io::InputStream > const &a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(15),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeObject(local_ref< java::sql::SQLData > const &a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(16),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeRef(local_ref< java::sql::Ref > const &a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(17),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeBlob(local_ref< java::sql::Blob > const &a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(18),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeClob(local_ref< java::sql::Clob > const &a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(19),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeStruct(local_ref< java::sql::Struct > const &a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(20),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(20), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeArray(local_ref< java::sql::Array > const &a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(21),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(21), 
		void >
	(get_jobject(), a0);
}

void java::sql::SQLOutput::writeURL(local_ref< java::net::URL > const &a0)
{
	return call_method<
		java::sql::SQLOutput::J2CPP_CLASS_NAME,
		java::sql::SQLOutput::J2CPP_METHOD_NAME(22),
		java::sql::SQLOutput::J2CPP_METHOD_SIGNATURE(22), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::sql::SQLOutput,"java/sql/SQLOutput")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,0,"writeString","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,1,"writeBoolean","(Z)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,2,"writeByte","(B)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,3,"writeShort","(S)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,4,"writeInt","(I)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,5,"writeLong","(J)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,6,"writeFloat","(F)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,7,"writeDouble","(D)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,8,"writeBigDecimal","(Ljava/math/BigDecimal;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,9,"writeBytes","([B)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,10,"writeDate","(Ljava/sql/Date;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,11,"writeTime","(Ljava/sql/Time;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,12,"writeTimestamp","(Ljava/sql/Timestamp;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,13,"writeCharacterStream","(Ljava/io/Reader;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,14,"writeAsciiStream","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,15,"writeBinaryStream","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,16,"writeObject","(Ljava/sql/SQLData;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,17,"writeRef","(Ljava/sql/Ref;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,18,"writeBlob","(Ljava/sql/Blob;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,19,"writeClob","(Ljava/sql/Clob;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,20,"writeStruct","(Ljava/sql/Struct;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,21,"writeArray","(Ljava/sql/Array;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLOutput,22,"writeURL","(Ljava/net/URL;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SQLOUTPUT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
