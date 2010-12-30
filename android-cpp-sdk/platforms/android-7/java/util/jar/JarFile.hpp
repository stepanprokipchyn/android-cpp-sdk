/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.jar.JarFile
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_JAR_JARFILE_HPP_DECL
#define J2CPP_JAVA_UTIL_JAR_JARFILE_HPP_DECL


namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { namespace zip { class ZipEntry; } } } }
namespace j2cpp { namespace java { namespace util { namespace zip { class ZipFile; } } } }
namespace j2cpp { namespace java { namespace util { namespace jar { class Manifest; } } } }
namespace j2cpp { namespace java { namespace util { namespace jar { class JarEntry; } } } }
namespace j2cpp { namespace java { namespace util { class Enumeration; } } }


#include <java/io/File.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/String.hpp>
#include <java/util/Enumeration.hpp>
#include <java/util/jar/JarEntry.hpp>
#include <java/util/jar/Manifest.hpp>
#include <java/util/zip/ZipEntry.hpp>
#include <java/util/zip/ZipFile.hpp>


namespace j2cpp {

namespace java { namespace util { namespace jar {

	class JarFile;
	class JarFile
		: public object<JarFile>
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
		J2CPP_DECLARE_FIELD(0)

		explicit JarFile(jobject jobj)
		: object<JarFile>(jobj)
		{
		}

		operator local_ref<java::util::zip::ZipFile>() const;


