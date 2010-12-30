/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.text.CollationKey
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_COLLATIONKEY_HPP_DECL
#define J2CPP_JAVA_TEXT_COLLATIONKEY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Comparable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace text {

	class CollationKey;
	class CollationKey
		: public object<CollationKey>
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

		explicit CollationKey(jobject jobj)
		: object<CollationKey>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Comparable>() const;


		jint compareTo(local_ref< java::text::CollationKey >  const&);
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::String > getSourceString();
		jint hashCode();
		local_ref< array<jbyte,1> > toByteArray();
		jint compareTo(local_ref< java::lang::Object >  const&);
	}; //class CollationKey

} //namespace text
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_COLLATIONKEY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_COLLATIONKEY_HPP_IMPL
#define J2CPP_JAVA_TEXT_COLLATIONKEY_HPP_IMPL

namespace j2cpp {



java::text::CollationKey::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::text::CollationKey::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}


jint java::text::CollationKey::compareTo(local_ref< java::text::CollationKey > const &a0)
{
	return call_method<
		java::text::CollationKey::J2CPP_CLASS_NAME,
		java::text::CollationKey::J2CPP_METHOD_NAME(1),
		java::text::CollationKey::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject(), a0);
}

jboolean java::text::CollationKey::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::text::CollationKey::J2CPP_CLASS_NAME,
		java::text::CollationKey::J2CPP_METHOD_NAME(2),
		java::text::CollationKey::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::text::CollationKey::getSourceString()
{
	return call_method<
		java::text::CollationKey::J2CPP_CLASS_NAME,
		java::text::CollationKey::J2CPP_METHOD_NAME(3),
		java::text::CollationKey::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint java::text::CollationKey::hashCode()
{
	return call_method<
		java::text::CollationKey::J2CPP_CLASS_NAME,
		java::text::CollationKey::J2CPP_METHOD_NAME(4),
		java::text::CollationKey::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

local_ref< array<jbyte,1> > java::text::CollationKey::toByteArray()
{
	return call_method<
		java::text::CollationKey::J2CPP_CLASS_NAME,
		java::text::CollationKey::J2CPP_METHOD_NAME(5),
		java::text::CollationKey::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

jint java::text::CollationKey::compareTo(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::text::CollationKey::J2CPP_CLASS_NAME,
		java::text::CollationKey::J2CPP_METHOD_NAME(6),
		java::text::CollationKey::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::text::CollationKey,"java/text/CollationKey")
J2CPP_DEFINE_METHOD(java::text::CollationKey,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::text::CollationKey,1,"compareTo","(Ljava/text/CollationKey;)I")
J2CPP_DEFINE_METHOD(java::text::CollationKey,2,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::text::CollationKey,3,"getSourceString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::CollationKey,4,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::text::CollationKey,5,"toByteArray","()[B")
J2CPP_DEFINE_METHOD(java::text::CollationKey,6,"compareTo","(Ljava/lang/Object;)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_COLLATIONKEY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
