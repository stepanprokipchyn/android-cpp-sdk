/*================================================================================
  code generated by: java2cpp
  class: java.util.concurrent.ConcurrentHashMap
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Enumeration; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }


#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Enumeration.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class ConcurrentHashMap;
	class ConcurrentHashMap
		: public cpp_object<ConcurrentHashMap>
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

		ConcurrentHashMap(jobject jobj)
		: cpp_object<ConcurrentHashMap>(jobj)
		{
		}

		cpp_boolean isEmpty();
		cpp_int size();
		local_ref< java::lang::Object > get(local_ref< java::lang::Object > const&);
		cpp_boolean containsKey(local_ref< java::lang::Object > const&);
		cpp_boolean containsValue(local_ref< java::lang::Object > const&);
		cpp_boolean contains(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > put(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > putIfAbsent(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		void putAll(local_ref< java::util::Map > const&);
		local_ref< java::lang::Object > remove(local_ref< java::lang::Object > const&);
		cpp_boolean remove(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		cpp_boolean replace(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > replace(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		void clear();
		local_ref< java::util::Set > keySet();
		local_ref< java::util::Collection > values();
		local_ref< java::util::Set > entrySet();
		local_ref< java::util::Enumeration > keys();
		local_ref< java::util::Enumeration > elements();
	}; //class ConcurrentHashMap

} //namespace concurrent
} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::concurrent::ConcurrentHashMap > create< java::util::concurrent::ConcurrentHashMap>(cpp_int const &a0, cpp_float const &a1, cpp_int const &a2)
{
	return local_ref< java::util::concurrent::ConcurrentHashMap >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME, java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(0), java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< java::util::concurrent::ConcurrentHashMap > create< java::util::concurrent::ConcurrentHashMap>(cpp_int const &a0)
{
	return local_ref< java::util::concurrent::ConcurrentHashMap >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME, java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(1), java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::concurrent::ConcurrentHashMap > create< java::util::concurrent::ConcurrentHashMap>()
{
	return local_ref< java::util::concurrent::ConcurrentHashMap >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME, java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(2), java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

template <>
local_ref< java::util::concurrent::ConcurrentHashMap > create< java::util::concurrent::ConcurrentHashMap>(local_ref< java::util::Map > const &a0)
{
	return local_ref< java::util::concurrent::ConcurrentHashMap >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME, java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(3), java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::ConcurrentHashMap::isEmpty()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int java::util::concurrent::ConcurrentHashMap::size()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::ConcurrentHashMap::get(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::ConcurrentHashMap::containsKey(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::ConcurrentHashMap::containsValue(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::ConcurrentHashMap::contains(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::ConcurrentHashMap::put(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::ConcurrentHashMap::putIfAbsent(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::util::concurrent::ConcurrentHashMap::putAll(local_ref< java::util::Map > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::ConcurrentHashMap::remove(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::ConcurrentHashMap::remove(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::ConcurrentHashMap::replace(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1, local_ref< java::lang::Object > const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::ConcurrentHashMap::replace(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::util::concurrent::ConcurrentHashMap::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

local_ref< java::util::Set > java::util::concurrent::ConcurrentHashMap::keySet()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

local_ref< java::util::Collection > java::util::concurrent::ConcurrentHashMap::values()
{
	return local_ref< java::util::Collection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

local_ref< java::util::Set > java::util::concurrent::ConcurrentHashMap::entrySet()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

local_ref< java::util::Enumeration > java::util::concurrent::ConcurrentHashMap::keys()
{
	return local_ref< java::util::Enumeration >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

local_ref< java::util::Enumeration > java::util::concurrent::ConcurrentHashMap::elements()
{
	return local_ref< java::util::Enumeration >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::ConcurrentHashMap,"java/util/concurrent/ConcurrentHashMap")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,0,"<init>","(IFI)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,2,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,3,"<init>","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,4,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,5,"size","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,6,"get","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,7,"containsKey","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,8,"containsValue","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,9,"contains","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,10,"put","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,11,"putIfAbsent","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,12,"putAll","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,13,"remove","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,14,"remove","(Ljava/lang/Object;Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,15,"replace","(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,16,"replace","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,17,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,18,"keySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,19,"values","()Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,20,"entrySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,21,"keys","()Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,22,"elements","()Ljava/util/Enumeration;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
