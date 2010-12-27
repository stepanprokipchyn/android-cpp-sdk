/*================================================================================
  code generated by: java2cpp
  class: java.security.interfaces.DSAKey
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INTERFACES_DSAKEY_HPP_DECL
#define J2CPP_JAVA_SECURITY_INTERFACES_DSAKEY_HPP_DECL


namespace j2cpp { namespace java { namespace security { namespace interfaces { class DSAParams; } } } }


#include <java/security/interfaces/DSAParams.hpp>


namespace j2cpp {

namespace java { namespace security { namespace interfaces {

	class DSAKey;
	class DSAKey
		: public cpp_object<DSAKey>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		DSAKey(jobject jobj)
		: cpp_object<DSAKey>(jobj)
		{
		}

		local_ref< java::security::interfaces::DSAParams > getParams();
	}; //class DSAKey

} //namespace interfaces
} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INTERFACES_DSAKEY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INTERFACES_DSAKEY_HPP_IMPL
#define J2CPP_JAVA_SECURITY_INTERFACES_DSAKEY_HPP_IMPL

namespace j2cpp {


local_ref< java::security::interfaces::DSAParams > java::security::interfaces::DSAKey::getParams()
{
	return local_ref< java::security::interfaces::DSAParams >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::interfaces::DSAKey,"java/security/interfaces/DSAKey")
J2CPP_DEFINE_METHOD(java::security::interfaces::DSAKey,0,"getParams","()Ljava/security/interfaces/DSAParams;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INTERFACES_DSAKEY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