		JarFile(local_ref< java::io::File > const&);
		JarFile(local_ref< java::io::File > const&, jboolean);
		JarFile(local_ref< java::io::File > const&, jboolean, jint);
		JarFile(local_ref< java::lang::String > const&);
		JarFile(local_ref< java::lang::String > const&, jboolean);
		local_ref< java::util::Enumeration > entries();
		local_ref< java::util::jar::JarEntry > getJarEntry(local_ref< java::lang::String >  const&);
		local_ref< java::util::jar::Manifest > getManifest();
		local_ref< java::io::InputStream > getInputStream(local_ref< java::util::zip::ZipEntry >  const&);
		local_ref< java::util::zip::ZipEntry > getEntry(local_ref< java::lang::String >  const&);
		void close();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > MANIFEST_NAME;
	}; //class JarFile

} //namespace jar
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_JAR_JARFILE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_JAR_JARFILE_HPP_IMPL
#define J2CPP_JAVA_UTIL_JAR_JARFILE_HPP_IMPL

namespace j2cpp {



java::util::jar::JarFile::operator local_ref<java::util::zip::ZipFile>() const
{
	return local_ref<java::util::zip::ZipFile>(get_jobject());
}


java::util::jar::JarFile::JarFile(local_ref< java::io::File > const &a0)
: object<java::util::jar::JarFile>(
	call_new_object<
		java::util::jar::JarFile::J2CPP_CLASS_NAME,
		java::util::jar::JarFile::J2CPP_METHOD_NAME(0),
		java::util::jar::JarFile::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::util::jar::JarFile::JarFile(local_ref< java::io::File > const &a0, jboolean a1)
: object<java::util::jar::JarFile>(
	call_new_object<
		java::util::jar::JarFile::J2CPP_CLASS_NAME,
		java::util::jar::JarFile::J2CPP_METHOD_NAME(1),
		java::util::jar::JarFile::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



java::util::jar::JarFile::JarFile(local_ref< java::io::File > const &a0, jboolean a1, jint a2)
: object<java::util::jar::JarFile>(
	call_new_object<
		java::util::jar::JarFile::J2CPP_CLASS_NAME,
		java::util::jar::JarFile::J2CPP_METHOD_NAME(2),
		java::util::jar::JarFile::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2)
)
{
}



java::util::jar::JarFile::JarFile(local_ref< java::lang::String > const &a0)
: object<java::util::jar::JarFile>(
	call_new_object<
		java::util::jar::JarFile::J2CPP_CLASS_NAME,
		java::util::jar::JarFile::J2CPP_METHOD_NAME(3),
		java::util::jar::JarFile::J2CPP_METHOD_SIGNATURE(3)>
	(a0)
)
{
}



java::util::jar::JarFile::JarFile(local_ref< java::lang::String > const &a0, jboolean a1)
: object<java::util::jar::JarFile>(
	call_new_object<
		java::util::jar::JarFile::J2CPP_CLASS_NAME,
		java::util::jar::JarFile::J2CPP_METHOD_NAME(4),
		java::util::jar::JarFile::J2CPP_METHOD_SIGNATURE(4)>
	(a0, a1)
)
{
}


local_ref< java::util::Enumeration > java::util::jar::JarFile::entries()
{
	return call_method<
		java::util::jar::JarFile::J2CPP_CLASS_NAME,
		java::util::jar::JarFile::J2CPP_METHOD_NAME(5),
		java::util::jar::JarFile::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::util::Enumeration > >
	(get_jobject());
}

local_ref< java::util::jar::JarEntry > java::util::jar::JarFile::getJarEntry(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::jar::JarFile::J2CPP_CLASS_NAME,
		java::util::jar::JarFile::J2CPP_METHOD_NAME(6),
		java::util::jar::JarFile::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::util::jar::JarEntry > >
	(get_jobject(), a0);
}

local_ref< java::util::jar::Manifest > java::util::jar::JarFile::getManifest()
{
	return call_method<
		java::util::jar::JarFile::J2CPP_CLASS_NAME,
		java::util::jar::JarFile::J2CPP_METHOD_NAME(7),
		java::util::jar::JarFile::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::util::jar::Manifest > >
	(get_jobject());
}

local_ref< java::io::InputStream > java::util::jar::JarFile::getInputStream(local_ref< java::util::zip::ZipEntry > const &a0)
{
	return call_method<
		java::util::jar::JarFile::J2CPP_CLASS_NAME,
		java::util::jar::JarFile::J2CPP_METHOD_NAME(8),
		java::util::jar::JarFile::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::io::InputStream > >
	(get_jobject(), a0);
}

local_ref< java::util::zip::ZipEntry > java::util::jar::JarFile::getEntry(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::jar::JarFile::J2CPP_CLASS_NAME,
		java::util::jar::JarFile::J2CPP_METHOD_NAME(9),
		java::util::jar::JarFile::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::util::zip::ZipEntry > >
	(get_jobject(), a0);
}

void java::util::jar::JarFile::close()
{
	return call_method<
		java::util::jar::JarFile::J2CPP_CLASS_NAME,
		java::util::jar::JarFile::J2CPP_METHOD_NAME(10),
		java::util::jar::JarFile::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject());
}


static_field<
	java::util::jar::JarFile::J2CPP_CLASS_NAME,
	java::util::jar::JarFile::J2CPP_FIELD_NAME(0),
	java::util::jar::JarFile::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> java::util::jar::JarFile::MANIFEST_NAME;


J2CPP_DEFINE_CLASS(java::util::jar::JarFile,"java/util/jar/JarFile")
J2CPP_DEFINE_METHOD(java::util::jar::JarFile,0,"<init>","(Ljava/io/File;)V")
J2CPP_DEFINE_METHOD(java::util::jar::JarFile,1,"<init>","(Ljava/io/File;Z)V")
J2CPP_DEFINE_METHOD(java::util::jar::JarFile,2,"<init>","(Ljava/io/File;ZI)V")
J2CPP_DEFINE_METHOD(java::util::jar::JarFile,3,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::jar::JarFile,4,"<init>","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(java::util::jar::JarFile,5,"entries","()Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(java::util::jar::JarFile,6,"getJarEntry","(Ljava/lang/String;)Ljava/util/jar/JarEntry;")
J2CPP_DEFINE_METHOD(java::util::jar::JarFile,7,"getManifest","()Ljava/util/jar/Manifest;")
J2CPP_DEFINE_METHOD(java::util::jar::JarFile,8,"getInputStream","(Ljava/util/zip/ZipEntry;)Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(java::util::jar::JarFile,9,"getEntry","(Ljava/lang/String;)Ljava/util/zip/ZipEntry;")
J2CPP_DEFINE_METHOD(java::util::jar::JarFile,10,"close","()V")
J2CPP_DEFINE_FIELD(java::util::jar::JarFile,0,"MANIFEST_NAME","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_JAR_JARFILE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
