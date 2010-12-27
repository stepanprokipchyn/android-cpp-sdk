/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.util.ByteArrayBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_UTIL_BYTEARRAYBUFFER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_UTIL_BYTEARRAYBUFFER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } } }


#include <org/apache/http/util/CharArrayBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace util {

	class ByteArrayBuffer;
	class ByteArrayBuffer
		: public cpp_object<ByteArrayBuffer>
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

		ByteArrayBuffer(jobject jobj)
		: cpp_object<ByteArrayBuffer>(jobj)
		{
		}

		void append(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		void append(cpp_int const&);
		void append(local_ref< cpp_char_array<1> > const&, cpp_int const&, cpp_int const&);
		void append(local_ref< org::apache::http::util::CharArrayBuffer > const&, cpp_int const&, cpp_int const&);
		void clear();
		local_ref< cpp_byte_array<1> > toByteArray();
		cpp_int byteAt(cpp_int const&);
		cpp_int capacity();
		cpp_int length();
		local_ref< cpp_byte_array<1> > buffer();
		void setLength(cpp_int const&);
		cpp_boolean isEmpty();
		cpp_boolean isFull();
	}; //class ByteArrayBuffer

} //namespace util
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_UTIL_BYTEARRAYBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_UTIL_BYTEARRAYBUFFER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_UTIL_BYTEARRAYBUFFER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::util::ByteArrayBuffer > create< org::apache::http::util::ByteArrayBuffer>(cpp_int const &a0)
{
	return local_ref< org::apache::http::util::ByteArrayBuffer >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::util::ByteArrayBuffer::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::util::ByteArrayBuffer::J2CPP_CLASS_NAME, org::apache::http::util::ByteArrayBuffer::J2CPP_METHOD_NAME(0), org::apache::http::util::ByteArrayBuffer::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::util::ByteArrayBuffer::append(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void org::apache::http::util::ByteArrayBuffer::append(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::util::ByteArrayBuffer::append(local_ref< cpp_char_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void org::apache::http::util::ByteArrayBuffer::append(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void org::apache::http::util::ByteArrayBuffer::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< cpp_byte_array<1> > org::apache::http::util::ByteArrayBuffer::toByteArray()
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_int org::apache::http::util::ByteArrayBuffer::byteAt(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int org::apache::http::util::ByteArrayBuffer::capacity()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_int org::apache::http::util::ByteArrayBuffer::length()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< cpp_byte_array<1> > org::apache::http::util::ByteArrayBuffer::buffer()
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

void org::apache::http::util::ByteArrayBuffer::setLength(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::util::ByteArrayBuffer::isEmpty()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_boolean org::apache::http::util::ByteArrayBuffer::isFull()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::util::ByteArrayBuffer,"org/apache/http/util/ByteArrayBuffer")
J2CPP_DEFINE_METHOD(org::apache::http::util::ByteArrayBuffer,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::util::ByteArrayBuffer,1,"append","([BII)V")
J2CPP_DEFINE_METHOD(org::apache::http::util::ByteArrayBuffer,2,"append","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::util::ByteArrayBuffer,3,"append","([CII)V")
J2CPP_DEFINE_METHOD(org::apache::http::util::ByteArrayBuffer,4,"append","(Lorg/apache/http/util/CharArrayBuffer;II)V")
J2CPP_DEFINE_METHOD(org::apache::http::util::ByteArrayBuffer,5,"clear","()V")
J2CPP_DEFINE_METHOD(org::apache::http::util::ByteArrayBuffer,6,"toByteArray","()[B")
J2CPP_DEFINE_METHOD(org::apache::http::util::ByteArrayBuffer,7,"byteAt","(I)I")
J2CPP_DEFINE_METHOD(org::apache::http::util::ByteArrayBuffer,8,"capacity","()I")
J2CPP_DEFINE_METHOD(org::apache::http::util::ByteArrayBuffer,9,"length","()I")
J2CPP_DEFINE_METHOD(org::apache::http::util::ByteArrayBuffer,10,"buffer","()[B")
J2CPP_DEFINE_METHOD(org::apache::http::util::ByteArrayBuffer,11,"setLength","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::util::ByteArrayBuffer,12,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::util::ByteArrayBuffer,13,"isFull","()Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_UTIL_BYTEARRAYBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
