/*================================================================================
  code generated by: java2cpp
  class: android.os.DropBoxManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_DROPBOXMANAGER_HPP_DECL
#define J2CPP_ANDROID_OS_DROPBOXMANAGER_HPP_DECL


namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { namespace DropBoxManager_ { class Entry; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class ParcelFileDescriptor; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }


#include <android/os/DropBoxManager.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/ParcelFileDescriptor.hpp>
#include <android/os/Parcelable.hpp>
#include <java/io/File.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace os {

	class DropBoxManager;
	namespace DropBoxManager_ {

		class Entry;
		class Entry
			: public cpp_object<Entry>
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
			J2CPP_DECLARE_FIELD(0)

			Entry(jobject jobj)
			: cpp_object<Entry>(jobj)
			{
			}

			void close();
			local_ref< java::lang::String > getTag();
			cpp_long getTimeMillis();
			cpp_int getFlags();
			local_ref< java::lang::String > getText(cpp_int const&);
			local_ref< java::io::InputStream > getInputStream();
			cpp_int describeContents();
			void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
		}; //class Entry

	} //namespace DropBoxManager_

	class DropBoxManager
		: public cpp_object<DropBoxManager>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		typedef DropBoxManager_::Entry Entry;

		DropBoxManager(jobject jobj)
		: cpp_object<DropBoxManager>(jobj)
		{
		}

		void addText(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		void addData(local_ref< java::lang::String > const&, local_ref< cpp_byte_array<1> > const&, cpp_int const&);
		void addFile(local_ref< java::lang::String > const&, local_ref< java::io::File > const&, cpp_int const&);
		cpp_boolean isTagEnabled(local_ref< java::lang::String > const&);
		local_ref< android::os::DropBoxManager_::Entry > getNextEntry(local_ref< java::lang::String > const&, cpp_long const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > IS_EMPTY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > IS_TEXT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > IS_GZIPPED;
	}; //class DropBoxManager

} //namespace os
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_DROPBOXMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_DROPBOXMANAGER_HPP_IMPL
#define J2CPP_ANDROID_OS_DROPBOXMANAGER_HPP_IMPL

namespace j2cpp {



template <>
local_ref< android::os::DropBoxManager_::Entry > create< android::os::DropBoxManager_::Entry>(local_ref< java::lang::String > const &a0, cpp_long const &a1)
{
	return local_ref< android::os::DropBoxManager_::Entry >(
		environment::get().get_jenv()->NewObject(
			get_class<android::os::DropBoxManager_::Entry::J2CPP_CLASS_NAME>(),
			get_method_id<android::os::DropBoxManager_::Entry::J2CPP_CLASS_NAME, android::os::DropBoxManager_::Entry::J2CPP_METHOD_NAME(0), android::os::DropBoxManager_::Entry::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::os::DropBoxManager_::Entry > create< android::os::DropBoxManager_::Entry>(local_ref< java::lang::String > const &a0, cpp_long const &a1, local_ref< java::lang::String > const &a2)
{
	return local_ref< android::os::DropBoxManager_::Entry >(
		environment::get().get_jenv()->NewObject(
			get_class<android::os::DropBoxManager_::Entry::J2CPP_CLASS_NAME>(),
			get_method_id<android::os::DropBoxManager_::Entry::J2CPP_CLASS_NAME, android::os::DropBoxManager_::Entry::J2CPP_METHOD_NAME(1), android::os::DropBoxManager_::Entry::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< android::os::DropBoxManager_::Entry > create< android::os::DropBoxManager_::Entry>(local_ref< java::lang::String > const &a0, cpp_long const &a1, local_ref< cpp_byte_array<1> > const &a2, cpp_int const &a3)
{
	return local_ref< android::os::DropBoxManager_::Entry >(
		environment::get().get_jenv()->NewObject(
			get_class<android::os::DropBoxManager_::Entry::J2CPP_CLASS_NAME>(),
			get_method_id<android::os::DropBoxManager_::Entry::J2CPP_CLASS_NAME, android::os::DropBoxManager_::Entry::J2CPP_METHOD_NAME(2), android::os::DropBoxManager_::Entry::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

template <>
local_ref< android::os::DropBoxManager_::Entry > create< android::os::DropBoxManager_::Entry>(local_ref< java::lang::String > const &a0, cpp_long const &a1, local_ref< android::os::ParcelFileDescriptor > const &a2, cpp_int const &a3)
{
	return local_ref< android::os::DropBoxManager_::Entry >(
		environment::get().get_jenv()->NewObject(
			get_class<android::os::DropBoxManager_::Entry::J2CPP_CLASS_NAME>(),
			get_method_id<android::os::DropBoxManager_::Entry::J2CPP_CLASS_NAME, android::os::DropBoxManager_::Entry::J2CPP_METHOD_NAME(3), android::os::DropBoxManager_::Entry::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

template <>
local_ref< android::os::DropBoxManager_::Entry > create< android::os::DropBoxManager_::Entry>(local_ref< java::lang::String > const &a0, cpp_long const &a1, local_ref< java::io::File > const &a2, cpp_int const &a3)
{
	return local_ref< android::os::DropBoxManager_::Entry >(
		environment::get().get_jenv()->NewObject(
			get_class<android::os::DropBoxManager_::Entry::J2CPP_CLASS_NAME>(),
			get_method_id<android::os::DropBoxManager_::Entry::J2CPP_CLASS_NAME, android::os::DropBoxManager_::Entry::J2CPP_METHOD_NAME(4), android::os::DropBoxManager_::Entry::J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::os::DropBoxManager_::Entry::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::String > android::os::DropBoxManager_::Entry::getTag()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_long android::os::DropBoxManager_::Entry::getTimeMillis()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_int android::os::DropBoxManager_::Entry::getFlags()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< java::lang::String > android::os::DropBoxManager_::Entry::getText(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::io::InputStream > android::os::DropBoxManager_::Entry::getInputStream()
{
	return local_ref< java::io::InputStream >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_int android::os::DropBoxManager_::Entry::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void android::os::DropBoxManager_::Entry::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::os::DropBoxManager_::Entry::J2CPP_CLASS_NAME,
	android::os::DropBoxManager_::Entry::J2CPP_FIELD_NAME(0),
	android::os::DropBoxManager_::Entry::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::os::DropBoxManager_::Entry::CREATOR;


J2CPP_DEFINE_CLASS(android::os::DropBoxManager_::Entry,"android/os/DropBoxManager$Entry")
J2CPP_DEFINE_METHOD(android::os::DropBoxManager_::Entry,0,"<init>","(Ljava/lang/String;J)V")
J2CPP_DEFINE_METHOD(android::os::DropBoxManager_::Entry,1,"<init>","(Ljava/lang/String;JLjava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::os::DropBoxManager_::Entry,2,"<init>","(Ljava/lang/String;J[BI)V")
J2CPP_DEFINE_METHOD(android::os::DropBoxManager_::Entry,3,"<init>","(Ljava/lang/String;JLandroid/os/ParcelFileDescriptor;I)V")
J2CPP_DEFINE_METHOD(android::os::DropBoxManager_::Entry,4,"<init>","(Ljava/lang/String;JLjava/io/File;I)V")
J2CPP_DEFINE_METHOD(android::os::DropBoxManager_::Entry,5,"close","()V")
J2CPP_DEFINE_METHOD(android::os::DropBoxManager_::Entry,6,"getTag","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::os::DropBoxManager_::Entry,7,"getTimeMillis","()J")
J2CPP_DEFINE_METHOD(android::os::DropBoxManager_::Entry,8,"getFlags","()I")
J2CPP_DEFINE_METHOD(android::os::DropBoxManager_::Entry,9,"getText","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::os::DropBoxManager_::Entry,10,"getInputStream","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(android::os::DropBoxManager_::Entry,11,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::os::DropBoxManager_::Entry,12,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::os::DropBoxManager_::Entry,13,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::os::DropBoxManager_::Entry,0,"CREATOR","Landroid/os/Parcelable$Creator;")


template <>
local_ref< android::os::DropBoxManager > create< android::os::DropBoxManager>()
{
	return local_ref< android::os::DropBoxManager >(
		environment::get().get_jenv()->NewObject(
			get_class<android::os::DropBoxManager::J2CPP_CLASS_NAME>(),
			get_method_id<android::os::DropBoxManager::J2CPP_CLASS_NAME, android::os::DropBoxManager::J2CPP_METHOD_NAME(0), android::os::DropBoxManager::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::os::DropBoxManager::addText(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::os::DropBoxManager::addData(local_ref< java::lang::String > const &a0, local_ref< cpp_byte_array<1> > const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::os::DropBoxManager::addFile(local_ref< java::lang::String > const &a0, local_ref< java::io::File > const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean android::os::DropBoxManager::isTagEnabled(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::os::DropBoxManager_::Entry > android::os::DropBoxManager::getNextEntry(local_ref< java::lang::String > const &a0, cpp_long const &a1)
{
	return local_ref< android::os::DropBoxManager_::Entry >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::os::DropBoxManager::J2CPP_CLASS_NAME,
	android::os::DropBoxManager::J2CPP_FIELD_NAME(0),
	android::os::DropBoxManager::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::os::DropBoxManager::IS_EMPTY;

static_field<
	android::os::DropBoxManager::J2CPP_CLASS_NAME,
	android::os::DropBoxManager::J2CPP_FIELD_NAME(1),
	android::os::DropBoxManager::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::os::DropBoxManager::IS_TEXT;

static_field<
	android::os::DropBoxManager::J2CPP_CLASS_NAME,
	android::os::DropBoxManager::J2CPP_FIELD_NAME(2),
	android::os::DropBoxManager::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::os::DropBoxManager::IS_GZIPPED;


J2CPP_DEFINE_CLASS(android::os::DropBoxManager,"android/os/DropBoxManager")
J2CPP_DEFINE_METHOD(android::os::DropBoxManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::os::DropBoxManager,1,"addText","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::os::DropBoxManager,2,"addData","(Ljava/lang/String;[BI)V")
J2CPP_DEFINE_METHOD(android::os::DropBoxManager,3,"addFile","(Ljava/lang/String;Ljava/io/File;I)V")
J2CPP_DEFINE_METHOD(android::os::DropBoxManager,4,"isTagEnabled","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::os::DropBoxManager,5,"getNextEntry","(Ljava/lang/String;J)Landroid/os/DropBoxManager$Entry;")
J2CPP_DEFINE_FIELD(android::os::DropBoxManager,0,"IS_EMPTY","I")
J2CPP_DEFINE_FIELD(android::os::DropBoxManager,1,"IS_TEXT","I")
J2CPP_DEFINE_FIELD(android::os::DropBoxManager,2,"IS_GZIPPED","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_DROPBOXMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
