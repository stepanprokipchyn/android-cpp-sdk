/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.cert.X509Certificate
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_X509CERTIFICATE_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_X509CERTIFICATE_HPP_DECL


namespace j2cpp { namespace javax { namespace security { namespace auth { namespace x500 { class X500Principal; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }
namespace j2cpp { namespace java { namespace security { class Principal; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class X509Extension; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class Certificate; } } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <java/lang/String.hpp>
#include <java/math/BigInteger.hpp>
#include <java/security/Principal.hpp>
#include <java/security/cert/Certificate.hpp>
#include <java/security/cert/X509Extension.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Date.hpp>
#include <java/util/List.hpp>
#include <javax/security/auth/x500/X500Principal.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class X509Certificate;
	class X509Certificate
		: public object<X509Certificate>
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

		explicit X509Certificate(jobject jobj)
		: object<X509Certificate>(jobj)
		{
		}

		operator local_ref<java::security::cert::Certificate>() const;
		operator local_ref<java::security::cert::X509Extension>() const;


		void checkValidity();
		void checkValidity(local_ref< java::util::Date >  const&);
		jint getVersion();
		local_ref< java::math::BigInteger > getSerialNumber();
		local_ref< java::security::Principal > getIssuerDN();
		local_ref< javax::security::auth::x500::X500Principal > getIssuerX500Principal();
		local_ref< java::security::Principal > getSubjectDN();
		local_ref< javax::security::auth::x500::X500Principal > getSubjectX500Principal();
		local_ref< java::util::Date > getNotBefore();
		local_ref< java::util::Date > getNotAfter();
		local_ref< array<jbyte,1> > getTBSCertificate();
		local_ref< array<jbyte,1> > getSignature();
		local_ref< java::lang::String > getSigAlgName();
		local_ref< java::lang::String > getSigAlgOID();
		local_ref< array<jbyte,1> > getSigAlgParams();
		local_ref< array<jboolean,1> > getIssuerUniqueID();
		local_ref< array<jboolean,1> > getSubjectUniqueID();
		local_ref< array<jboolean,1> > getKeyUsage();
		local_ref< java::util::List > getExtendedKeyUsage();
		jint getBasicConstraints();
		local_ref< java::util::Collection > getSubjectAlternativeNames();
		local_ref< java::util::Collection > getIssuerAlternativeNames();
	}; //class X509Certificate

} //namespace cert
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_X509CERTIFICATE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_X509CERTIFICATE_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_X509CERTIFICATE_HPP_IMPL

namespace j2cpp {



java::security::cert::X509Certificate::operator local_ref<java::security::cert::Certificate>() const
{
	return local_ref<java::security::cert::Certificate>(get_jobject());
}

java::security::cert::X509Certificate::operator local_ref<java::security::cert::X509Extension>() const
{
	return local_ref<java::security::cert::X509Extension>(get_jobject());
}


void java::security::cert::X509Certificate::checkValidity()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(1),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject());
}

void java::security::cert::X509Certificate::checkValidity(local_ref< java::util::Date > const &a0)
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(2),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}

jint java::security::cert::X509Certificate::getVersion()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(3),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

local_ref< java::math::BigInteger > java::security::cert::X509Certificate::getSerialNumber()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(4),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::math::BigInteger > >
	(get_jobject());
}

local_ref< java::security::Principal > java::security::cert::X509Certificate::getIssuerDN()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(5),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::security::Principal > >
	(get_jobject());
}

local_ref< javax::security::auth::x500::X500Principal > java::security::cert::X509Certificate::getIssuerX500Principal()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(6),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< javax::security::auth::x500::X500Principal > >
	(get_jobject());
}

local_ref< java::security::Principal > java::security::cert::X509Certificate::getSubjectDN()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(7),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::security::Principal > >
	(get_jobject());
}

local_ref< javax::security::auth::x500::X500Principal > java::security::cert::X509Certificate::getSubjectX500Principal()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(8),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< javax::security::auth::x500::X500Principal > >
	(get_jobject());
}

local_ref< java::util::Date > java::security::cert::X509Certificate::getNotBefore()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(9),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::util::Date > >
	(get_jobject());
}

local_ref< java::util::Date > java::security::cert::X509Certificate::getNotAfter()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(10),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::util::Date > >
	(get_jobject());
}

local_ref< array<jbyte,1> > java::security::cert::X509Certificate::getTBSCertificate()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(11),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

local_ref< array<jbyte,1> > java::security::cert::X509Certificate::getSignature()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(12),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

local_ref< java::lang::String > java::security::cert::X509Certificate::getSigAlgName()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(13),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > java::security::cert::X509Certificate::getSigAlgOID()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(14),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< array<jbyte,1> > java::security::cert::X509Certificate::getSigAlgParams()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(15),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

local_ref< array<jboolean,1> > java::security::cert::X509Certificate::getIssuerUniqueID()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(16),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< array<jboolean,1> > >
	(get_jobject());
}

local_ref< array<jboolean,1> > java::security::cert::X509Certificate::getSubjectUniqueID()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(17),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< array<jboolean,1> > >
	(get_jobject());
}

local_ref< array<jboolean,1> > java::security::cert::X509Certificate::getKeyUsage()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(18),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< array<jboolean,1> > >
	(get_jobject());
}

local_ref< java::util::List > java::security::cert::X509Certificate::getExtendedKeyUsage()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(19),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::util::List > >
	(get_jobject());
}

jint java::security::cert::X509Certificate::getBasicConstraints()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(20),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(20), 
		jint >
	(get_jobject());
}

local_ref< java::util::Collection > java::security::cert::X509Certificate::getSubjectAlternativeNames()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(21),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::util::Collection > >
	(get_jobject());
}

local_ref< java::util::Collection > java::security::cert::X509Certificate::getIssuerAlternativeNames()
{
	return call_method<
		java::security::cert::X509Certificate::J2CPP_CLASS_NAME,
		java::security::cert::X509Certificate::J2CPP_METHOD_NAME(22),
		java::security::cert::X509Certificate::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< java::util::Collection > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::cert::X509Certificate,"java/security/cert/X509Certificate")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,1,"checkValidity","()V")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,2,"checkValidity","(Ljava/util/Date;)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,3,"getVersion","()I")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,4,"getSerialNumber","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,5,"getIssuerDN","()Ljava/security/Principal;")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,6,"getIssuerX500Principal","()Ljavax/security/auth/x500/X500Principal;")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,7,"getSubjectDN","()Ljava/security/Principal;")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,8,"getSubjectX500Principal","()Ljavax/security/auth/x500/X500Principal;")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,9,"getNotBefore","()Ljava/util/Date;")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,10,"getNotAfter","()Ljava/util/Date;")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,11,"getTBSCertificate","()[B")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,12,"getSignature","()[B")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,13,"getSigAlgName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,14,"getSigAlgOID","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,15,"getSigAlgParams","()[B")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,16,"getIssuerUniqueID","()[Z")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,17,"getSubjectUniqueID","()[Z")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,18,"getKeyUsage","()[Z")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,19,"getExtendedKeyUsage","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,20,"getBasicConstraints","()I")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,21,"getSubjectAlternativeNames","()Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::security::cert::X509Certificate,22,"getIssuerAlternativeNames","()Ljava/util/Collection;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_X509CERTIFICATE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
