/*================================================================================
  code generated by: java2cpp
  class: java.sql.Timestamp
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_TIMESTAMP_HPP_DECL
#define J2CPP_JAVA_SQL_TIMESTAMP_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Date.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class Timestamp;
	class Timestamp
		: public cpp_object<Timestamp>
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

		Timestamp(jobject jobj)
		: cpp_object<Timestamp>(jobj)
		{
		}

		cpp_boolean after(local_ref< java::sql::Timestamp > const&);
		cpp_boolean before(local_ref< java::sql::Timestamp > const&);
		cpp_int compareTo(local_ref< java::util::Date > const&);
		cpp_int compareTo(local_ref< java::sql::Timestamp > const&);
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_boolean equals(local_ref< java::sql::Timestamp > const&);
		cpp_int getNanos();
		cpp_long getTime();
		void setNanos(cpp_int const&);
		void setTime(cpp_long const&);
		local_ref< java::lang::String > toString();
		static local_ref< java::sql::Timestamp > valueOf(local_ref< java::lang::String > const&);
		cpp_int compareTo(local_ref< java::lang::Object > const&);
	}; //class Timestamp

} //namespace sql
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_TIMESTAMP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_TIMESTAMP_HPP_IMPL
#define J2CPP_JAVA_SQL_TIMESTAMP_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::sql::Timestamp > create< java::sql::Timestamp>(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3, cpp_int const &a4, cpp_int const &a5, cpp_int const &a6)
{
	return local_ref< java::sql::Timestamp >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::Timestamp::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::Timestamp::J2CPP_CLASS_NAME, java::sql::Timestamp::J2CPP_METHOD_NAME(0), java::sql::Timestamp::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::Timestamp > create< java::sql::Timestamp>(cpp_long const &a0)
{
	return local_ref< java::sql::Timestamp >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::Timestamp::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::Timestamp::J2CPP_CLASS_NAME, java::sql::Timestamp::J2CPP_METHOD_NAME(1), java::sql::Timestamp::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::sql::Timestamp::after(local_ref< java::sql::Timestamp > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::sql::Timestamp::before(local_ref< java::sql::Timestamp > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::sql::Timestamp::compareTo(local_ref< java::util::Date > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::sql::Timestamp::compareTo(local_ref< java::sql::Timestamp > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::sql::Timestamp::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::sql::Timestamp::equals(local_ref< java::sql::Timestamp > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::sql::Timestamp::getNanos()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_long java::sql::Timestamp::getTime()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void java::sql::Timestamp::setNanos(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Timestamp::setTime(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::sql::Timestamp::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< java::sql::Timestamp > java::sql::Timestamp::valueOf(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::sql::Timestamp >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::sql::Timestamp::compareTo(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::sql::Timestamp,"java/sql/Timestamp")
J2CPP_DEFINE_METHOD(java::sql::Timestamp,0,"<init>","(IIIIIII)V")
J2CPP_DEFINE_METHOD(java::sql::Timestamp,1,"<init>","(J)V")
J2CPP_DEFINE_METHOD(java::sql::Timestamp,2,"after","(Ljava/sql/Timestamp;)Z")
J2CPP_DEFINE_METHOD(java::sql::Timestamp,3,"before","(Ljava/sql/Timestamp;)Z")
J2CPP_DEFINE_METHOD(java::sql::Timestamp,4,"compareTo","(Ljava/util/Date;)I")
J2CPP_DEFINE_METHOD(java::sql::Timestamp,5,"compareTo","(Ljava/sql/Timestamp;)I")
J2CPP_DEFINE_METHOD(java::sql::Timestamp,6,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::sql::Timestamp,7,"equals","(Ljava/sql/Timestamp;)Z")
J2CPP_DEFINE_METHOD(java::sql::Timestamp,8,"getNanos","()I")
J2CPP_DEFINE_METHOD(java::sql::Timestamp,9,"getTime","()J")
J2CPP_DEFINE_METHOD(java::sql::Timestamp,10,"setNanos","(I)V")
J2CPP_DEFINE_METHOD(java::sql::Timestamp,11,"setTime","(J)V")
J2CPP_DEFINE_METHOD(java::sql::Timestamp,12,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::sql::Timestamp,13,"valueOf","(Ljava/lang/String;)Ljava/sql/Timestamp;")
J2CPP_DEFINE_METHOD(java::sql::Timestamp,14,"compareTo","(Ljava/lang/Object;)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_TIMESTAMP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
