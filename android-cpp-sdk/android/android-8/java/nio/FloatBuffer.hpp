/*================================================================================
  code generated by: java2cpp
  class: java.nio.FloatBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_FLOATBUFFER_HPP_DECL
#define J2CPP_JAVA_NIO_FLOATBUFFER_HPP_DECL


namespace j2cpp { namespace java { namespace nio { class ByteOrder; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/nio/ByteOrder.hpp>


namespace j2cpp {

namespace java { namespace nio {

	class FloatBuffer;
	class FloatBuffer
		: public cpp_object<FloatBuffer>
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

		FloatBuffer(jobject jobj)
		: cpp_object<FloatBuffer>(jobj)
		{
		}

		static local_ref< java::nio::FloatBuffer > allocate(cpp_int const&);
		static local_ref< java::nio::FloatBuffer > wrap(local_ref< cpp_float_array<1> > const&);
		static local_ref< java::nio::FloatBuffer > wrap(local_ref< cpp_float_array<1> > const&, cpp_int const&, cpp_int const&);
		local_ref< cpp_float_array<1> > array();
		cpp_int arrayOffset();
		local_ref< java::nio::FloatBuffer > asReadOnlyBuffer();
		local_ref< java::nio::FloatBuffer > compact();
		cpp_int compareTo(local_ref< java::nio::FloatBuffer > const&);
		local_ref< java::nio::FloatBuffer > duplicate();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_float get();
		local_ref< java::nio::FloatBuffer > get(local_ref< cpp_float_array<1> > const&);
		local_ref< java::nio::FloatBuffer > get(local_ref< cpp_float_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_float get(cpp_int const&);
		cpp_boolean hasArray();
		cpp_int hashCode();
		cpp_boolean isDirect();
		local_ref< java::nio::ByteOrder > order();
		local_ref< java::nio::FloatBuffer > put(cpp_float const&);
		local_ref< java::nio::FloatBuffer > put(local_ref< cpp_float_array<1> > const&);
		local_ref< java::nio::FloatBuffer > put(local_ref< cpp_float_array<1> > const&, cpp_int const&, cpp_int const&);
		local_ref< java::nio::FloatBuffer > put(local_ref< java::nio::FloatBuffer > const&);
		local_ref< java::nio::FloatBuffer > put(cpp_int const&, cpp_float const&);
		local_ref< java::nio::FloatBuffer > slice();
		local_ref< java::lang::String > toString();
		cpp_int compareTo(local_ref< java::lang::Object > const&);
	}; //class FloatBuffer

} //namespace nio
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_FLOATBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_FLOATBUFFER_HPP_IMPL
#define J2CPP_JAVA_NIO_FLOATBUFFER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::nio::FloatBuffer > create< java::nio::FloatBuffer>()
{
	return local_ref< java::nio::FloatBuffer >(
		environment::get().get_jenv()->NewObject(
			get_class<java::nio::FloatBuffer::J2CPP_CLASS_NAME>(),
			get_method_id<java::nio::FloatBuffer::J2CPP_CLASS_NAME, java::nio::FloatBuffer::J2CPP_METHOD_NAME(0), java::nio::FloatBuffer::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::nio::FloatBuffer > java::nio::FloatBuffer::allocate(cpp_int const &a0)
{
	return local_ref< java::nio::FloatBuffer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::FloatBuffer > java::nio::FloatBuffer::wrap(local_ref< cpp_float_array<1> > const &a0)
{
	return local_ref< java::nio::FloatBuffer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::FloatBuffer > java::nio::FloatBuffer::wrap(local_ref< cpp_float_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::nio::FloatBuffer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< cpp_float_array<1> > java::nio::FloatBuffer::array()
{
	return local_ref< cpp_float_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int java::nio::FloatBuffer::arrayOffset()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::nio::FloatBuffer > java::nio::FloatBuffer::asReadOnlyBuffer()
{
	return local_ref< java::nio::FloatBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::nio::FloatBuffer > java::nio::FloatBuffer::compact()
{
	return local_ref< java::nio::FloatBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_int java::nio::FloatBuffer::compareTo(local_ref< java::nio::FloatBuffer > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::FloatBuffer > java::nio::FloatBuffer::duplicate()
{
	return local_ref< java::nio::FloatBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_boolean java::nio::FloatBuffer::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_float java::nio::FloatBuffer::get()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

local_ref< java::nio::FloatBuffer > java::nio::FloatBuffer::get(local_ref< cpp_float_array<1> > const &a0)
{
	return local_ref< java::nio::FloatBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::FloatBuffer > java::nio::FloatBuffer::get(local_ref< cpp_float_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::nio::FloatBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_float java::nio::FloatBuffer::get(cpp_int const &a0)
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::nio::FloatBuffer::hasArray()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

cpp_int java::nio::FloatBuffer::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

cpp_boolean java::nio::FloatBuffer::isDirect()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

local_ref< java::nio::ByteOrder > java::nio::FloatBuffer::order()
{
	return local_ref< java::nio::ByteOrder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

local_ref< java::nio::FloatBuffer > java::nio::FloatBuffer::put(cpp_float const &a0)
{
	return local_ref< java::nio::FloatBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::FloatBuffer > java::nio::FloatBuffer::put(local_ref< cpp_float_array<1> > const &a0)
{
	return local_ref< java::nio::FloatBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::FloatBuffer > java::nio::FloatBuffer::put(local_ref< cpp_float_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::nio::FloatBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::nio::FloatBuffer > java::nio::FloatBuffer::put(local_ref< java::nio::FloatBuffer > const &a0)
{
	return local_ref< java::nio::FloatBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::FloatBuffer > java::nio::FloatBuffer::put(cpp_int const &a0, cpp_float const &a1)
{
	return local_ref< java::nio::FloatBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::nio::FloatBuffer > java::nio::FloatBuffer::slice()
{
	return local_ref< java::nio::FloatBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

local_ref< java::lang::String > java::nio::FloatBuffer::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>()
		)
	);
}

cpp_int java::nio::FloatBuffer::compareTo(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::nio::FloatBuffer,"java/nio/FloatBuffer")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,1,"allocate","(I)Ljava/nio/FloatBuffer;")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,2,"wrap","([F)Ljava/nio/FloatBuffer;")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,3,"wrap","([FII)Ljava/nio/FloatBuffer;")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,4,"array","()[F")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,5,"arrayOffset","()I")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,6,"asReadOnlyBuffer","()Ljava/nio/FloatBuffer;")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,7,"compact","()Ljava/nio/FloatBuffer;")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,8,"compareTo","(Ljava/nio/FloatBuffer;)I")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,9,"duplicate","()Ljava/nio/FloatBuffer;")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,10,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,11,"get","()F")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,12,"get","([F)Ljava/nio/FloatBuffer;")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,13,"get","([FII)Ljava/nio/FloatBuffer;")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,14,"get","(I)F")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,15,"hasArray","()Z")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,16,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,17,"isDirect","()Z")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,18,"order","()Ljava/nio/ByteOrder;")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,19,"put","(F)Ljava/nio/FloatBuffer;")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,20,"put","([F)Ljava/nio/FloatBuffer;")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,21,"put","([FII)Ljava/nio/FloatBuffer;")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,22,"put","(Ljava/nio/FloatBuffer;)Ljava/nio/FloatBuffer;")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,23,"put","(IF)Ljava/nio/FloatBuffer;")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,24,"slice","()Ljava/nio/FloatBuffer;")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,25,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::nio::FloatBuffer,26,"compareTo","(Ljava/lang/Object;)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_FLOATBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
