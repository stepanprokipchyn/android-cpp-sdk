/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.accounts.Account
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_ACCOUNTS_ACCOUNT_HPP_DECL
#define J2CPP_ANDROID_ACCOUNTS_ACCOUNT_HPP_DECL


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

	class Account;
	class Account
		: public object<Account>
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

		explicit Account(jobject jobj)
		: object<Account>(jobj)
		, name(jobj)
		, type(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		Account(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		Account(local_ref< android::os::Parcel > const&);
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		local_ref< java::lang::String > toString();

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > name;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > type;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class Account

} //namespace accounts
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_ACCOUNTS_ACCOUNT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_ACCOUNTS_ACCOUNT_HPP_IMPL
#define J2CPP_ANDROID_ACCOUNTS_ACCOUNT_HPP_IMPL

namespace j2cpp {



android::accounts::Account::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::accounts::Account::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::accounts::Account::Account(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<android::accounts::Account>(
	call_new_object<
		android::accounts::Account::J2CPP_CLASS_NAME,
		android::accounts::Account::J2CPP_METHOD_NAME(0),
		android::accounts::Account::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
, name(get_jobject())
, type(get_jobject())
{
}



android::accounts::Account::Account(local_ref< android::os::Parcel > const &a0)
: object<android::accounts::Account>(
	call_new_object<
		android::accounts::Account::J2CPP_CLASS_NAME,
		android::accounts::Account::J2CPP_METHOD_NAME(1),
		android::accounts::Account::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
, name(get_jobject())
, type(get_jobject())
{
}


jboolean android::accounts::Account::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::accounts::Account::J2CPP_CLASS_NAME,
		android::accounts::Account::J2CPP_METHOD_NAME(2),
		android::accounts::Account::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject(), a0);
}

jint android::accounts::Account::hashCode()
{
	return call_method<
		android::accounts::Account::J2CPP_CLASS_NAME,
		android::accounts::Account::J2CPP_METHOD_NAME(3),
		android::accounts::Account::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

jint android::accounts::Account::describeContents()
{
	return call_method<
		android::accounts::Account::J2CPP_CLASS_NAME,
		android::accounts::Account::J2CPP_METHOD_NAME(4),
		android::accounts::Account::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

void android::accounts::Account::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::accounts::Account::J2CPP_CLASS_NAME,
		android::accounts::Account::J2CPP_METHOD_NAME(5),
		android::accounts::Account::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::String > android::accounts::Account::toString()
{
	return call_method<
		android::accounts::Account::J2CPP_CLASS_NAME,
		android::accounts::Account::J2CPP_METHOD_NAME(6),
		android::accounts::Account::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(get_jobject());
}



static_field<
	android::accounts::Account::J2CPP_CLASS_NAME,
	android::accounts::Account::J2CPP_FIELD_NAME(2),
	android::accounts::Account::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::os::Parcelable_::Creator >
> android::accounts::Account::CREATOR;


J2CPP_DEFINE_CLASS(android::accounts::Account,"android/accounts/Account")
J2CPP_DEFINE_METHOD(android::accounts::Account,0,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::accounts::Account,1,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::accounts::Account,2,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::accounts::Account,3,"hashCode","()I")
J2CPP_DEFINE_METHOD(android::accounts::Account,4,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::accounts::Account,5,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::accounts::Account,6,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::accounts::Account,7,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::accounts::Account,0,"name","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::accounts::Account,1,"type","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::accounts::Account,2,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_ACCOUNTS_ACCOUNT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
