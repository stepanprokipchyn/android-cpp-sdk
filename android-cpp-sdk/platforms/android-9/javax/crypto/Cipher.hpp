/*================================================================================
  code generated by: java2cpp
  class: javax.crypto.Cipher
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_CIPHER_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_CIPHER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace javax { namespace crypto { class ExemptionMechanism; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class Certificate; } } } }
namespace j2cpp { namespace java { namespace security { class SecureRandom; } } }
namespace j2cpp { namespace java { namespace security { class Key; } } }
namespace j2cpp { namespace java { namespace security { class Provider; } } }
namespace j2cpp { namespace java { namespace security { class AlgorithmParameters; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } } }
namespace j2cpp { namespace java { namespace nio { class ByteBuffer; } } }


#include <java/lang/String.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/security/AlgorithmParameters.hpp>
#include <java/security/Key.hpp>
#include <java/security/Provider.hpp>
#include <java/security/SecureRandom.hpp>
#include <java/security/cert/Certificate.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>
#include <javax/crypto/ExemptionMechanism.hpp>


namespace j2cpp {

namespace javax { namespace crypto {

	class Cipher;
	class Cipher
		: public cpp_object<Cipher>
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
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)

		Cipher(jobject jobj)
		: cpp_object<Cipher>(jobj)
		{
		}

		static local_ref< javax::crypto::Cipher > getInstance(local_ref< java::lang::String > const&);
		static local_ref< javax::crypto::Cipher > getInstance(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		static local_ref< javax::crypto::Cipher > getInstance(local_ref< java::lang::String > const&, local_ref< java::security::Provider > const&);
		local_ref< java::security::Provider > getProvider();
		local_ref< java::lang::String > getAlgorithm();
		cpp_int getBlockSize();
		cpp_int getOutputSize(cpp_int const&);
		local_ref< cpp_byte_array<1> > getIV();
		local_ref< java::security::AlgorithmParameters > getParameters();
		local_ref< javax::crypto::ExemptionMechanism > getExemptionMechanism();
		void init(cpp_int const&, local_ref< java::security::Key > const&);
		void init(cpp_int const&, local_ref< java::security::Key > const&, local_ref< java::security::SecureRandom > const&);
		void init(cpp_int const&, local_ref< java::security::Key > const&, local_ref< java::security::spec::AlgorithmParameterSpec > const&);
		void init(cpp_int const&, local_ref< java::security::Key > const&, local_ref< java::security::spec::AlgorithmParameterSpec > const&, local_ref< java::security::SecureRandom > const&);
		void init(cpp_int const&, local_ref< java::security::Key > const&, local_ref< java::security::AlgorithmParameters > const&);
		void init(cpp_int const&, local_ref< java::security::Key > const&, local_ref< java::security::AlgorithmParameters > const&, local_ref< java::security::SecureRandom > const&);
		void init(cpp_int const&, local_ref< java::security::cert::Certificate > const&);
		void init(cpp_int const&, local_ref< java::security::cert::Certificate > const&, local_ref< java::security::SecureRandom > const&);
		local_ref< cpp_byte_array<1> > update(local_ref< cpp_byte_array<1> > const&);
		local_ref< cpp_byte_array<1> > update(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_int update(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&, local_ref< cpp_byte_array<1> > const&);
		cpp_int update(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&, local_ref< cpp_byte_array<1> > const&, cpp_int const&);
		cpp_int update(local_ref< java::nio::ByteBuffer > const&, local_ref< java::nio::ByteBuffer > const&);
		local_ref< cpp_byte_array<1> > doFinal();
		cpp_int doFinal(local_ref< cpp_byte_array<1> > const&, cpp_int const&);
		local_ref< cpp_byte_array<1> > doFinal(local_ref< cpp_byte_array<1> > const&);
		local_ref< cpp_byte_array<1> > doFinal(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_int doFinal(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&, local_ref< cpp_byte_array<1> > const&);
		cpp_int doFinal(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&, local_ref< cpp_byte_array<1> > const&, cpp_int const&);
		cpp_int doFinal(local_ref< java::nio::ByteBuffer > const&, local_ref< java::nio::ByteBuffer > const&);
		local_ref< cpp_byte_array<1> > wrap(local_ref< java::security::Key > const&);
		local_ref< java::security::Key > unwrap(local_ref< cpp_byte_array<1> > const&, local_ref< java::lang::String > const&, cpp_int const&);
		static cpp_int getMaxAllowedKeyLength(local_ref< java::lang::String > const&);
		static local_ref< java::security::spec::AlgorithmParameterSpec > getMaxAllowedParameterSpec(local_ref< java::lang::String > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > DECRYPT_MODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > ENCRYPT_MODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > PRIVATE_KEY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > PUBLIC_KEY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > SECRET_KEY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > UNWRAP_MODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > WRAP_MODE;
	}; //class Cipher

} //namespace crypto
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_CIPHER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_CIPHER_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_CIPHER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::crypto::Cipher > create< javax::crypto::Cipher>(local_ref< javax::crypto::CipherSpi > const &a0, local_ref< java::security::Provider > const &a1, local_ref< java::lang::String > const &a2)
{
	return local_ref< javax::crypto::Cipher >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::crypto::Cipher::J2CPP_CLASS_NAME>(),
			get_method_id<javax::crypto::Cipher::J2CPP_CLASS_NAME, javax::crypto::Cipher::J2CPP_METHOD_NAME(0), javax::crypto::Cipher::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< javax::crypto::Cipher > javax::crypto::Cipher::getInstance(local_ref< java::lang::String > const &a0)
{
	return local_ref< javax::crypto::Cipher >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< javax::crypto::Cipher > javax::crypto::Cipher::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< javax::crypto::Cipher >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< javax::crypto::Cipher > javax::crypto::Cipher::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::security::Provider > const &a1)
{
	return local_ref< javax::crypto::Cipher >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::security::Provider > javax::crypto::Cipher::getProvider()
{
	return local_ref< java::security::Provider >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::String > javax::crypto::Cipher::getAlgorithm()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int javax::crypto::Cipher::getBlockSize()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_int javax::crypto::Cipher::getOutputSize(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_byte_array<1> > javax::crypto::Cipher::getIV()
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< java::security::AlgorithmParameters > javax::crypto::Cipher::getParameters()
{
	return local_ref< java::security::AlgorithmParameters >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< javax::crypto::ExemptionMechanism > javax::crypto::Cipher::getExemptionMechanism()
{
	return local_ref< javax::crypto::ExemptionMechanism >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

void javax::crypto::Cipher::init(cpp_int const &a0, local_ref< java::security::Key > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::crypto::Cipher::init(cpp_int const &a0, local_ref< java::security::Key > const &a1, local_ref< java::security::SecureRandom > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void javax::crypto::Cipher::init(cpp_int const &a0, local_ref< java::security::Key > const &a1, local_ref< java::security::spec::AlgorithmParameterSpec > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void javax::crypto::Cipher::init(cpp_int const &a0, local_ref< java::security::Key > const &a1, local_ref< java::security::spec::AlgorithmParameterSpec > const &a2, local_ref< java::security::SecureRandom > const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void javax::crypto::Cipher::init(cpp_int const &a0, local_ref< java::security::Key > const &a1, local_ref< java::security::AlgorithmParameters > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void javax::crypto::Cipher::init(cpp_int const &a0, local_ref< java::security::Key > const &a1, local_ref< java::security::AlgorithmParameters > const &a2, local_ref< java::security::SecureRandom > const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void javax::crypto::Cipher::init(cpp_int const &a0, local_ref< java::security::cert::Certificate > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::crypto::Cipher::init(cpp_int const &a0, local_ref< java::security::cert::Certificate > const &a1, local_ref< java::security::SecureRandom > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< cpp_byte_array<1> > javax::crypto::Cipher::update(local_ref< cpp_byte_array<1> > const &a0)
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_byte_array<1> > javax::crypto::Cipher::update(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int javax::crypto::Cipher::update(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2, local_ref< cpp_byte_array<1> > const &a3)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_int javax::crypto::Cipher::update(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2, local_ref< cpp_byte_array<1> > const &a3, cpp_int const &a4)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

cpp_int javax::crypto::Cipher::update(local_ref< java::nio::ByteBuffer > const &a0, local_ref< java::nio::ByteBuffer > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_byte_array<1> > javax::crypto::Cipher::doFinal()
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

cpp_int javax::crypto::Cipher::doFinal(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_byte_array<1> > javax::crypto::Cipher::doFinal(local_ref< cpp_byte_array<1> > const &a0)
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_byte_array<1> > javax::crypto::Cipher::doFinal(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int javax::crypto::Cipher::doFinal(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2, local_ref< cpp_byte_array<1> > const &a3)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_int javax::crypto::Cipher::doFinal(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2, local_ref< cpp_byte_array<1> > const &a3, cpp_int const &a4)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

cpp_int javax::crypto::Cipher::doFinal(local_ref< java::nio::ByteBuffer > const &a0, local_ref< java::nio::ByteBuffer > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_byte_array<1> > javax::crypto::Cipher::wrap(local_ref< java::security::Key > const &a0)
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::security::Key > javax::crypto::Cipher::unwrap(local_ref< cpp_byte_array<1> > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2)
{
	return local_ref< java::security::Key >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int javax::crypto::Cipher::getMaxAllowedKeyLength(local_ref< java::lang::String > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::security::spec::AlgorithmParameterSpec > javax::crypto::Cipher::getMaxAllowedParameterSpec(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::security::spec::AlgorithmParameterSpec >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), true>(),
			a0.get_jtype()
		)
	);
}


static_field<
	javax::crypto::Cipher::J2CPP_CLASS_NAME,
	javax::crypto::Cipher::J2CPP_FIELD_NAME(0),
	javax::crypto::Cipher::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> javax::crypto::Cipher::DECRYPT_MODE;

static_field<
	javax::crypto::Cipher::J2CPP_CLASS_NAME,
	javax::crypto::Cipher::J2CPP_FIELD_NAME(1),
	javax::crypto::Cipher::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> javax::crypto::Cipher::ENCRYPT_MODE;

static_field<
	javax::crypto::Cipher::J2CPP_CLASS_NAME,
	javax::crypto::Cipher::J2CPP_FIELD_NAME(2),
	javax::crypto::Cipher::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> javax::crypto::Cipher::PRIVATE_KEY;

static_field<
	javax::crypto::Cipher::J2CPP_CLASS_NAME,
	javax::crypto::Cipher::J2CPP_FIELD_NAME(3),
	javax::crypto::Cipher::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> javax::crypto::Cipher::PUBLIC_KEY;

static_field<
	javax::crypto::Cipher::J2CPP_CLASS_NAME,
	javax::crypto::Cipher::J2CPP_FIELD_NAME(4),
	javax::crypto::Cipher::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> javax::crypto::Cipher::SECRET_KEY;

static_field<
	javax::crypto::Cipher::J2CPP_CLASS_NAME,
	javax::crypto::Cipher::J2CPP_FIELD_NAME(5),
	javax::crypto::Cipher::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> javax::crypto::Cipher::UNWRAP_MODE;

static_field<
	javax::crypto::Cipher::J2CPP_CLASS_NAME,
	javax::crypto::Cipher::J2CPP_FIELD_NAME(6),
	javax::crypto::Cipher::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> javax::crypto::Cipher::WRAP_MODE;


J2CPP_DEFINE_CLASS(javax::crypto::Cipher,"javax/crypto/Cipher")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,0,"<init>","(Ljavax/crypto/CipherSpi;Ljava/security/Provider;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,1,"getInstance","(Ljava/lang/String;)Ljavax/crypto/Cipher;")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,2,"getInstance","(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/Cipher;")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,3,"getInstance","(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/Cipher;")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,4,"getProvider","()Ljava/security/Provider;")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,5,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,6,"getBlockSize","()I")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,7,"getOutputSize","(I)I")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,8,"getIV","()[B")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,9,"getParameters","()Ljava/security/AlgorithmParameters;")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,10,"getExemptionMechanism","()Ljavax/crypto/ExemptionMechanism;")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,11,"init","(ILjava/security/Key;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,12,"init","(ILjava/security/Key;Ljava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,13,"init","(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,14,"init","(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,15,"init","(ILjava/security/Key;Ljava/security/AlgorithmParameters;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,16,"init","(ILjava/security/Key;Ljava/security/AlgorithmParameters;Ljava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,17,"init","(ILjava/security/cert/Certificate;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,18,"init","(ILjava/security/cert/Certificate;Ljava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,19,"update","([B)[B")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,20,"update","([BII)[B")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,21,"update","([BII[B)I")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,22,"update","([BII[BI)I")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,23,"update","(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,24,"doFinal","()[B")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,25,"doFinal","([BI)I")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,26,"doFinal","([B)[B")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,27,"doFinal","([BII)[B")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,28,"doFinal","([BII[B)I")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,29,"doFinal","([BII[BI)I")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,30,"doFinal","(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,31,"wrap","(Ljava/security/Key;)[B")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,32,"unwrap","([BLjava/lang/String;I)Ljava/security/Key;")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,33,"getMaxAllowedKeyLength","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(javax::crypto::Cipher,34,"getMaxAllowedParameterSpec","(Ljava/lang/String;)Ljava/security/spec/AlgorithmParameterSpec;")
J2CPP_DEFINE_FIELD(javax::crypto::Cipher,0,"DECRYPT_MODE","I")
J2CPP_DEFINE_FIELD(javax::crypto::Cipher,1,"ENCRYPT_MODE","I")
J2CPP_DEFINE_FIELD(javax::crypto::Cipher,2,"PRIVATE_KEY","I")
J2CPP_DEFINE_FIELD(javax::crypto::Cipher,3,"PUBLIC_KEY","I")
J2CPP_DEFINE_FIELD(javax::crypto::Cipher,4,"SECRET_KEY","I")
J2CPP_DEFINE_FIELD(javax::crypto::Cipher,5,"UNWRAP_MODE","I")
J2CPP_DEFINE_FIELD(javax::crypto::Cipher,6,"WRAP_MODE","I")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_CIPHER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
