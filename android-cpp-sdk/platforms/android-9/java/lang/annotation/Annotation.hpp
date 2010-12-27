/*================================================================================
  code generated by: java2cpp
  class: java.lang.annotation.Annotation
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ANNOTATION_ANNOTATION_HPP_DECL
#define J2CPP_JAVA_LANG_ANNOTATION_ANNOTATION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace annotation {

	class Annotation;
	class Annotation
		: public cpp_object<Annotation>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		Annotation(jobject jobj)
		: cpp_object<Annotation>(jobj)
		{
		}

		local_ref< java::lang::Class > annotationType();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_int hashCode();
		local_ref< java::lang::String > toString();
	}; //class Annotation

} //namespace annotation
} //namespace lang
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ANNOTATION_ANNOTATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ANNOTATION_ANNOTATION_HPP_IMPL
#define J2CPP_JAVA_LANG_ANNOTATION_ANNOTATION_HPP_IMPL

namespace j2cpp {


local_ref< java::lang::Class > java::lang::annotation::Annotation::annotationType()
{
	return local_ref< java::lang::Class >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_boolean java::lang::annotation::Annotation::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::lang::annotation::Annotation::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > java::lang::annotation::Annotation::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::lang::annotation::Annotation,"java/lang/annotation/Annotation")
J2CPP_DEFINE_METHOD(java::lang::annotation::Annotation,0,"annotationType","()Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::lang::annotation::Annotation,1,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::lang::annotation::Annotation,2,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::lang::annotation::Annotation,3,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ANNOTATION_ANNOTATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
