/*================================================================================
  code generated by: java2cpp
  class: android.location.Criteria
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_LOCATION_CRITERIA_HPP_DECL
#define J2CPP_ANDROID_LOCATION_CRITERIA_HPP_DECL


namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>


namespace j2cpp {

namespace android { namespace location {

	class Criteria;
	class Criteria
		: public cpp_object<Criteria>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)

		Criteria(jobject jobj)
		: cpp_object<Criteria>(jobj)
		{
		}

		void setAccuracy(cpp_int const&);
		cpp_int getAccuracy();
		void setPowerRequirement(cpp_int const&);
		cpp_int getPowerRequirement();
		void setCostAllowed(cpp_boolean const&);
		cpp_boolean isCostAllowed();
		void setAltitudeRequired(cpp_boolean const&);
		cpp_boolean isAltitudeRequired();
		void setSpeedRequired(cpp_boolean const&);
		cpp_boolean isSpeedRequired();
		void setBearingRequired(cpp_boolean const&);
		cpp_boolean isBearingRequired();
		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > NO_REQUIREMENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > POWER_LOW;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > POWER_MEDIUM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > POWER_HIGH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > ACCURACY_FINE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > ACCURACY_COARSE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class Criteria

} //namespace location
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_LOCATION_CRITERIA_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_LOCATION_CRITERIA_HPP_IMPL
#define J2CPP_ANDROID_LOCATION_CRITERIA_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::location::Criteria > create< android::location::Criteria>()
{
	return local_ref< android::location::Criteria >(
		environment::get().get_jenv()->NewObject(
			get_class<android::location::Criteria::J2CPP_CLASS_NAME>(),
			get_method_id<android::location::Criteria::J2CPP_CLASS_NAME, android::location::Criteria::J2CPP_METHOD_NAME(0), android::location::Criteria::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::location::Criteria > create< android::location::Criteria>(local_ref< android::location::Criteria > const &a0)
{
	return local_ref< android::location::Criteria >(
		environment::get().get_jenv()->NewObject(
			get_class<android::location::Criteria::J2CPP_CLASS_NAME>(),
			get_method_id<android::location::Criteria::J2CPP_CLASS_NAME, android::location::Criteria::J2CPP_METHOD_NAME(1), android::location::Criteria::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void android::location::Criteria::setAccuracy(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::location::Criteria::getAccuracy()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::location::Criteria::setPowerRequirement(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::location::Criteria::getPowerRequirement()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::location::Criteria::setCostAllowed(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::location::Criteria::isCostAllowed()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void android::location::Criteria::setAltitudeRequired(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::location::Criteria::isAltitudeRequired()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void android::location::Criteria::setSpeedRequired(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::location::Criteria::isSpeedRequired()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void android::location::Criteria::setBearingRequired(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::location::Criteria::isBearingRequired()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_int android::location::Criteria::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

void android::location::Criteria::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::location::Criteria::J2CPP_CLASS_NAME,
	android::location::Criteria::J2CPP_FIELD_NAME(0),
	android::location::Criteria::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::location::Criteria::NO_REQUIREMENT;

static_field<
	android::location::Criteria::J2CPP_CLASS_NAME,
	android::location::Criteria::J2CPP_FIELD_NAME(1),
	android::location::Criteria::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::location::Criteria::POWER_LOW;

static_field<
	android::location::Criteria::J2CPP_CLASS_NAME,
	android::location::Criteria::J2CPP_FIELD_NAME(2),
	android::location::Criteria::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::location::Criteria::POWER_MEDIUM;

static_field<
	android::location::Criteria::J2CPP_CLASS_NAME,
	android::location::Criteria::J2CPP_FIELD_NAME(3),
	android::location::Criteria::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::location::Criteria::POWER_HIGH;

static_field<
	android::location::Criteria::J2CPP_CLASS_NAME,
	android::location::Criteria::J2CPP_FIELD_NAME(4),
	android::location::Criteria::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> android::location::Criteria::ACCURACY_FINE;

static_field<
	android::location::Criteria::J2CPP_CLASS_NAME,
	android::location::Criteria::J2CPP_FIELD_NAME(5),
	android::location::Criteria::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::location::Criteria::ACCURACY_COARSE;

static_field<
	android::location::Criteria::J2CPP_CLASS_NAME,
	android::location::Criteria::J2CPP_FIELD_NAME(6),
	android::location::Criteria::J2CPP_FIELD_SIGNATURE(6),
	local_ref< android::os::Parcelable_::Creator >
> android::location::Criteria::CREATOR;


J2CPP_DEFINE_CLASS(android::location::Criteria,"android/location/Criteria")
J2CPP_DEFINE_METHOD(android::location::Criteria,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::location::Criteria,1,"<init>","(Landroid/location/Criteria;)V")
J2CPP_DEFINE_METHOD(android::location::Criteria,2,"setAccuracy","(I)V")
J2CPP_DEFINE_METHOD(android::location::Criteria,3,"getAccuracy","()I")
J2CPP_DEFINE_METHOD(android::location::Criteria,4,"setPowerRequirement","(I)V")
J2CPP_DEFINE_METHOD(android::location::Criteria,5,"getPowerRequirement","()I")
J2CPP_DEFINE_METHOD(android::location::Criteria,6,"setCostAllowed","(Z)V")
J2CPP_DEFINE_METHOD(android::location::Criteria,7,"isCostAllowed","()Z")
J2CPP_DEFINE_METHOD(android::location::Criteria,8,"setAltitudeRequired","(Z)V")
J2CPP_DEFINE_METHOD(android::location::Criteria,9,"isAltitudeRequired","()Z")
J2CPP_DEFINE_METHOD(android::location::Criteria,10,"setSpeedRequired","(Z)V")
J2CPP_DEFINE_METHOD(android::location::Criteria,11,"isSpeedRequired","()Z")
J2CPP_DEFINE_METHOD(android::location::Criteria,12,"setBearingRequired","(Z)V")
J2CPP_DEFINE_METHOD(android::location::Criteria,13,"isBearingRequired","()Z")
J2CPP_DEFINE_METHOD(android::location::Criteria,14,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::location::Criteria,15,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::location::Criteria,16,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::location::Criteria,0,"NO_REQUIREMENT","I")
J2CPP_DEFINE_FIELD(android::location::Criteria,1,"POWER_LOW","I")
J2CPP_DEFINE_FIELD(android::location::Criteria,2,"POWER_MEDIUM","I")
J2CPP_DEFINE_FIELD(android::location::Criteria,3,"POWER_HIGH","I")
J2CPP_DEFINE_FIELD(android::location::Criteria,4,"ACCURACY_FINE","I")
J2CPP_DEFINE_FIELD(android::location::Criteria,5,"ACCURACY_COARSE","I")
J2CPP_DEFINE_FIELD(android::location::Criteria,6,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_LOCATION_CRITERIA_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
