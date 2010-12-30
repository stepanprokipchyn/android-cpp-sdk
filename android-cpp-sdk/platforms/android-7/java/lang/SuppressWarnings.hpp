/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.SuppressWarnings
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_SUPPRESSWARNINGS_HPP_DECL
#define J2CPP_JAVA_LANG_SUPPRESSWARNINGS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { namespace annotation { class Annotation; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/annotation/Annotation.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class SuppressWarnings;
	class SuppressWarnings
		: public object<SuppressWarnings>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit SuppressWarnings(jobject jobj)
		: object<SuppressWarnings>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::annotation::Annotation>() const;


		local_ref< array< local_ref< java::lang::String >, 1> > value();
	}; //class SuppressWarnings

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_SUPPRESSWARNINGS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_SUPPRESSWARNINGS_HPP_IMPL
#define J2CPP_JAVA_LANG_SUPPRESSWARNINGS_HPP_IMPL

namespace j2cpp {



java::lang::SuppressWarnings::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::SuppressWarnings::operator local_ref<java::lang::annotation::Annotation>() const
{
	return local_ref<java::lang::annotation::Annotation>(get_jobject());
}

local_ref< array< local_ref< java::lang::String >, 1> > java::lang::SuppressWarnings::value()
{
	return call_method<
		java::lang::SuppressWarnings::J2CPP_CLASS_NAME,
		java::lang::SuppressWarnings::J2CPP_METHOD_NAME(0),
		java::lang::SuppressWarnings::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< java::lang::String >, 1> > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::lang::SuppressWarnings,"java/lang/SuppressWarnings")
J2CPP_DEFINE_METHOD(java::lang::SuppressWarnings,0,"value","()[java.lang.String")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_SUPPRESSWARNINGS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
