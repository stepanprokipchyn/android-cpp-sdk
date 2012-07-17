/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.accounts.AuthenticatorDescription
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_ACCOUNTS_AUTHENTICATORDESCRIPTION_HPP_DECL
#define J2CPP_ANDROID_ACCOUNTS_AUTHENTICATORDESCRIPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace accounts {

	class AuthenticatorDescription;
	class AuthenticatorDescription
		: public object<AuthenticatorDescription>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)

		explicit AuthenticatorDescription(jobject jobj)
		: object<AuthenticatorDescription>(jobj)
		, type(jobj)
		, labelId(jobj)
		, iconId(jobj)
		, smallIconId(jobj)
		, accountPreferencesId(jobj)
		, packageName(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		AuthenticatorDescription(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, jint, jint, jint, jint);
		static local_ref< android::accounts::AuthenticatorDescription > newKey(local_ref< java::lang::String >  const&);
		jint describeContents();
		jint hashCode();
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::String > toString();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > type;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > labelId;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > iconId;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > smallIconId;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > accountPreferencesId;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > packageName;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class AuthenticatorDescription

} //namespace accounts
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_ACCOUNTS_AUTHENTICATORDESCRIPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_ACCOUNTS_AUTHENTICATORDESCRIPTION_HPP_IMPL
#define J2CPP_ANDROID_ACCOUNTS_AUTHENTICATORDESCRIPTION_HPP_IMPL

namespace j2cpp {



android::accounts::AuthenticatorDescription::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::accounts::AuthenticatorDescription::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::accounts::AuthenticatorDescription::AuthenticatorDescription(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, jint a2, jint a3, jint a4, jint a5)
: object<android::accounts::AuthenticatorDescription>(
	call_new_object<
		android::accounts::AuthenticatorDescription::J2CPP_CLASS_NAME,
		android::accounts::AuthenticatorDescription::J2CPP_METHOD_NAME(0),
		android::accounts::AuthenticatorDescription::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2, a3, a4, a5)
)
, type(get_jobject())
, labelId(get_jobject())
, iconId(get_jobject())
, smallIconId(get_jobject())
, accountPreferencesId(get_jobject())
, packageName(get_jobject())
{
}


local_ref< android::accounts::AuthenticatorDescription > android::accounts::AuthenticatorDescription::newKey(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::accounts::AuthenticatorDescription::J2CPP_CLASS_NAME,
		android::accounts::AuthenticatorDescription::J2CPP_METHOD_NAME(1),
		android::accounts::AuthenticatorDescription::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::accounts::AuthenticatorDescription >
	>(a0);
}

jint android::accounts::AuthenticatorDescription::describeContents()
{
	return call_method<
		android::accounts::AuthenticatorDescription::J2CPP_CLASS_NAME,
		android::accounts::AuthenticatorDescription::J2CPP_METHOD_NAME(2),
		android::accounts::AuthenticatorDescription::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jint android::accounts::AuthenticatorDescription::hashCode()
{
	return call_method<
		android::accounts::AuthenticatorDescription::J2CPP_CLASS_NAME,
		android::accounts::AuthenticatorDescription::J2CPP_METHOD_NAME(3),
		android::accounts::AuthenticatorDescription::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

jboolean android::accounts::AuthenticatorDescription::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::accounts::AuthenticatorDescription::J2CPP_CLASS_NAME,
		android::accounts::AuthenticatorDescription::J2CPP_METHOD_NAME(4),
		android::accounts::AuthenticatorDescription::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::String > android::accounts::AuthenticatorDescription::toString()
{
	return call_method<
		android::accounts::AuthenticatorDescription::J2CPP_CLASS_NAME,
		android::accounts::AuthenticatorDescription::J2CPP_METHOD_NAME(5),
		android::accounts::AuthenticatorDescription::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void android::accounts::AuthenticatorDescription::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::accounts::AuthenticatorDescription::J2CPP_CLASS_NAME,
		android::accounts::AuthenticatorDescription::J2CPP_METHOD_NAME(6),
		android::accounts::AuthenticatorDescription::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1);
}



static_field<
	android::accounts::AuthenticatorDescription::J2CPP_CLASS_NAME,
	android::accounts::AuthenticatorDescription::J2CPP_FIELD_NAME(6),
	android::accounts::AuthenticatorDescription::J2CPP_FIELD_SIGNATURE(6),
	local_ref< android::os::Parcelable_::Creator >
> android::accounts::AuthenticatorDescription::CREATOR;


J2CPP_DEFINE_CLASS(android::accounts::AuthenticatorDescription,"android/accounts/AuthenticatorDescription")
J2CPP_DEFINE_METHOD(android::accounts::AuthenticatorDescription,0,"<init>","(Ljava/lang/String;Ljava/lang/String;IIII)V")
J2CPP_DEFINE_METHOD(android::accounts::AuthenticatorDescription,1,"newKey","(Ljava/lang/String;)Landroid/accounts/AuthenticatorDescription;")
J2CPP_DEFINE_METHOD(android::accounts::AuthenticatorDescription,2,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::accounts::AuthenticatorDescription,3,"hashCode","()I")
J2CPP_DEFINE_METHOD(android::accounts::AuthenticatorDescription,4,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::accounts::AuthenticatorDescription,5,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::accounts::AuthenticatorDescription,6,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::accounts::AuthenticatorDescription,7,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::accounts::AuthenticatorDescription,0,"type","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::accounts::AuthenticatorDescription,1,"labelId","I")
J2CPP_DEFINE_FIELD(android::accounts::AuthenticatorDescription,2,"iconId","I")
J2CPP_DEFINE_FIELD(android::accounts::AuthenticatorDescription,3,"smallIconId","I")
J2CPP_DEFINE_FIELD(android::accounts::AuthenticatorDescription,4,"accountPreferencesId","I")
J2CPP_DEFINE_FIELD(android::accounts::AuthenticatorDescription,5,"packageName","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::accounts::AuthenticatorDescription,6,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_ACCOUNTS_AUTHENTICATORDESCRIPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION