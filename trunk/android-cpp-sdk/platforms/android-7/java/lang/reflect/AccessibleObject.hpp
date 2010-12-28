/*================================================================================
  code generated by: java2cpp
  class: java.lang.reflect.AccessibleObject
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_ACCESSIBLEOBJECT_HPP_DECL
#define J2CPP_JAVA_LANG_REFLECT_ACCESSIBLEOBJECT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { namespace annotation { class Annotation; } } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class AnnotatedElement; } } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/annotation/Annotation.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace reflect {

	class AccessibleObject;
	class AccessibleObject
		: public cpp_object<AccessibleObject>
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

		explicit AccessibleObject(jobject jobj)
		: cpp_object<AccessibleObject>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::reflect::AnnotatedElement>() const;


		static void setAccessible(local_ref< cpp_object_array<java::lang::reflect::AccessibleObject, 1> > const&, cpp_boolean const&);
		cpp_boolean isAccessible();
		void setAccessible(cpp_boolean const&);
		cpp_boolean isAnnotationPresent(local_ref< java::lang::Class > const&);
		local_ref< cpp_object_array<java::lang::annotation::Annotation, 1> > getDeclaredAnnotations();
		local_ref< cpp_object_array<java::lang::annotation::Annotation, 1> > getAnnotations();
		local_ref< java::lang::annotation::Annotation > getAnnotation(local_ref< java::lang::Class > const&);
	}; //class AccessibleObject

} //namespace reflect
} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_ACCESSIBLEOBJECT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_ACCESSIBLEOBJECT_HPP_IMPL
#define J2CPP_JAVA_LANG_REFLECT_ACCESSIBLEOBJECT_HPP_IMPL

namespace j2cpp {



java::lang::reflect::AccessibleObject::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

java::lang::reflect::AccessibleObject::operator local_ref<java::lang::reflect::AnnotatedElement>() const
{
	return local_ref<java::lang::reflect::AnnotatedElement>(get_jtype());
}


void java::lang::reflect::AccessibleObject::setAccessible(local_ref< cpp_object_array<java::lang::reflect::AccessibleObject, 1> > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::lang::reflect::AccessibleObject::isAccessible()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void java::lang::reflect::AccessibleObject::setAccessible(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::lang::reflect::AccessibleObject::isAnnotationPresent(local_ref< java::lang::Class > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::annotation::Annotation, 1> > java::lang::reflect::AccessibleObject::getDeclaredAnnotations()
{
	return local_ref< cpp_object_array<java::lang::annotation::Annotation, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::annotation::Annotation, 1> > java::lang::reflect::AccessibleObject::getAnnotations()
{
	return local_ref< cpp_object_array<java::lang::annotation::Annotation, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::lang::annotation::Annotation > java::lang::reflect::AccessibleObject::getAnnotation(local_ref< java::lang::Class > const &a0)
{
	return local_ref< java::lang::annotation::Annotation >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::lang::reflect::AccessibleObject,"java/lang/reflect/AccessibleObject")
J2CPP_DEFINE_METHOD(java::lang::reflect::AccessibleObject,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::reflect::AccessibleObject,1,"setAccessible","([java.lang.reflect.AccessibleObjectZ)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::AccessibleObject,2,"isAccessible","()Z")
J2CPP_DEFINE_METHOD(java::lang::reflect::AccessibleObject,3,"setAccessible","(Z)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::AccessibleObject,4,"isAnnotationPresent","(Ljava/lang/Class;)Z")
J2CPP_DEFINE_METHOD(java::lang::reflect::AccessibleObject,5,"getDeclaredAnnotations","()[java.lang.annotation.Annotation")
J2CPP_DEFINE_METHOD(java::lang::reflect::AccessibleObject,6,"getAnnotations","()[java.lang.annotation.Annotation")
J2CPP_DEFINE_METHOD(java::lang::reflect::AccessibleObject,7,"getAnnotation","(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_ACCESSIBLEOBJECT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION