/*================================================================================
  code generated by: java2cpp
  class: java.util.concurrent.atomic.AtomicInteger
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent { namespace atomic {

	class AtomicInteger;
	class AtomicInteger
		: public cpp_object<AtomicInteger>
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

		AtomicInteger(jobject jobj)
		: cpp_object<AtomicInteger>(jobj)
		{
		}

		cpp_int get();
		void set(cpp_int const&);
		void lazySet(cpp_int const&);
		cpp_int getAndSet(cpp_int const&);
		cpp_boolean compareAndSet(cpp_int const&, cpp_int const&);
		cpp_boolean weakCompareAndSet(cpp_int const&, cpp_int const&);
		cpp_int getAndIncrement();
		cpp_int getAndDecrement();
		cpp_int getAndAdd(cpp_int const&);
		cpp_int incrementAndGet();
		cpp_int decrementAndGet();
		cpp_int addAndGet(cpp_int const&);
		local_ref< java::lang::String > toString();
		cpp_int intValue();
		cpp_long longValue();
		cpp_float floatValue();
		cpp_double doubleValue();
	}; //class AtomicInteger

} //namespace atomic
} //namespace concurrent
} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::concurrent::atomic::AtomicInteger > create< java::util::concurrent::atomic::AtomicInteger>(cpp_int const &a0)
{
	return local_ref< java::util::concurrent::atomic::AtomicInteger >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME, java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_NAME(0), java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::concurrent::atomic::AtomicInteger > create< java::util::concurrent::atomic::AtomicInteger>()
{
	return local_ref< java::util::concurrent::atomic::AtomicInteger >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::concurrent::atomic::AtomicInteger::J2CPP_CLASS_NAME, java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_NAME(1), java::util::concurrent::atomic::AtomicInteger::J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_int java::util::concurrent::atomic::AtomicInteger::get()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void java::util::concurrent::atomic::AtomicInteger::set(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::concurrent::atomic::AtomicInteger::lazySet(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::concurrent::atomic::AtomicInteger::getAndSet(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::atomic::AtomicInteger::compareAndSet(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::atomic::AtomicInteger::weakCompareAndSet(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int java::util::concurrent::atomic::AtomicInteger::getAndIncrement()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_int java::util::concurrent::atomic::AtomicInteger::getAndDecrement()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_int java::util::concurrent::atomic::AtomicInteger::getAndAdd(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::concurrent::atomic::AtomicInteger::incrementAndGet()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_int java::util::concurrent::atomic::AtomicInteger::decrementAndGet()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_int java::util::concurrent::atomic::AtomicInteger::addAndGet(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::concurrent::atomic::AtomicInteger::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

cpp_int java::util::concurrent::atomic::AtomicInteger::intValue()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

cpp_long java::util::concurrent::atomic::AtomicInteger::longValue()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

cpp_float java::util::concurrent::atomic::AtomicInteger::floatValue()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

cpp_double java::util::concurrent::atomic::AtomicInteger::doubleValue()
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::atomic::AtomicInteger,"java/util/concurrent/atomic/AtomicInteger")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,1,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,2,"get","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,3,"set","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,4,"lazySet","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,5,"getAndSet","(I)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,6,"compareAndSet","(II)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,7,"weakCompareAndSet","(II)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,8,"getAndIncrement","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,9,"getAndDecrement","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,10,"getAndAdd","(I)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,11,"incrementAndGet","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,12,"decrementAndGet","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,13,"addAndGet","(I)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,14,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,15,"intValue","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,16,"longValue","()J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,17,"floatValue","()F")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicInteger,18,"doubleValue","()D")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
