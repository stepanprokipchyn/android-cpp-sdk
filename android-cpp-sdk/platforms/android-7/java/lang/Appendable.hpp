/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.Appendable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_APPENDABLE_HPP_DECL
#define J2CPP_JAVA_LANG_APPENDABLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }


#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Appendable;
	class Appendable
		: public object<Appendable>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit Appendable(jobject jobj)
		: object<Appendable>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::Appendable > append(jchar);
		local_ref< java::lang::Appendable > append(local_ref< java::lang::CharSequence >  const&);
		local_ref< java::lang::Appendable > append(local_ref< java::lang::CharSequence >  const&, jint, jint);
	}; //class Appendable

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_APPENDABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_APPENDABLE_HPP_IMPL
#define J2CPP_JAVA_LANG_APPENDABLE_HPP_IMPL

namespace j2cpp {



java::lang::Appendable::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::Appendable > java::lang::Appendable::append(jchar a0)
{
	return call_method<
		java::lang::Appendable::J2CPP_CLASS_NAME,
		java::lang::Appendable::J2CPP_METHOD_NAME(0),
		java::lang::Appendable::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::Appendable >
	>(get_jobject(), a0);
}

local_ref< java::lang::Appendable > java::lang::Appendable::append(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		java::lang::Appendable::J2CPP_CLASS_NAME,
		java::lang::Appendable::J2CPP_METHOD_NAME(1),
		java::lang::Appendable::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Appendable >
	>(get_jobject(), a0);
}

local_ref< java::lang::Appendable > java::lang::Appendable::append(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2)
{
	return call_method<
		java::lang::Appendable::J2CPP_CLASS_NAME,
		java::lang::Appendable::J2CPP_METHOD_NAME(2),
		java::lang::Appendable::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Appendable >
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(java::lang::Appendable,"java/lang/Appendable")
J2CPP_DEFINE_METHOD(java::lang::Appendable,0,"append","(C)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(java::lang::Appendable,1,"append","(Ljava/lang/CharSequence;)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(java::lang::Appendable,2,"append","(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_APPENDABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
