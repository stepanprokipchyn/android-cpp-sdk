/*================================================================================
  code generated by: java2cpp
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
		: public cpp_object<Guard>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		Guard(jobject jobj)
		: cpp_object<Guard>(jobj)
		{
		}

		void checkGuard(local_ref< java::lang::Object > const&);
	}; //class Guard

} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_GUARD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_GUARD_HPP_IMPL
#define J2CPP_JAVA_SECURITY_GUARD_HPP_IMPL

namespace j2cpp {


void java::security::Guard::checkGuard(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::Guard,"java/security/Guard")
J2CPP_DEFINE_METHOD(java::security::Guard,0,"checkGuard","(Ljava/lang/Object;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_GUARD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
