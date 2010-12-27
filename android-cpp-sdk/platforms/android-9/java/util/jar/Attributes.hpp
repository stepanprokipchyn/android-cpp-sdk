/*================================================================================
  code generated by: java2cpp
  class: java.util.jar.Attributes
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_JAR_ATTRIBUTES_HPP_DECL
#define J2CPP_JAVA_UTIL_JAR_ATTRIBUTES_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { namespace jar { namespace Attributes_ { class Name; } } } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <java/util/jar/Attributes.hpp>


namespace j2cpp {

namespace java { namespace util { namespace jar {

	class Attributes;
	namespace Attributes_ {

		class Name;
		class Name
			: public cpp_object<Name>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_METHOD(4)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)
			J2CPP_DECLARE_FIELD(5)
			J2CPP_DECLARE_FIELD(6)
			J2CPP_DECLARE_FIELD(7)
			J2CPP_DECLARE_FIELD(8)
			J2CPP_DECLARE_FIELD(9)
			J2CPP_DECLARE_FIELD(10)
			J2CPP_DECLARE_FIELD(11)
			J2CPP_DECLARE_FIELD(12)
			J2CPP_DECLARE_FIELD(13)
			J2CPP_DECLARE_FIELD(14)
			J2CPP_DECLARE_FIELD(15)
			J2CPP_DECLARE_FIELD(16)

			Name(jobject jobj)
			: cpp_object<Name>(jobj)
			{
			}

			local_ref< java::lang::String > toString();
			cpp_boolean equals(local_ref< java::lang::Object > const&);
			cpp_int hashCode();

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::util::jar::Attributes_::Name > > CLASS_PATH;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::util::jar::Attributes_::Name > > MANIFEST_VERSION;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::util::jar::Attributes_::Name > > MAIN_CLASS;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::util::jar::Attributes_::Name > > SIGNATURE_VERSION;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::util::jar::Attributes_::Name > > CONTENT_TYPE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::util::jar::Attributes_::Name > > SEALED;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::util::jar::Attributes_::Name > > IMPLEMENTATION_TITLE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::util::jar::Attributes_::Name > > IMPLEMENTATION_VERSION;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::util::jar::Attributes_::Name > > IMPLEMENTATION_VENDOR;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::util::jar::Attributes_::Name > > SPECIFICATION_TITLE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< java::util::jar::Attributes_::Name > > SPECIFICATION_VERSION;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), local_ref< java::util::jar::Attributes_::Name > > SPECIFICATION_VENDOR;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), local_ref< java::util::jar::Attributes_::Name > > EXTENSION_LIST;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), local_ref< java::util::jar::Attributes_::Name > > EXTENSION_NAME;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), local_ref< java::util::jar::Attributes_::Name > > EXTENSION_INSTALLATION;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), local_ref< java::util::jar::Attributes_::Name > > IMPLEMENTATION_VENDOR_ID;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), local_ref< java::util::jar::Attributes_::Name > > IMPLEMENTATION_URL;
		}; //class Name

	} //namespace Attributes_

	class Attributes
		: public cpp_object<Attributes>
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
		J2CPP_DECLARE_FIELD(0)

		typedef Attributes_::Name Name;

		Attributes(jobject jobj)
		: cpp_object<Attributes>(jobj)
		{
		}

		void clear();
		cpp_boolean containsKey(local_ref< java::lang::Object > const&);
		cpp_boolean containsValue(local_ref< java::lang::Object > const&);
		local_ref< java::util::Set > entrySet();
		local_ref< java::lang::Object > get(local_ref< java::lang::Object > const&);
		cpp_boolean isEmpty();
		local_ref< java::util::Set > keySet();
		local_ref< java::lang::Object > put(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		void putAll(local_ref< java::util::Map > const&);
		local_ref< java::lang::Object > remove(local_ref< java::lang::Object > const&);
		cpp_int size();
		local_ref< java::util::Collection > values();
		local_ref< java::lang::Object > clone();
		cpp_int hashCode();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		local_ref< java::lang::String > getValue(local_ref< java::util::jar::Attributes_::Name > const&);
		local_ref< java::lang::String > getValue(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > putValue(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);

	}; //class Attributes

} //namespace jar
} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_JAR_ATTRIBUTES_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_JAR_ATTRIBUTES_HPP_IMPL
#define J2CPP_JAVA_UTIL_JAR_ATTRIBUTES_HPP_IMPL

namespace j2cpp {



template <>
local_ref< java::util::jar::Attributes_::Name > create< java::util::jar::Attributes_::Name>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::util::jar::Attributes_::Name >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::jar::Attributes_::Name::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::jar::Attributes_::Name::J2CPP_CLASS_NAME, java::util::jar::Attributes_::Name::J2CPP_METHOD_NAME(0), java::util::jar::Attributes_::Name::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::jar::Attributes_::Name::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_boolean java::util::jar::Attributes_::Name::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::jar::Attributes_::Name::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}


static_field<
	java::util::jar::Attributes_::Name::J2CPP_CLASS_NAME,
	java::util::jar::Attributes_::Name::J2CPP_FIELD_NAME(0),
	java::util::jar::Attributes_::Name::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::util::jar::Attributes_::Name >
> java::util::jar::Attributes_::Name::CLASS_PATH;

static_field<
	java::util::jar::Attributes_::Name::J2CPP_CLASS_NAME,
	java::util::jar::Attributes_::Name::J2CPP_FIELD_NAME(1),
	java::util::jar::Attributes_::Name::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::util::jar::Attributes_::Name >
> java::util::jar::Attributes_::Name::MANIFEST_VERSION;

static_field<
	java::util::jar::Attributes_::Name::J2CPP_CLASS_NAME,
	java::util::jar::Attributes_::Name::J2CPP_FIELD_NAME(2),
	java::util::jar::Attributes_::Name::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::util::jar::Attributes_::Name >
> java::util::jar::Attributes_::Name::MAIN_CLASS;

static_field<
	java::util::jar::Attributes_::Name::J2CPP_CLASS_NAME,
	java::util::jar::Attributes_::Name::J2CPP_FIELD_NAME(3),
	java::util::jar::Attributes_::Name::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::util::jar::Attributes_::Name >
> java::util::jar::Attributes_::Name::SIGNATURE_VERSION;

static_field<
	java::util::jar::Attributes_::Name::J2CPP_CLASS_NAME,
	java::util::jar::Attributes_::Name::J2CPP_FIELD_NAME(4),
	java::util::jar::Attributes_::Name::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::util::jar::Attributes_::Name >
> java::util::jar::Attributes_::Name::CONTENT_TYPE;

static_field<
	java::util::jar::Attributes_::Name::J2CPP_CLASS_NAME,
	java::util::jar::Attributes_::Name::J2CPP_FIELD_NAME(5),
	java::util::jar::Attributes_::Name::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::util::jar::Attributes_::Name >
> java::util::jar::Attributes_::Name::SEALED;

static_field<
	java::util::jar::Attributes_::Name::J2CPP_CLASS_NAME,
	java::util::jar::Attributes_::Name::J2CPP_FIELD_NAME(6),
	java::util::jar::Attributes_::Name::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::util::jar::Attributes_::Name >
> java::util::jar::Attributes_::Name::IMPLEMENTATION_TITLE;

static_field<
	java::util::jar::Attributes_::Name::J2CPP_CLASS_NAME,
	java::util::jar::Attributes_::Name::J2CPP_FIELD_NAME(7),
	java::util::jar::Attributes_::Name::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::util::jar::Attributes_::Name >
> java::util::jar::Attributes_::Name::IMPLEMENTATION_VERSION;

static_field<
	java::util::jar::Attributes_::Name::J2CPP_CLASS_NAME,
	java::util::jar::Attributes_::Name::J2CPP_FIELD_NAME(8),
	java::util::jar::Attributes_::Name::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::util::jar::Attributes_::Name >
> java::util::jar::Attributes_::Name::IMPLEMENTATION_VENDOR;

static_field<
	java::util::jar::Attributes_::Name::J2CPP_CLASS_NAME,
	java::util::jar::Attributes_::Name::J2CPP_FIELD_NAME(9),
	java::util::jar::Attributes_::Name::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::util::jar::Attributes_::Name >
> java::util::jar::Attributes_::Name::SPECIFICATION_TITLE;

static_field<
	java::util::jar::Attributes_::Name::J2CPP_CLASS_NAME,
	java::util::jar::Attributes_::Name::J2CPP_FIELD_NAME(10),
	java::util::jar::Attributes_::Name::J2CPP_FIELD_SIGNATURE(10),
	local_ref< java::util::jar::Attributes_::Name >
> java::util::jar::Attributes_::Name::SPECIFICATION_VERSION;

static_field<
	java::util::jar::Attributes_::Name::J2CPP_CLASS_NAME,
	java::util::jar::Attributes_::Name::J2CPP_FIELD_NAME(11),
	java::util::jar::Attributes_::Name::J2CPP_FIELD_SIGNATURE(11),
	local_ref< java::util::jar::Attributes_::Name >
> java::util::jar::Attributes_::Name::SPECIFICATION_VENDOR;

static_field<
	java::util::jar::Attributes_::Name::J2CPP_CLASS_NAME,
	java::util::jar::Attributes_::Name::J2CPP_FIELD_NAME(12),
	java::util::jar::Attributes_::Name::J2CPP_FIELD_SIGNATURE(12),
	local_ref< java::util::jar::Attributes_::Name >
> java::util::jar::Attributes_::Name::EXTENSION_LIST;

static_field<
	java::util::jar::Attributes_::Name::J2CPP_CLASS_NAME,
	java::util::jar::Attributes_::Name::J2CPP_FIELD_NAME(13),
	java::util::jar::Attributes_::Name::J2CPP_FIELD_SIGNATURE(13),
	local_ref< java::util::jar::Attributes_::Name >
> java::util::jar::Attributes_::Name::EXTENSION_NAME;

static_field<
	java::util::jar::Attributes_::Name::J2CPP_CLASS_NAME,
	java::util::jar::Attributes_::Name::J2CPP_FIELD_NAME(14),
	java::util::jar::Attributes_::Name::J2CPP_FIELD_SIGNATURE(14),
	local_ref< java::util::jar::Attributes_::Name >
> java::util::jar::Attributes_::Name::EXTENSION_INSTALLATION;

static_field<
	java::util::jar::Attributes_::Name::J2CPP_CLASS_NAME,
	java::util::jar::Attributes_::Name::J2CPP_FIELD_NAME(15),
	java::util::jar::Attributes_::Name::J2CPP_FIELD_SIGNATURE(15),
	local_ref< java::util::jar::Attributes_::Name >
> java::util::jar::Attributes_::Name::IMPLEMENTATION_VENDOR_ID;

static_field<
	java::util::jar::Attributes_::Name::J2CPP_CLASS_NAME,
	java::util::jar::Attributes_::Name::J2CPP_FIELD_NAME(16),
	java::util::jar::Attributes_::Name::J2CPP_FIELD_SIGNATURE(16),
	local_ref< java::util::jar::Attributes_::Name >
> java::util::jar::Attributes_::Name::IMPLEMENTATION_URL;


J2CPP_DEFINE_CLASS(java::util::jar::Attributes_::Name,"java/util/jar/Attributes$Name")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes_::Name,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes_::Name,1,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes_::Name,2,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes_::Name,3,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes_::Name,4,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::util::jar::Attributes_::Name,0,"CLASS_PATH","Ljava/util/jar/Attributes$Name;")
J2CPP_DEFINE_FIELD(java::util::jar::Attributes_::Name,1,"MANIFEST_VERSION","Ljava/util/jar/Attributes$Name;")
J2CPP_DEFINE_FIELD(java::util::jar::Attributes_::Name,2,"MAIN_CLASS","Ljava/util/jar/Attributes$Name;")
J2CPP_DEFINE_FIELD(java::util::jar::Attributes_::Name,3,"SIGNATURE_VERSION","Ljava/util/jar/Attributes$Name;")
J2CPP_DEFINE_FIELD(java::util::jar::Attributes_::Name,4,"CONTENT_TYPE","Ljava/util/jar/Attributes$Name;")
J2CPP_DEFINE_FIELD(java::util::jar::Attributes_::Name,5,"SEALED","Ljava/util/jar/Attributes$Name;")
J2CPP_DEFINE_FIELD(java::util::jar::Attributes_::Name,6,"IMPLEMENTATION_TITLE","Ljava/util/jar/Attributes$Name;")
J2CPP_DEFINE_FIELD(java::util::jar::Attributes_::Name,7,"IMPLEMENTATION_VERSION","Ljava/util/jar/Attributes$Name;")
J2CPP_DEFINE_FIELD(java::util::jar::Attributes_::Name,8,"IMPLEMENTATION_VENDOR","Ljava/util/jar/Attributes$Name;")
J2CPP_DEFINE_FIELD(java::util::jar::Attributes_::Name,9,"SPECIFICATION_TITLE","Ljava/util/jar/Attributes$Name;")
J2CPP_DEFINE_FIELD(java::util::jar::Attributes_::Name,10,"SPECIFICATION_VERSION","Ljava/util/jar/Attributes$Name;")
J2CPP_DEFINE_FIELD(java::util::jar::Attributes_::Name,11,"SPECIFICATION_VENDOR","Ljava/util/jar/Attributes$Name;")
J2CPP_DEFINE_FIELD(java::util::jar::Attributes_::Name,12,"EXTENSION_LIST","Ljava/util/jar/Attributes$Name;")
J2CPP_DEFINE_FIELD(java::util::jar::Attributes_::Name,13,"EXTENSION_NAME","Ljava/util/jar/Attributes$Name;")
J2CPP_DEFINE_FIELD(java::util::jar::Attributes_::Name,14,"EXTENSION_INSTALLATION","Ljava/util/jar/Attributes$Name;")
J2CPP_DEFINE_FIELD(java::util::jar::Attributes_::Name,15,"IMPLEMENTATION_VENDOR_ID","Ljava/util/jar/Attributes$Name;")
J2CPP_DEFINE_FIELD(java::util::jar::Attributes_::Name,16,"IMPLEMENTATION_URL","Ljava/util/jar/Attributes$Name;")


template <>
local_ref< java::util::jar::Attributes > create< java::util::jar::Attributes>()
{
	return local_ref< java::util::jar::Attributes >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::jar::Attributes::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::jar::Attributes::J2CPP_CLASS_NAME, java::util::jar::Attributes::J2CPP_METHOD_NAME(0), java::util::jar::Attributes::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::util::jar::Attributes > create< java::util::jar::Attributes>(local_ref< java::util::jar::Attributes > const &a0)
{
	return local_ref< java::util::jar::Attributes >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::jar::Attributes::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::jar::Attributes::J2CPP_CLASS_NAME, java::util::jar::Attributes::J2CPP_METHOD_NAME(1), java::util::jar::Attributes::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::jar::Attributes > create< java::util::jar::Attributes>(cpp_int const &a0)
{
	return local_ref< java::util::jar::Attributes >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::jar::Attributes::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::jar::Attributes::J2CPP_CLASS_NAME, java::util::jar::Attributes::J2CPP_METHOD_NAME(2), java::util::jar::Attributes::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::jar::Attributes::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean java::util::jar::Attributes::containsKey(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::jar::Attributes::containsValue(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Set > java::util::jar::Attributes::entrySet()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::jar::Attributes::get(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::jar::Attributes::isEmpty()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< java::util::Set > java::util::jar::Attributes::keySet()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::jar::Attributes::put(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::util::jar::Attributes::putAll(local_ref< java::util::Map > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::jar::Attributes::remove(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::jar::Attributes::size()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

local_ref< java::util::Collection > java::util::jar::Attributes::values()
{
	return local_ref< java::util::Collection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::jar::Attributes::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

cpp_int java::util::jar::Attributes::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

cpp_boolean java::util::jar::Attributes::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::jar::Attributes::getValue(local_ref< java::util::jar::Attributes_::Name > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::jar::Attributes::getValue(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::jar::Attributes::putValue(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(java::util::jar::Attributes,"java/util/jar/Attributes")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,1,"<init>","(Ljava/util/jar/Attributes;)V")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,2,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,3,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,4,"containsKey","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,5,"containsValue","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,6,"entrySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,7,"get","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,8,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,9,"keySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,10,"put","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,11,"putAll","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,12,"remove","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,13,"size","()I")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,14,"values","()Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,15,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,16,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,17,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,18,"getValue","(Ljava/util/jar/Attributes$Name;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,19,"getValue","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::jar::Attributes,20,"putValue","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_FIELD(java::util::jar::Attributes,0,"map","Ljava/util/Map;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_JAR_ATTRIBUTES_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
