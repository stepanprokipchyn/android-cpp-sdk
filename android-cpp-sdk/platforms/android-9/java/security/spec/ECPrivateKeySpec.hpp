/*================================================================================
  code generated by: java2cpp
  class: java.security.spec.ECPrivateKeySpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_ECPRIVATEKEYSPEC_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_ECPRIVATEKEYSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace security { namespace spec { class ECParameterSpec; } } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }


#include <java/math/BigInteger.hpp>
#include <java/security/spec/ECParameterSpec.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class ECPrivateKeySpec;
	class ECPrivateKeySpec
		: public cpp_object<ECPrivateKeySpec>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		ECPrivateKeySpec(jobject jobj)
		: cpp_object<ECPrivateKeySpec>(jobj)
		{
		}

		local_ref< java::security::spec::ECParameterSpec > getParams();
		local_ref< java::math::BigInteger > getS();
	}; //class ECPrivateKeySpec

} //namespace spec
} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_ECPRIVATEKEYSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_ECPRIVATEKEYSPEC_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_ECPRIVATEKEYSPEC_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::security::spec::ECPrivateKeySpec > create< java::security::spec::ECPrivateKeySpec>(local_ref< java::math::BigInteger > const &a0, local_ref< java::security::spec::ECParameterSpec > const &a1)
{
	return local_ref< java::security::spec::ECPrivateKeySpec >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::spec::ECPrivateKeySpec::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::spec::ECPrivateKeySpec::J2CPP_CLASS_NAME, java::security::spec::ECPrivateKeySpec::J2CPP_METHOD_NAME(0), java::security::spec::ECPrivateKeySpec::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::security::spec::ECParameterSpec > java::security::spec::ECPrivateKeySpec::getParams()
{
	return local_ref< java::security::spec::ECParameterSpec >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::spec::ECPrivateKeySpec::getS()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::spec::ECPrivateKeySpec,"java/security/spec/ECPrivateKeySpec")
J2CPP_DEFINE_METHOD(java::security::spec::ECPrivateKeySpec,0,"<init>","(Ljava/math/BigInteger;Ljava/security/spec/ECParameterSpec;)V")
J2CPP_DEFINE_METHOD(java::security::spec::ECPrivateKeySpec,1,"getParams","()Ljava/security/spec/ECParameterSpec;")
J2CPP_DEFINE_METHOD(java::security::spec::ECPrivateKeySpec,2,"getS","()Ljava/math/BigInteger;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_ECPRIVATEKEYSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
