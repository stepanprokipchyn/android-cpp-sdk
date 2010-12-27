/*================================================================================
  code generated by: java2cpp
  class: javax.crypto.SealedObject
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SEALEDOBJECT_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_SEALEDOBJECT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { class Key; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace javax { namespace crypto { class Cipher; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Key.hpp>
#include <javax/crypto/Cipher.hpp>


namespace j2cpp {

namespace javax { namespace crypto {

	class SealedObject;
	class SealedObject
		: public cpp_object<SealedObject>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_FIELD(0)

		SealedObject(jobject jobj)
		: cpp_object<SealedObject>(jobj)
		{
		}

		local_ref< java::lang::String > getAlgorithm();
		local_ref< java::lang::Object > getObject(local_ref< java::security::Key > const&);
		local_ref< java::lang::Object > getObject(local_ref< javax::crypto::Cipher > const&);
		local_ref< java::lang::Object > getObject(local_ref< java::security::Key > const&, local_ref< java::lang::String > const&);

	}; //class SealedObject

} //namespace crypto
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SEALEDOBJECT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SEALEDOBJECT_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_SEALEDOBJECT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::crypto::SealedObject > create< javax::crypto::SealedObject>(local_ref< java::io::Serializable > const &a0, local_ref< javax::crypto::Cipher > const &a1)
{
	return local_ref< javax::crypto::SealedObject >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::crypto::SealedObject::J2CPP_CLASS_NAME>(),
			get_method_id<javax::crypto::SealedObject::J2CPP_CLASS_NAME, javax::crypto::SealedObject::J2CPP_METHOD_NAME(0), javax::crypto::SealedObject::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< javax::crypto::SealedObject > create< javax::crypto::SealedObject>(local_ref< javax::crypto::SealedObject > const &a0)
{
	return local_ref< javax::crypto::SealedObject >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::crypto::SealedObject::J2CPP_CLASS_NAME>(),
			get_method_id<javax::crypto::SealedObject::J2CPP_CLASS_NAME, javax::crypto::SealedObject::J2CPP_METHOD_NAME(1), javax::crypto::SealedObject::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > javax::crypto::SealedObject::getAlgorithm()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::Object > javax::crypto::SealedObject::getObject(local_ref< java::security::Key > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > javax::crypto::SealedObject::getObject(local_ref< javax::crypto::Cipher > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > javax::crypto::SealedObject::getObject(local_ref< java::security::Key > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(javax::crypto::SealedObject,"javax/crypto/SealedObject")
J2CPP_DEFINE_METHOD(javax::crypto::SealedObject,0,"<init>","(Ljava/io/Serializable;Ljavax/crypto/Cipher;)V")
J2CPP_DEFINE_METHOD(javax::crypto::SealedObject,1,"<init>","(Ljavax/crypto/SealedObject;)V")
J2CPP_DEFINE_METHOD(javax::crypto::SealedObject,2,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::crypto::SealedObject,3,"getObject","(Ljava/security/Key;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(javax::crypto::SealedObject,4,"getObject","(Ljavax/crypto/Cipher;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(javax::crypto::SealedObject,5,"getObject","(Ljava/security/Key;Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(javax::crypto::SealedObject,0,"encodedParams","[B")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SEALEDOBJECT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
