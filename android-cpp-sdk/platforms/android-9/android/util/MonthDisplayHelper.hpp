/*================================================================================
  code generated by: java2cpp
  class: android.util.MonthDisplayHelper
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_MONTHDISPLAYHELPER_HPP_DECL
#define J2CPP_ANDROID_UTIL_MONTHDISPLAYHELPER_HPP_DECL






namespace j2cpp {

namespace android { namespace util {

	class MonthDisplayHelper;
	class MonthDisplayHelper
		: public cpp_object<MonthDisplayHelper>
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

		MonthDisplayHelper(jobject jobj)
		: cpp_object<MonthDisplayHelper>(jobj)
		{
		}

		cpp_int getYear();
		cpp_int getMonth();
		cpp_int getWeekStartDay();
		cpp_int getFirstDayOfMonth();
		cpp_int getNumberOfDaysInMonth();
		cpp_int getOffset();
		local_ref< cpp_int_array<1> > getDigitsForRow(cpp_int const&);
		cpp_int getDayAt(cpp_int const&, cpp_int const&);
		cpp_int getRowOf(cpp_int const&);
		cpp_int getColumnOf(cpp_int const&);
		void previousMonth();
		void nextMonth();
		cpp_boolean isWithinCurrentMonth(cpp_int const&, cpp_int const&);
	}; //class MonthDisplayHelper

} //namespace util
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_MONTHDISPLAYHELPER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_MONTHDISPLAYHELPER_HPP_IMPL
#define J2CPP_ANDROID_UTIL_MONTHDISPLAYHELPER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::util::MonthDisplayHelper > create< android::util::MonthDisplayHelper>(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< android::util::MonthDisplayHelper >(
		environment::get().get_jenv()->NewObject(
			get_class<android::util::MonthDisplayHelper::J2CPP_CLASS_NAME>(),
			get_method_id<android::util::MonthDisplayHelper::J2CPP_CLASS_NAME, android::util::MonthDisplayHelper::J2CPP_METHOD_NAME(0), android::util::MonthDisplayHelper::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< android::util::MonthDisplayHelper > create< android::util::MonthDisplayHelper>(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< android::util::MonthDisplayHelper >(
		environment::get().get_jenv()->NewObject(
			get_class<android::util::MonthDisplayHelper::J2CPP_CLASS_NAME>(),
			get_method_id<android::util::MonthDisplayHelper::J2CPP_CLASS_NAME, android::util::MonthDisplayHelper::J2CPP_METHOD_NAME(1), android::util::MonthDisplayHelper::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::util::MonthDisplayHelper::getYear()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int android::util::MonthDisplayHelper::getMonth()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int android::util::MonthDisplayHelper::getWeekStartDay()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int android::util::MonthDisplayHelper::getFirstDayOfMonth()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int android::util::MonthDisplayHelper::getNumberOfDaysInMonth()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_int android::util::MonthDisplayHelper::getOffset()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< cpp_int_array<1> > android::util::MonthDisplayHelper::getDigitsForRow(cpp_int const &a0)
{
	return local_ref< cpp_int_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::util::MonthDisplayHelper::getDayAt(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::util::MonthDisplayHelper::getRowOf(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::util::MonthDisplayHelper::getColumnOf(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

void android::util::MonthDisplayHelper::previousMonth()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

void android::util::MonthDisplayHelper::nextMonth()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_boolean android::util::MonthDisplayHelper::isWithinCurrentMonth(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::util::MonthDisplayHelper,"android/util/MonthDisplayHelper")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,0,"<init>","(III)V")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,1,"<init>","(II)V")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,2,"getYear","()I")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,3,"getMonth","()I")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,4,"getWeekStartDay","()I")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,5,"getFirstDayOfMonth","()I")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,6,"getNumberOfDaysInMonth","()I")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,7,"getOffset","()I")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,8,"getDigitsForRow","(I)[I")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,9,"getDayAt","(II)I")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,10,"getRowOf","(I)I")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,11,"getColumnOf","(I)I")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,12,"previousMonth","()V")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,13,"nextMonth","()V")
J2CPP_DEFINE_METHOD(android::util::MonthDisplayHelper,14,"isWithinCurrentMonth","(II)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_MONTHDISPLAYHELPER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
