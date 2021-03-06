/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.Guard
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_GUARD_HPP_DECL
#define J2CPP_JAVA_SECURITY_GUARD_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace security {

	class Guard;
	class Guard
		: public object<Guard>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit Guard(jobject jobj)
		: object<Guard>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void checkGuard(local_ref< java::lang::Object >  const&);
	}; //class Guard

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_GUARD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_GUARD_HPP_IMPL
#define J2CPP_JAVA_SECURITY_GUARD_HPP_IMPL

namespace j2cpp {



java::security::Guard::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void java::security::Guard::checkGuard(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::security::Guard::J2CPP_CLASS_NAME,
		java::security::Guard::J2CPP_METHOD_NAME(0),
		java::security::Guard::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::security::Guard,"java/security/Guard")
J2CPP_DEFINE_METHOD(java::security::Guard,0,"checkGuard","(Ljava/lang/Object;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_GUARD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
