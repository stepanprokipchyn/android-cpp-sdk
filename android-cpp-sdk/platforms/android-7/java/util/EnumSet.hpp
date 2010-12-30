/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.EnumSet
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ENUMSET_HPP_DECL
#define J2CPP_JAVA_UTIL_ENUMSET_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace util { class AbstractSet; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/util/AbstractSet.hpp>
#include <java/util/Collection.hpp>


namespace j2cpp {

namespace java { namespace util {

	class EnumSet;
	class EnumSet
		: public object<EnumSet>
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

		explicit EnumSet(jobject jobj)
		: object<EnumSet>(jobj)
		{
		}

		operator local_ref<java::util::AbstractSet>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::io::Serializable>() const;


		static local_ref< java::util::EnumSet > noneOf(local_ref< java::lang::Class >  const&);
		static local_ref< java::util::EnumSet > allOf(local_ref< java::lang::Class >  const&);
		static local_ref< java::util::EnumSet > copyOf(local_ref< java::util::EnumSet >  const&);
		static local_ref< java::util::EnumSet > copyOf(local_ref< java::util::Collection >  const&);
		static local_ref< java::util::EnumSet > complementOf(local_ref< java::util::EnumSet >  const&);
		static local_ref< java::util::EnumSet > of(local_ref< java::lang::Enum >  const&);
		static local_ref< java::util::EnumSet > of(local_ref< java::lang::Enum >  const&, local_ref< java::lang::Enum >  const&);
		static local_ref< java::util::EnumSet > of(local_ref< java::lang::Enum >  const&, local_ref< java::lang::Enum >  const&, local_ref< java::lang::Enum >  const&);
		static local_ref< java::util::EnumSet > of(local_ref< java::lang::Enum >  const&, local_ref< java::lang::Enum >  const&, local_ref< java::lang::Enum >  const&, local_ref< java::lang::Enum >  const&);
		static local_ref< java::util::EnumSet > of(local_ref< java::lang::Enum >  const&, local_ref< java::lang::Enum >  const&, local_ref< java::lang::Enum >  const&, local_ref< java::lang::Enum >  const&, local_ref< java::lang::Enum >  const&);
		static local_ref< java::util::EnumSet > of(local_ref< java::lang::Enum >  const&, local_ref< array< local_ref< java::lang::Enum >, 1> >  const&);
		static local_ref< java::util::EnumSet > range(local_ref< java::lang::Enum >  const&, local_ref< java::lang::Enum >  const&);
		local_ref< java::util::EnumSet > clone();
		local_ref< java::lang::Object > clone_1();
	}; //class EnumSet

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ENUMSET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ENUMSET_HPP_IMPL
#define J2CPP_JAVA_UTIL_ENUMSET_HPP_IMPL

namespace j2cpp {



java::util::EnumSet::operator local_ref<java::util::AbstractSet>() const
{
	return local_ref<java::util::AbstractSet>(get_jobject());
}

java::util::EnumSet::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::util::EnumSet::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


local_ref< java::util::EnumSet > java::util::EnumSet::noneOf(local_ref< java::lang::Class > const &a0)
{
	return call_static_method<
		java::util::EnumSet::J2CPP_CLASS_NAME,
		java::util::EnumSet::J2CPP_METHOD_NAME(1),
		java::util::EnumSet::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::EnumSet > >
	(a0);
}

local_ref< java::util::EnumSet > java::util::EnumSet::allOf(local_ref< java::lang::Class > const &a0)
{
	return call_static_method<
		java::util::EnumSet::J2CPP_CLASS_NAME,
		java::util::EnumSet::J2CPP_METHOD_NAME(2),
		java::util::EnumSet::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::EnumSet > >
	(a0);
}

local_ref< java::util::EnumSet > java::util::EnumSet::copyOf(local_ref< java::util::EnumSet > const &a0)
{
	return call_static_method<
		java::util::EnumSet::J2CPP_CLASS_NAME,
		java::util::EnumSet::J2CPP_METHOD_NAME(3),
		java::util::EnumSet::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::EnumSet > >
	(a0);
}

local_ref< java::util::EnumSet > java::util::EnumSet::copyOf(local_ref< java::util::Collection > const &a0)
{
	return call_static_method<
		java::util::EnumSet::J2CPP_CLASS_NAME,
		java::util::EnumSet::J2CPP_METHOD_NAME(4),
		java::util::EnumSet::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::EnumSet > >
	(a0);
}

local_ref< java::util::EnumSet > java::util::EnumSet::complementOf(local_ref< java::util::EnumSet > const &a0)
{
	return call_static_method<
		java::util::EnumSet::J2CPP_CLASS_NAME,
		java::util::EnumSet::J2CPP_METHOD_NAME(5),
		java::util::EnumSet::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::util::EnumSet > >
	(a0);
}

local_ref< java::util::EnumSet > java::util::EnumSet::of(local_ref< java::lang::Enum > const &a0)
{
	return call_static_method<
		java::util::EnumSet::J2CPP_CLASS_NAME,
		java::util::EnumSet::J2CPP_METHOD_NAME(6),
		java::util::EnumSet::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::util::EnumSet > >
	(a0);
}

local_ref< java::util::EnumSet > java::util::EnumSet::of(local_ref< java::lang::Enum > const &a0, local_ref< java::lang::Enum > const &a1)
{
	return call_static_method<
		java::util::EnumSet::J2CPP_CLASS_NAME,
		java::util::EnumSet::J2CPP_METHOD_NAME(7),
		java::util::EnumSet::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::util::EnumSet > >
	(a0, a1);
}

local_ref< java::util::EnumSet > java::util::EnumSet::of(local_ref< java::lang::Enum > const &a0, local_ref< java::lang::Enum > const &a1, local_ref< java::lang::Enum > const &a2)
{
	return call_static_method<
		java::util::EnumSet::J2CPP_CLASS_NAME,
		java::util::EnumSet::J2CPP_METHOD_NAME(8),
		java::util::EnumSet::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::util::EnumSet > >
	(a0, a1, a2);
}

local_ref< java::util::EnumSet > java::util::EnumSet::of(local_ref< java::lang::Enum > const &a0, local_ref< java::lang::Enum > const &a1, local_ref< java::lang::Enum > const &a2, local_ref< java::lang::Enum > const &a3)
{
	return call_static_method<
		java::util::EnumSet::J2CPP_CLASS_NAME,
		java::util::EnumSet::J2CPP_METHOD_NAME(9),
		java::util::EnumSet::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::util::EnumSet > >
	(a0, a1, a2, a3);
}

local_ref< java::util::EnumSet > java::util::EnumSet::of(local_ref< java::lang::Enum > const &a0, local_ref< java::lang::Enum > const &a1, local_ref< java::lang::Enum > const &a2, local_ref< java::lang::Enum > const &a3, local_ref< java::lang::Enum > const &a4)
{
	return call_static_method<
		java::util::EnumSet::J2CPP_CLASS_NAME,
		java::util::EnumSet::J2CPP_METHOD_NAME(10),
		java::util::EnumSet::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::util::EnumSet > >
	(a0, a1, a2, a3, a4);
}

local_ref< java::util::EnumSet > java::util::EnumSet::of(local_ref< java::lang::Enum > const &a0, local_ref< array< local_ref< java::lang::Enum >, 1> > const &a1)
{
	return call_static_method<
		java::util::EnumSet::J2CPP_CLASS_NAME,
		java::util::EnumSet::J2CPP_METHOD_NAME(11),
		java::util::EnumSet::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::util::EnumSet > >
	(a0, a1);
}

local_ref< java::util::EnumSet > java::util::EnumSet::range(local_ref< java::lang::Enum > const &a0, local_ref< java::lang::Enum > const &a1)
{
	return call_static_method<
		java::util::EnumSet::J2CPP_CLASS_NAME,
		java::util::EnumSet::J2CPP_METHOD_NAME(12),
		java::util::EnumSet::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::util::EnumSet > >
	(a0, a1);
}

local_ref< java::util::EnumSet > java::util::EnumSet::clone()
{
	return call_method<
		java::util::EnumSet::J2CPP_CLASS_NAME,
		java::util::EnumSet::J2CPP_METHOD_NAME(13),
		java::util::EnumSet::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::util::EnumSet > >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::EnumSet::clone_1()
{
	return call_method<
		java::util::EnumSet::J2CPP_CLASS_NAME,
		java::util::EnumSet::J2CPP_METHOD_NAME(14),
		java::util::EnumSet::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::Object > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::EnumSet,"java/util/EnumSet")
J2CPP_DEFINE_METHOD(java::util::EnumSet,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::EnumSet,1,"noneOf","(Ljava/lang/Class;)Ljava/util/EnumSet;")
J2CPP_DEFINE_METHOD(java::util::EnumSet,2,"allOf","(Ljava/lang/Class;)Ljava/util/EnumSet;")
J2CPP_DEFINE_METHOD(java::util::EnumSet,3,"copyOf","(Ljava/util/EnumSet;)Ljava/util/EnumSet;")
J2CPP_DEFINE_METHOD(java::util::EnumSet,4,"copyOf","(Ljava/util/Collection;)Ljava/util/EnumSet;")
J2CPP_DEFINE_METHOD(java::util::EnumSet,5,"complementOf","(Ljava/util/EnumSet;)Ljava/util/EnumSet;")
J2CPP_DEFINE_METHOD(java::util::EnumSet,6,"of","(Ljava/lang/Enum;)Ljava/util/EnumSet;")
J2CPP_DEFINE_METHOD(java::util::EnumSet,7,"of","(Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;")
J2CPP_DEFINE_METHOD(java::util::EnumSet,8,"of","(Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;")
J2CPP_DEFINE_METHOD(java::util::EnumSet,9,"of","(Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;")
J2CPP_DEFINE_METHOD(java::util::EnumSet,10,"of","(Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;")
J2CPP_DEFINE_METHOD(java::util::EnumSet,11,"of","(Ljava/lang/Enum;[java.lang.Enum)Ljava/util/EnumSet;")
J2CPP_DEFINE_METHOD(java::util::EnumSet,12,"range","(Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;")
J2CPP_DEFINE_METHOD(java::util::EnumSet,13,"clone","()Ljava/util/EnumSet;")
J2CPP_DEFINE_METHOD(java::util::EnumSet,14,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ENUMSET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
