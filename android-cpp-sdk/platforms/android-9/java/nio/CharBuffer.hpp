/*================================================================================
  code generated by: java2cpp
  class: java.nio.CharBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHARBUFFER_HPP_DECL
#define J2CPP_JAVA_NIO_CHARBUFFER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Appendable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace nio { class ByteOrder; } } }


#include <java/lang/Appendable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/nio/ByteOrder.hpp>


namespace j2cpp {

namespace java { namespace nio {

	class CharBuffer;
	class CharBuffer
		: public cpp_object<CharBuffer>
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
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)

		CharBuffer(jobject jobj)
		: cpp_object<CharBuffer>(jobj)
		{
		}

		static local_ref< java::nio::CharBuffer > allocate(cpp_int const&);
		static local_ref< java::nio::CharBuffer > wrap(local_ref< cpp_char_array<1> > const&);
		static local_ref< java::nio::CharBuffer > wrap(local_ref< cpp_char_array<1> > const&, cpp_int const&, cpp_int const&);
		static local_ref< java::nio::CharBuffer > wrap(local_ref< java::lang::CharSequence > const&);
		static local_ref< java::nio::CharBuffer > wrap(local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&);
		local_ref< cpp_char_array<1> > array();
		cpp_int arrayOffset();
		local_ref< java::nio::CharBuffer > asReadOnlyBuffer();
		cpp_char charAt(cpp_int const&);
		local_ref< java::nio::CharBuffer > compact();
		cpp_int compareTo(local_ref< java::nio::CharBuffer > const&);
		local_ref< java::nio::CharBuffer > duplicate();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_char get();
		local_ref< java::nio::CharBuffer > get(local_ref< cpp_char_array<1> > const&);
		local_ref< java::nio::CharBuffer > get(local_ref< cpp_char_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_char get(cpp_int const&);
		cpp_boolean hasArray();
		cpp_int hashCode();
		cpp_boolean isDirect();
		cpp_int length();
		local_ref< java::nio::ByteOrder > order();
		local_ref< java::nio::CharBuffer > put(cpp_char const&);
		local_ref< java::nio::CharBuffer > put(local_ref< cpp_char_array<1> > const&);
		local_ref< java::nio::CharBuffer > put(local_ref< cpp_char_array<1> > const&, cpp_int const&, cpp_int const&);
		local_ref< java::nio::CharBuffer > put(local_ref< java::nio::CharBuffer > const&);
		local_ref< java::nio::CharBuffer > put(cpp_int const&, cpp_char const&);
		local_ref< java::nio::CharBuffer > put(local_ref< java::lang::String > const&);
		local_ref< java::nio::CharBuffer > put(local_ref< java::lang::String > const&, cpp_int const&, cpp_int const&);
		local_ref< java::nio::CharBuffer > slice();
		local_ref< java::lang::CharSequence > subSequence(cpp_int const&, cpp_int const&);
		local_ref< java::lang::String > toString();
		local_ref< java::nio::CharBuffer > append(cpp_char const&);
		local_ref< java::nio::CharBuffer > append(local_ref< java::lang::CharSequence > const&);
		local_ref< java::nio::CharBuffer > append(local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&);
		cpp_int read(local_ref< java::nio::CharBuffer > const&);
		local_ref< java::lang::Object > array_1();
		cpp_int compareTo(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Appendable > append_1(local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&);
		local_ref< java::lang::Appendable > append_1(local_ref< java::lang::CharSequence > const&);
		local_ref< java::lang::Appendable > append_1(cpp_char const&);
	}; //class CharBuffer

} //namespace nio
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHARBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHARBUFFER_HPP_IMPL
#define J2CPP_JAVA_NIO_CHARBUFFER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::nio::CharBuffer > create< java::nio::CharBuffer>()
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->NewObject(
			get_class<java::nio::CharBuffer::J2CPP_CLASS_NAME>(),
			get_method_id<java::nio::CharBuffer::J2CPP_CLASS_NAME, java::nio::CharBuffer::J2CPP_METHOD_NAME(0), java::nio::CharBuffer::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::allocate(cpp_int const &a0)
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::wrap(local_ref< cpp_char_array<1> > const &a0)
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::wrap(local_ref< cpp_char_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::wrap(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::wrap(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< cpp_char_array<1> > java::nio::CharBuffer::array()
{
	return local_ref< cpp_char_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_int java::nio::CharBuffer::arrayOffset()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::asReadOnlyBuffer()
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_char java::nio::CharBuffer::charAt(cpp_int const &a0)
{
	return cpp_char(
		environment::get().get_jenv()->CallCharMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::compact()
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_int java::nio::CharBuffer::compareTo(local_ref< java::nio::CharBuffer > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::duplicate()
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_boolean java::nio::CharBuffer::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

cpp_char java::nio::CharBuffer::get()
{
	return cpp_char(
		environment::get().get_jenv()->CallCharMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::get(local_ref< cpp_char_array<1> > const &a0)
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::get(local_ref< cpp_char_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_char java::nio::CharBuffer::get(cpp_int const &a0)
{
	return cpp_char(
		environment::get().get_jenv()->CallCharMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::nio::CharBuffer::hasArray()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

cpp_int java::nio::CharBuffer::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

cpp_boolean java::nio::CharBuffer::isDirect()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

cpp_int java::nio::CharBuffer::length()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

local_ref< java::nio::ByteOrder > java::nio::CharBuffer::order()
{
	return local_ref< java::nio::ByteOrder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::put(cpp_char const &a0)
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::put(local_ref< cpp_char_array<1> > const &a0)
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::put(local_ref< cpp_char_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::put(local_ref< java::nio::CharBuffer > const &a0)
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::put(cpp_int const &a0, cpp_char const &a1)
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::put(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::put(local_ref< java::lang::String > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::slice()
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>()
		)
	);
}

local_ref< java::lang::CharSequence > java::nio::CharBuffer::subSequence(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::nio::CharBuffer::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::append(cpp_char const &a0)
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::append(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::CharBuffer::append(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int java::nio::CharBuffer::read(local_ref< java::nio::CharBuffer > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::nio::CharBuffer::array_1()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>()
		)
	);
}

cpp_int java::nio::CharBuffer::compareTo(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Appendable > java::nio::CharBuffer::append_1(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::lang::Appendable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::Appendable > java::nio::CharBuffer::append_1(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< java::lang::Appendable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Appendable > java::nio::CharBuffer::append_1(cpp_char const &a0)
{
	return local_ref< java::lang::Appendable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::nio::CharBuffer,"java/nio/CharBuffer")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,1,"allocate","(I)Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,2,"wrap","([C)Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,3,"wrap","([CII)Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,4,"wrap","(Ljava/lang/CharSequence;)Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,5,"wrap","(Ljava/lang/CharSequence;II)Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,6,"array","()[C")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,7,"arrayOffset","()I")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,8,"asReadOnlyBuffer","()Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,9,"charAt","(I)C")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,10,"compact","()Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,11,"compareTo","(Ljava/nio/CharBuffer;)I")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,12,"duplicate","()Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,13,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,14,"get","()C")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,15,"get","([C)Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,16,"get","([CII)Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,17,"get","(I)C")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,18,"hasArray","()Z")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,19,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,20,"isDirect","()Z")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,21,"length","()I")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,22,"order","()Ljava/nio/ByteOrder;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,23,"put","(C)Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,24,"put","([C)Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,25,"put","([CII)Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,26,"put","(Ljava/nio/CharBuffer;)Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,27,"put","(IC)Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,28,"put","(Ljava/lang/String;)Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,29,"put","(Ljava/lang/String;II)Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,30,"slice","()Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,31,"subSequence","(II)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,32,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,33,"append","(C)Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,34,"append","(Ljava/lang/CharSequence;)Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,35,"append","(Ljava/lang/CharSequence;II)Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,36,"read","(Ljava/nio/CharBuffer;)I")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,37,"array","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,38,"compareTo","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,39,"append","(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,40,"append","(Ljava/lang/CharSequence;)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(java::nio::CharBuffer,41,"append","(C)Ljava/lang/Appendable;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHARBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
