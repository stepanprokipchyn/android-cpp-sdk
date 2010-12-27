/*================================================================================
  code generated by: java2cpp
  class: java.util.ArrayList
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ARRAYLIST_HPP_DECL
#define J2CPP_JAVA_UTIL_ARRAYLIST_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }


#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>


namespace j2cpp {

namespace java { namespace util {

	class ArrayList;
	class ArrayList
		: public cpp_object<ArrayList>
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

		ArrayList(jobject jobj)
		: cpp_object<ArrayList>(jobj)
		{
		}

		cpp_boolean add(local_ref< java::lang::Object > const&);
		void add(cpp_int const&, local_ref< java::lang::Object > const&);
		cpp_boolean addAll(local_ref< java::util::Collection > const&);
		cpp_boolean addAll(cpp_int const&, local_ref< java::util::Collection > const&);
		void clear();
		local_ref< java::lang::Object > clone();
		void ensureCapacity(cpp_int const&);
		local_ref< java::lang::Object > get(cpp_int const&);
		cpp_int size();
		cpp_boolean isEmpty();
		cpp_boolean contains(local_ref< java::lang::Object > const&);
		cpp_int indexOf(local_ref< java::lang::Object > const&);
		cpp_int lastIndexOf(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > remove(cpp_int const&);
		cpp_boolean remove(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > set(cpp_int const&, local_ref< java::lang::Object > const&);
		local_ref< cpp_object_array<java::lang::Object, 1> > toArray();
		local_ref< cpp_object_array<java::lang::Object, 1> > toArray(local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		void trimToSize();
		local_ref< java::util::Iterator > iterator();
		cpp_int hashCode();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
	}; //class ArrayList

} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ARRAYLIST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ARRAYLIST_HPP_IMPL
#define J2CPP_JAVA_UTIL_ARRAYLIST_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::ArrayList > create< java::util::ArrayList>(cpp_int const &a0)
{
	return local_ref< java::util::ArrayList >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::ArrayList::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::ArrayList::J2CPP_CLASS_NAME, java::util::ArrayList::J2CPP_METHOD_NAME(0), java::util::ArrayList::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::ArrayList > create< java::util::ArrayList>()
{
	return local_ref< java::util::ArrayList >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::ArrayList::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::ArrayList::J2CPP_CLASS_NAME, java::util::ArrayList::J2CPP_METHOD_NAME(1), java::util::ArrayList::J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

template <>
local_ref< java::util::ArrayList > create< java::util::ArrayList>(local_ref< java::util::Collection > const &a0)
{
	return local_ref< java::util::ArrayList >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::ArrayList::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::ArrayList::J2CPP_CLASS_NAME, java::util::ArrayList::J2CPP_METHOD_NAME(2), java::util::ArrayList::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::ArrayList::add(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::ArrayList::add(cpp_int const &a0, local_ref< java::lang::Object > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::util::ArrayList::addAll(local_ref< java::util::Collection > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::ArrayList::addAll(cpp_int const &a0, local_ref< java::util::Collection > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::util::ArrayList::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::ArrayList::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

void java::util::ArrayList::ensureCapacity(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::ArrayList::get(cpp_int const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::ArrayList::size()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_boolean java::util::ArrayList::isEmpty()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_boolean java::util::ArrayList::contains(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::ArrayList::indexOf(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::ArrayList::lastIndexOf(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::ArrayList::remove(cpp_int const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::ArrayList::remove(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}


local_ref< java::lang::Object > java::util::ArrayList::set(cpp_int const &a0, local_ref< java::lang::Object > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::Object, 1> > java::util::ArrayList::toArray()
{
	return local_ref< cpp_object_array<java::lang::Object, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::Object, 1> > java::util::ArrayList::toArray(local_ref< cpp_object_array<java::lang::Object, 1> > const &a0)
{
	return local_ref< cpp_object_array<java::lang::Object, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::ArrayList::trimToSize()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}

local_ref< java::util::Iterator > java::util::ArrayList::iterator()
{
	return local_ref< java::util::Iterator >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>()
		)
	);
}

cpp_int java::util::ArrayList::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

cpp_boolean java::util::ArrayList::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::ArrayList,"java/util/ArrayList")
J2CPP_DEFINE_METHOD(java::util::ArrayList,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::ArrayList,1,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::ArrayList,2,"<init>","(Ljava/util/Collection;)V")
J2CPP_DEFINE_METHOD(java::util::ArrayList,3,"add","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::ArrayList,4,"add","(ILjava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::ArrayList,5,"addAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::ArrayList,6,"addAll","(ILjava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::ArrayList,7,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::ArrayList,8,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::ArrayList,9,"ensureCapacity","(I)V")
J2CPP_DEFINE_METHOD(java::util::ArrayList,10,"get","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::ArrayList,11,"size","()I")
J2CPP_DEFINE_METHOD(java::util::ArrayList,12,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::ArrayList,13,"contains","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::ArrayList,14,"indexOf","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::ArrayList,15,"lastIndexOf","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::ArrayList,16,"remove","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::ArrayList,17,"remove","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::ArrayList,18,"removeRange","(II)V")
J2CPP_DEFINE_METHOD(java::util::ArrayList,19,"set","(ILjava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::ArrayList,20,"toArray","()[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::ArrayList,21,"toArray","([java.lang.Object)[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::ArrayList,22,"trimToSize","()V")
J2CPP_DEFINE_METHOD(java::util::ArrayList,23,"iterator","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(java::util::ArrayList,24,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::util::ArrayList,25,"equals","(Ljava/lang/Object;)Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ARRAYLIST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
