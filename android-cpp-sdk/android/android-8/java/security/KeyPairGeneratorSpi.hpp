/*================================================================================
  code generated by: java2cpp
  class: java.security.KeyPairGeneratorSpi
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_KEYPAIRGENERATORSPI_HPP_DECL
#define J2CPP_JAVA_SECURITY_KEYPAIRGENERATORSPI_HPP_DECL


namespace j2cpp { namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } } }
namespace j2cpp { namespace java { namespace security { class KeyPair; } } }
namespace j2cpp { namespace java { namespace security { class SecureRandom; } } }


#include <java/security/KeyPair.hpp>
#include <java/security/SecureRandom.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>


namespace j2cpp {

namespace java { namespace security {

	class KeyPairGeneratorSpi;
	class KeyPairGeneratorSpi
		: public cpp_object<KeyPairGeneratorSpi>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		KeyPairGeneratorSpi(jobject jobj)
		: cpp_object<KeyPairGeneratorSpi>(jobj)
		{
		}

		local_ref< java::security::KeyPair > generateKeyPair();
		void initialize(cpp_int const&, local_ref< java::security::SecureRandom > const&);
		void initialize(local_ref< java::security::spec::AlgorithmParameterSpec > const&, local_ref< java::security::SecureRandom > const&);
	}; //class KeyPairGeneratorSpi

} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_KEYPAIRGENERATORSPI_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_KEYPAIRGENERATORSPI_HPP_IMPL
#define J2CPP_JAVA_SECURITY_KEYPAIRGENERATORSPI_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::security::KeyPairGeneratorSpi > create< java::security::KeyPairGeneratorSpi>()
{
	return local_ref< java::security::KeyPairGeneratorSpi >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::KeyPairGeneratorSpi::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::KeyPairGeneratorSpi::J2CPP_CLASS_NAME, java::security::KeyPairGeneratorSpi::J2CPP_METHOD_NAME(0), java::security::KeyPairGeneratorSpi::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::security::KeyPair > java::security::KeyPairGeneratorSpi::generateKeyPair()
{
	return local_ref< java::security::KeyPair >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void java::security::KeyPairGeneratorSpi::initialize(cpp_int const &a0, local_ref< java::security::SecureRandom > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::security::KeyPairGeneratorSpi::initialize(local_ref< java::security::spec::AlgorithmParameterSpec > const &a0, local_ref< java::security::SecureRandom > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::KeyPairGeneratorSpi,"java/security/KeyPairGeneratorSpi")
J2CPP_DEFINE_METHOD(java::security::KeyPairGeneratorSpi,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::KeyPairGeneratorSpi,1,"generateKeyPair","()Ljava/security/KeyPair;")
J2CPP_DEFINE_METHOD(java::security::KeyPairGeneratorSpi,2,"initialize","(ILjava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(java::security::KeyPairGeneratorSpi,3,"initialize","(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_KEYPAIRGENERATORSPI_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
