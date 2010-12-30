/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.atomic.AtomicLongArray
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGARRAY_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGARRAY_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent { namespace atomic {

	class AtomicLongArray;
	class AtomicLongArray
		: public object<AtomicLongArray>
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

		explicit AtomicLongArray(jobject jobj)
		: object<AtomicLongArray>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		AtomicLongArray(jint);
		AtomicLongArray(local_ref< array<jlong,1> > const&);
		jint length();
		jlong get(jint);
		void set(jint, jlong);
		jlong getAndSet(jint, jlong);
		jboolean compareAndSet(jint, jlong, jlong);
		jboolean weakCompareAndSet(jint, jlong, jlong);
		jlong getAndIncrement(jint);
		jlong getAndDecrement(jint);
		jlong getAndAdd(jint, jlong);
		jlong incrementAndGet(jint);
		jlong decrementAndGet(jint);
		jlong addAndGet(jint, jlong);
		local_ref< java::lang::String > toString();
	}; //class AtomicLongArray

} //namespace atomic
} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGARRAY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGARRAY_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGARRAY_HPP_IMPL

namespace j2cpp {



java::util::concurrent::atomic::AtomicLongArray::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::atomic::AtomicLongArray::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::concurrent::atomic::AtomicLongArray::AtomicLongArray(jint a0)
: object<java::util::concurrent::atomic::AtomicLongArray>(
	call_new_object<
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_NAME(0),
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::util::concurrent::atomic::AtomicLongArray::AtomicLongArray(local_ref< array<jlong,1> > const &a0)
: object<java::util::concurrent::atomic::AtomicLongArray>(
	call_new_object<
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_NAME(1),
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}


jint java::util::concurrent::atomic::AtomicLongArray::length()
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_NAME(2),
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

jlong java::util::concurrent::atomic::AtomicLongArray::get(jint a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_NAME(3),
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_SIGNATURE(3), 
		jlong >
	(get_jobject(), a0);
}

void java::util::concurrent::atomic::AtomicLongArray::set(jint a0, jlong a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_NAME(4),
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1);
}

jlong java::util::concurrent::atomic::AtomicLongArray::getAndSet(jint a0, jlong a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_NAME(5),
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_SIGNATURE(5), 
		jlong >
	(get_jobject(), a0, a1);
}

jboolean java::util::concurrent::atomic::AtomicLongArray::compareAndSet(jint a0, jlong a1, jlong a2)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_NAME(6),
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

jboolean java::util::concurrent::atomic::AtomicLongArray::weakCompareAndSet(jint a0, jlong a1, jlong a2)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_NAME(7),
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

jlong java::util::concurrent::atomic::AtomicLongArray::getAndIncrement(jint a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_NAME(8),
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_SIGNATURE(8), 
		jlong >
	(get_jobject(), a0);
}

jlong java::util::concurrent::atomic::AtomicLongArray::getAndDecrement(jint a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_NAME(9),
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_SIGNATURE(9), 
		jlong >
	(get_jobject(), a0);
}

jlong java::util::concurrent::atomic::AtomicLongArray::getAndAdd(jint a0, jlong a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_NAME(10),
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_SIGNATURE(10), 
		jlong >
	(get_jobject(), a0, a1);
}

jlong java::util::concurrent::atomic::AtomicLongArray::incrementAndGet(jint a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_NAME(11),
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_SIGNATURE(11), 
		jlong >
	(get_jobject(), a0);
}

jlong java::util::concurrent::atomic::AtomicLongArray::decrementAndGet(jint a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_NAME(12),
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_SIGNATURE(12), 
		jlong >
	(get_jobject(), a0);
}

jlong java::util::concurrent::atomic::AtomicLongArray::addAndGet(jint a0, jlong a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_NAME(13),
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_SIGNATURE(13), 
		jlong >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::String > java::util::concurrent::atomic::AtomicLongArray::toString()
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_NAME(14),
		java::util::concurrent::atomic::AtomicLongArray::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::concurrent::atomic::AtomicLongArray,"java/util/concurrent/atomic/AtomicLongArray")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongArray,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongArray,1,"<init>","([J)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongArray,2,"length","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongArray,3,"get","(I)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongArray,4,"set","(IJ)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongArray,5,"getAndSet","(IJ)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongArray,6,"compareAndSet","(IJJ)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongArray,7,"weakCompareAndSet","(IJJ)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongArray,8,"getAndIncrement","(I)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongArray,9,"getAndDecrement","(I)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongArray,10,"getAndAdd","(IJ)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongArray,11,"incrementAndGet","(I)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongArray,12,"decrementAndGet","(I)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongArray,13,"addAndGet","(IJ)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongArray,14,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGARRAY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
