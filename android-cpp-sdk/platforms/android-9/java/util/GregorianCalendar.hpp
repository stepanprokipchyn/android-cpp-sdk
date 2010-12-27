/*================================================================================
  code generated by: java2cpp
  class: java.util.GregorianCalendar
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_GREGORIANCALENDAR_HPP_DECL
#define J2CPP_JAVA_UTIL_GREGORIANCALENDAR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }
namespace j2cpp { namespace java { namespace util { class TimeZone; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }


#include <java/lang/Object.hpp>
#include <java/util/Date.hpp>
#include <java/util/Locale.hpp>
#include <java/util/TimeZone.hpp>


namespace j2cpp {

namespace java { namespace util {

	class GregorianCalendar;
	class GregorianCalendar
		: public cpp_object<GregorianCalendar>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		GregorianCalendar(jobject jobj)
		: cpp_object<GregorianCalendar>(jobj)
		{
		}

		void add(cpp_int const&, cpp_int const&);
		local_ref< java::lang::Object > clone();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_int getActualMaximum(cpp_int const&);
		cpp_int getActualMinimum(cpp_int const&);
		cpp_int getGreatestMinimum(cpp_int const&);
		local_ref< java::util::Date > getGregorianChange();
		cpp_int getLeastMaximum(cpp_int const&);
		cpp_int getMaximum(cpp_int const&);
		cpp_int getMinimum(cpp_int const&);
		cpp_int hashCode();
		cpp_boolean isLeapYear(cpp_int const&);
		void roll(cpp_int const&, cpp_int const&);
		void roll(cpp_int const&, cpp_boolean const&);
		void setGregorianChange(local_ref< java::util::Date > const&);
		void setFirstDayOfWeek(cpp_int const&);
		void setMinimalDaysInFirstWeek(cpp_int const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > BC;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > AD;
	}; //class GregorianCalendar

} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_GREGORIANCALENDAR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_GREGORIANCALENDAR_HPP_IMPL
#define J2CPP_JAVA_UTIL_GREGORIANCALENDAR_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::GregorianCalendar > create< java::util::GregorianCalendar>()
{
	return local_ref< java::util::GregorianCalendar >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::GregorianCalendar::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::GregorianCalendar::J2CPP_CLASS_NAME, java::util::GregorianCalendar::J2CPP_METHOD_NAME(0), java::util::GregorianCalendar::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::util::GregorianCalendar > create< java::util::GregorianCalendar>(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::util::GregorianCalendar >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::GregorianCalendar::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::GregorianCalendar::J2CPP_CLASS_NAME, java::util::GregorianCalendar::J2CPP_METHOD_NAME(1), java::util::GregorianCalendar::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< java::util::GregorianCalendar > create< java::util::GregorianCalendar>(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3, cpp_int const &a4)
{
	return local_ref< java::util::GregorianCalendar >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::GregorianCalendar::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::GregorianCalendar::J2CPP_CLASS_NAME, java::util::GregorianCalendar::J2CPP_METHOD_NAME(2), java::util::GregorianCalendar::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

template <>
local_ref< java::util::GregorianCalendar > create< java::util::GregorianCalendar>(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3, cpp_int const &a4, cpp_int const &a5)
{
	return local_ref< java::util::GregorianCalendar >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::GregorianCalendar::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::GregorianCalendar::J2CPP_CLASS_NAME, java::util::GregorianCalendar::J2CPP_METHOD_NAME(3), java::util::GregorianCalendar::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}

template <>
local_ref< java::util::GregorianCalendar > create< java::util::GregorianCalendar>(local_ref< java::util::Locale > const &a0)
{
	return local_ref< java::util::GregorianCalendar >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::GregorianCalendar::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::GregorianCalendar::J2CPP_CLASS_NAME, java::util::GregorianCalendar::J2CPP_METHOD_NAME(4), java::util::GregorianCalendar::J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::GregorianCalendar > create< java::util::GregorianCalendar>(local_ref< java::util::TimeZone > const &a0)
{
	return local_ref< java::util::GregorianCalendar >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::GregorianCalendar::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::GregorianCalendar::J2CPP_CLASS_NAME, java::util::GregorianCalendar::J2CPP_METHOD_NAME(5), java::util::GregorianCalendar::J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::GregorianCalendar > create< java::util::GregorianCalendar>(local_ref< java::util::TimeZone > const &a0, local_ref< java::util::Locale > const &a1)
{
	return local_ref< java::util::GregorianCalendar >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::GregorianCalendar::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::GregorianCalendar::J2CPP_CLASS_NAME, java::util::GregorianCalendar::J2CPP_METHOD_NAME(6), java::util::GregorianCalendar::J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::util::GregorianCalendar::add(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::GregorianCalendar::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}



cpp_boolean java::util::GregorianCalendar::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::GregorianCalendar::getActualMaximum(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::GregorianCalendar::getActualMinimum(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::GregorianCalendar::getGreatestMinimum(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Date > java::util::GregorianCalendar::getGregorianChange()
{
	return local_ref< java::util::Date >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

cpp_int java::util::GregorianCalendar::getLeastMaximum(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::GregorianCalendar::getMaximum(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::GregorianCalendar::getMinimum(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::GregorianCalendar::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

cpp_boolean java::util::GregorianCalendar::isLeapYear(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::GregorianCalendar::roll(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::util::GregorianCalendar::roll(cpp_int const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::util::GregorianCalendar::setGregorianChange(local_ref< java::util::Date > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::GregorianCalendar::setFirstDayOfWeek(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::GregorianCalendar::setMinimalDaysInFirstWeek(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	java::util::GregorianCalendar::J2CPP_CLASS_NAME,
	java::util::GregorianCalendar::J2CPP_FIELD_NAME(0),
	java::util::GregorianCalendar::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> java::util::GregorianCalendar::BC;

static_field<
	java::util::GregorianCalendar::J2CPP_CLASS_NAME,
	java::util::GregorianCalendar::J2CPP_FIELD_NAME(1),
	java::util::GregorianCalendar::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> java::util::GregorianCalendar::AD;


J2CPP_DEFINE_CLASS(java::util::GregorianCalendar,"java/util/GregorianCalendar")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,1,"<init>","(III)V")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,2,"<init>","(IIIII)V")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,3,"<init>","(IIIIII)V")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,4,"<init>","(Ljava/util/Locale;)V")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,5,"<init>","(Ljava/util/TimeZone;)V")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,6,"<init>","(Ljava/util/TimeZone;Ljava/util/Locale;)V")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,7,"add","(II)V")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,8,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,9,"computeFields","()V")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,10,"computeTime","()V")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,11,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,12,"getActualMaximum","(I)I")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,13,"getActualMinimum","(I)I")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,14,"getGreatestMinimum","(I)I")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,15,"getGregorianChange","()Ljava/util/Date;")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,16,"getLeastMaximum","(I)I")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,17,"getMaximum","(I)I")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,18,"getMinimum","(I)I")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,19,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,20,"isLeapYear","(I)Z")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,21,"roll","(II)V")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,22,"roll","(IZ)V")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,23,"setGregorianChange","(Ljava/util/Date;)V")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,24,"setFirstDayOfWeek","(I)V")
J2CPP_DEFINE_METHOD(java::util::GregorianCalendar,25,"setMinimalDaysInFirstWeek","(I)V")
J2CPP_DEFINE_FIELD(java::util::GregorianCalendar,0,"BC","I")
J2CPP_DEFINE_FIELD(java::util::GregorianCalendar,1,"AD","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_GREGORIANCALENDAR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
