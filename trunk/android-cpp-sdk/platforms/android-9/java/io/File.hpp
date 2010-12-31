/*================================================================================
  code generated by: java2cpp
  class: java.io.File
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILE_HPP_DECL
#define J2CPP_JAVA_IO_FILE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace net { class URL; } } }
namespace j2cpp { namespace java { namespace net { class URI; } } }
namespace j2cpp { namespace java { namespace io { class FileFilter; } } }
namespace j2cpp { namespace java { namespace io { class FilenameFilter; } } }


#include <java/io/FileFilter.hpp>
#include <java/io/FilenameFilter.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/URI.hpp>
#include <java/net/URL.hpp>


namespace j2cpp {

namespace java { namespace io {

	class File;
	class File
		: public cpp_object<File>
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
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_METHOD(48)
		J2CPP_DECLARE_METHOD(49)
		J2CPP_DECLARE_METHOD(50)
		J2CPP_DECLARE_METHOD(51)
		J2CPP_DECLARE_METHOD(52)
		J2CPP_DECLARE_METHOD(53)
		J2CPP_DECLARE_METHOD(54)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		File(jobject jobj)
		: cpp_object<File>(jobj)
		{
		}

		static local_ref< cpp_object_array<java::io::File, 1> > listRoots();
		cpp_boolean canExecute();
		cpp_boolean canRead();
		cpp_boolean canWrite();
		cpp_int compareTo(local_ref< java::io::File > const&);
		cpp_boolean deleteThe();
		void deleteOnExit();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_boolean exists();
		local_ref< java::lang::String > getAbsolutePath();
		local_ref< java::io::File > getAbsoluteFile();
		local_ref< java::lang::String > getCanonicalPath();
		local_ref< java::io::File > getCanonicalFile();
		local_ref< java::lang::String > getName();
		local_ref< java::lang::String > getParent();
		local_ref< java::io::File > getParentFile();
		local_ref< java::lang::String > getPath();
		cpp_int hashCode();
		cpp_boolean isAbsolute();
		cpp_boolean isDirectory();
		cpp_boolean isFile();
		cpp_boolean isHidden();
		cpp_long lastModified();
		cpp_boolean setLastModified(cpp_long const&);
		cpp_boolean setReadOnly();
		cpp_boolean setExecutable(cpp_boolean const&, cpp_boolean const&);
		cpp_boolean setExecutable(cpp_boolean const&);
		cpp_boolean setReadable(cpp_boolean const&, cpp_boolean const&);
		cpp_boolean setReadable(cpp_boolean const&);
		cpp_boolean setWritable(cpp_boolean const&, cpp_boolean const&);
		cpp_boolean setWritable(cpp_boolean const&);
		cpp_long length();
		local_ref< cpp_object_array<java::lang::String, 1> > list();
		local_ref< cpp_object_array<java::lang::String, 1> > list(local_ref< java::io::FilenameFilter > const&);
		local_ref< cpp_object_array<java::io::File, 1> > listFiles();
		local_ref< cpp_object_array<java::io::File, 1> > listFiles(local_ref< java::io::FilenameFilter > const&);
		local_ref< cpp_object_array<java::io::File, 1> > listFiles(local_ref< java::io::FileFilter > const&);
		cpp_boolean mkdir();
		cpp_boolean mkdirs();
		cpp_boolean createNewFile();
		static local_ref< java::io::File > createTempFile(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		static local_ref< java::io::File > createTempFile(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::io::File > const&);
		cpp_boolean renameTo(local_ref< java::io::File > const&);
		local_ref< java::lang::String > toString();
		local_ref< java::net::URI > toURI();
		local_ref< java::net::URL > toURL();
		cpp_long getTotalSpace();
		cpp_long getUsableSpace();
		cpp_long getFreeSpace();
		cpp_int compareTo(local_ref< java::lang::Object > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_char > separatorChar;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > separator;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_char > pathSeparatorChar;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > pathSeparator;
	}; //class File

} //namespace io
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILE_HPP_IMPL
#define J2CPP_JAVA_IO_FILE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::io::File > create< java::io::File>(local_ref< java::io::File > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::io::File >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::File::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::File::J2CPP_CLASS_NAME, java::io::File::J2CPP_METHOD_NAME(0), java::io::File::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::io::File > create< java::io::File>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::io::File >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::File::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::File::J2CPP_CLASS_NAME, java::io::File::J2CPP_METHOD_NAME(1), java::io::File::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::io::File > create< java::io::File>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::io::File >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::File::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::File::J2CPP_CLASS_NAME, java::io::File::J2CPP_METHOD_NAME(2), java::io::File::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::io::File > create< java::io::File>(local_ref< java::net::URI > const &a0)
{
	return local_ref< java::io::File >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::File::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::File::J2CPP_CLASS_NAME, java::io::File::J2CPP_METHOD_NAME(3), java::io::File::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::io::File, 1> > java::io::File::listRoots()
{
	return local_ref< cpp_object_array<java::io::File, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>()
		)
	);
}

cpp_boolean java::io::File::canExecute()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_boolean java::io::File::canRead()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_boolean java::io::File::canWrite()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_int java::io::File::compareTo(local_ref< java::io::File > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::io::File::deleteThe()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void java::io::File::deleteOnExit()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_boolean java::io::File::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::io::File::exists()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< java::lang::String > java::io::File::getAbsolutePath()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

local_ref< java::io::File > java::io::File::getAbsoluteFile()
{
	return local_ref< java::io::File >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< java::lang::String > java::io::File::getCanonicalPath()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

local_ref< java::io::File > java::io::File::getCanonicalFile()
{
	return local_ref< java::io::File >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

local_ref< java::lang::String > java::io::File::getName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

local_ref< java::lang::String > java::io::File::getParent()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

local_ref< java::io::File > java::io::File::getParentFile()
{
	return local_ref< java::io::File >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

local_ref< java::lang::String > java::io::File::getPath()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

cpp_int java::io::File::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

cpp_boolean java::io::File::isAbsolute()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}

cpp_boolean java::io::File::isDirectory()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>()
		)
	);
}

cpp_boolean java::io::File::isFile()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

cpp_boolean java::io::File::isHidden()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>()
		)
	);
}

cpp_long java::io::File::lastModified()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}

cpp_boolean java::io::File::setLastModified(cpp_long const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::io::File::setReadOnly()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>()
		)
	);
}

cpp_boolean java::io::File::setExecutable(cpp_boolean const &a0, cpp_boolean const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::io::File::setExecutable(cpp_boolean const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::io::File::setReadable(cpp_boolean const &a0, cpp_boolean const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::io::File::setReadable(cpp_boolean const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::io::File::setWritable(cpp_boolean const &a0, cpp_boolean const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::io::File::setWritable(cpp_boolean const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long java::io::File::length()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::String, 1> > java::io::File::list()
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::String, 1> > java::io::File::list(local_ref< java::io::FilenameFilter > const &a0)
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::io::File, 1> > java::io::File::listFiles()
{
	return local_ref< cpp_object_array<java::io::File, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>()
		)
	);
}

local_ref< cpp_object_array<java::io::File, 1> > java::io::File::listFiles(local_ref< java::io::FilenameFilter > const &a0)
{
	return local_ref< cpp_object_array<java::io::File, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::io::File, 1> > java::io::File::listFiles(local_ref< java::io::FileFilter > const &a0)
{
	return local_ref< cpp_object_array<java::io::File, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::io::File::mkdir()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>()
		)
	);
}

cpp_boolean java::io::File::mkdirs()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), false>()
		)
	);
}

cpp_boolean java::io::File::createNewFile()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(43), J2CPP_METHOD_SIGNATURE(43), false>()
		)
	);
}

local_ref< java::io::File > java::io::File::createTempFile(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::io::File >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(44), J2CPP_METHOD_SIGNATURE(44), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::io::File > java::io::File::createTempFile(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::io::File > const &a2)
{
	return local_ref< java::io::File >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(45), J2CPP_METHOD_SIGNATURE(45), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean java::io::File::renameTo(local_ref< java::io::File > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(46), J2CPP_METHOD_SIGNATURE(46), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::io::File::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(47), J2CPP_METHOD_SIGNATURE(47), false>()
		)
	);
}

local_ref< java::net::URI > java::io::File::toURI()
{
	return local_ref< java::net::URI >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(48), J2CPP_METHOD_SIGNATURE(48), false>()
		)
	);
}

local_ref< java::net::URL > java::io::File::toURL()
{
	return local_ref< java::net::URL >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(49), J2CPP_METHOD_SIGNATURE(49), false>()
		)
	);
}

cpp_long java::io::File::getTotalSpace()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(50), J2CPP_METHOD_SIGNATURE(50), false>()
		)
	);
}

cpp_long java::io::File::getUsableSpace()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(51), J2CPP_METHOD_SIGNATURE(51), false>()
		)
	);
}

cpp_long java::io::File::getFreeSpace()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(52), J2CPP_METHOD_SIGNATURE(52), false>()
		)
	);
}

cpp_int java::io::File::compareTo(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(53), J2CPP_METHOD_SIGNATURE(53), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	java::io::File::J2CPP_CLASS_NAME,
	java::io::File::J2CPP_FIELD_NAME(0),
	java::io::File::J2CPP_FIELD_SIGNATURE(0),
	cpp_char
> java::io::File::separatorChar;

static_field<
	java::io::File::J2CPP_CLASS_NAME,
	java::io::File::J2CPP_FIELD_NAME(1),
	java::io::File::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> java::io::File::separator;

static_field<
	java::io::File::J2CPP_CLASS_NAME,
	java::io::File::J2CPP_FIELD_NAME(2),
	java::io::File::J2CPP_FIELD_SIGNATURE(2),
	cpp_char
> java::io::File::pathSeparatorChar;

static_field<
	java::io::File::J2CPP_CLASS_NAME,
	java::io::File::J2CPP_FIELD_NAME(3),
	java::io::File::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> java::io::File::pathSeparator;


J2CPP_DEFINE_CLASS(java::io::File,"java/io/File")
J2CPP_DEFINE_METHOD(java::io::File,0,"<init>","(Ljava/io/File;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::File,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::File,2,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::File,3,"<init>","(Ljava/net/URI;)V")
J2CPP_DEFINE_METHOD(java::io::File,4,"listRoots","()[java.io.File")
J2CPP_DEFINE_METHOD(java::io::File,5,"canExecute","()Z")
J2CPP_DEFINE_METHOD(java::io::File,6,"canRead","()Z")
J2CPP_DEFINE_METHOD(java::io::File,7,"canWrite","()Z")
J2CPP_DEFINE_METHOD(java::io::File,8,"compareTo","(Ljava/io/File;)I")
J2CPP_DEFINE_METHOD(java::io::File,9,"delete","()Z")
J2CPP_DEFINE_METHOD(java::io::File,10,"deleteOnExit","()V")
J2CPP_DEFINE_METHOD(java::io::File,11,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::io::File,12,"exists","()Z")
J2CPP_DEFINE_METHOD(java::io::File,13,"getAbsolutePath","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::File,14,"getAbsoluteFile","()Ljava/io/File;")
J2CPP_DEFINE_METHOD(java::io::File,15,"getCanonicalPath","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::File,16,"getCanonicalFile","()Ljava/io/File;")
J2CPP_DEFINE_METHOD(java::io::File,17,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::File,18,"getParent","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::File,19,"getParentFile","()Ljava/io/File;")
J2CPP_DEFINE_METHOD(java::io::File,20,"getPath","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::File,21,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::io::File,22,"isAbsolute","()Z")
J2CPP_DEFINE_METHOD(java::io::File,23,"isDirectory","()Z")
J2CPP_DEFINE_METHOD(java::io::File,24,"isFile","()Z")
J2CPP_DEFINE_METHOD(java::io::File,25,"isHidden","()Z")
J2CPP_DEFINE_METHOD(java::io::File,26,"lastModified","()J")
J2CPP_DEFINE_METHOD(java::io::File,27,"setLastModified","(J)Z")
J2CPP_DEFINE_METHOD(java::io::File,28,"setReadOnly","()Z")
J2CPP_DEFINE_METHOD(java::io::File,29,"setExecutable","(ZZ)Z")
J2CPP_DEFINE_METHOD(java::io::File,30,"setExecutable","(Z)Z")
J2CPP_DEFINE_METHOD(java::io::File,31,"setReadable","(ZZ)Z")
J2CPP_DEFINE_METHOD(java::io::File,32,"setReadable","(Z)Z")
J2CPP_DEFINE_METHOD(java::io::File,33,"setWritable","(ZZ)Z")
J2CPP_DEFINE_METHOD(java::io::File,34,"setWritable","(Z)Z")
J2CPP_DEFINE_METHOD(java::io::File,35,"length","()J")
J2CPP_DEFINE_METHOD(java::io::File,36,"list","()[java.lang.String")
J2CPP_DEFINE_METHOD(java::io::File,37,"list","(Ljava/io/FilenameFilter;)[java.lang.String")
J2CPP_DEFINE_METHOD(java::io::File,38,"listFiles","()[java.io.File")
J2CPP_DEFINE_METHOD(java::io::File,39,"listFiles","(Ljava/io/FilenameFilter;)[java.io.File")
J2CPP_DEFINE_METHOD(java::io::File,40,"listFiles","(Ljava/io/FileFilter;)[java.io.File")
J2CPP_DEFINE_METHOD(java::io::File,41,"mkdir","()Z")
J2CPP_DEFINE_METHOD(java::io::File,42,"mkdirs","()Z")
J2CPP_DEFINE_METHOD(java::io::File,43,"createNewFile","()Z")
J2CPP_DEFINE_METHOD(java::io::File,44,"createTempFile","(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;")
J2CPP_DEFINE_METHOD(java::io::File,45,"createTempFile","(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;")
J2CPP_DEFINE_METHOD(java::io::File,46,"renameTo","(Ljava/io/File;)Z")
J2CPP_DEFINE_METHOD(java::io::File,47,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::File,48,"toURI","()Ljava/net/URI;")
J2CPP_DEFINE_METHOD(java::io::File,49,"toURL","()Ljava/net/URL;")
J2CPP_DEFINE_METHOD(java::io::File,50,"getTotalSpace","()J")
J2CPP_DEFINE_METHOD(java::io::File,51,"getUsableSpace","()J")
J2CPP_DEFINE_METHOD(java::io::File,52,"getFreeSpace","()J")
J2CPP_DEFINE_METHOD(java::io::File,53,"compareTo","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::io::File,54,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::io::File,0,"separatorChar","C")
J2CPP_DEFINE_FIELD(java::io::File,1,"separator","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(java::io::File,2,"pathSeparatorChar","C")
J2CPP_DEFINE_FIELD(java::io::File,3,"pathSeparator","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION