/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.cert.X509CertSelector
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_X509CERTSELECTOR_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_X509CERTSELECTOR_HPP_DECL


namespace j2cpp { namespace javax { namespace security { namespace auth { namespace x500 { class X500Principal; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }
namespace j2cpp { namespace java { namespace security { class PublicKey; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class Certificate; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertSelector; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class X509Certificate; } } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/math/BigInteger.hpp>
#include <java/security/PublicKey.hpp>
#include <java/security/cert/CertSelector.hpp>
#include <java/security/cert/Certificate.hpp>
#include <java/security/cert/X509Certificate.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Date.hpp>
#include <java/util/Set.hpp>
#include <javax/security/auth/x500/X500Principal.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class X509CertSelector;
	class X509CertSelector
		: public object<X509CertSelector>
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
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_METHOD(48)
		J2CPP_DECLARE_METHOD(49)
		J2CPP_DECLARE_METHOD(50)
		J2CPP_DECLARE_METHOD(51)
		J2CPP_DECLARE_METHOD(52)

		explicit X509CertSelector(jobject jobj)
		: object<X509CertSelector>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::cert::CertSelector>() const;


		X509CertSelector();
		void setCertificate(local_ref< java::security::cert::X509Certificate >  const&);
		local_ref< java::security::cert::X509Certificate > getCertificate();
		void setSerialNumber(local_ref< java::math::BigInteger >  const&);
		local_ref< java::math::BigInteger > getSerialNumber();
		void setIssuer(local_ref< javax::security::auth::x500::X500Principal >  const&);
		local_ref< javax::security::auth::x500::X500Principal > getIssuer();
		void setIssuer(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getIssuerAsString();
		void setIssuer(local_ref< array<jbyte,1> >  const&);
		local_ref< array<jbyte,1> > getIssuerAsBytes();
		void setSubject(local_ref< javax::security::auth::x500::X500Principal >  const&);
		local_ref< javax::security::auth::x500::X500Principal > getSubject();
		void setSubject(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getSubjectAsString();
		void setSubject(local_ref< array<jbyte,1> >  const&);
		local_ref< array<jbyte,1> > getSubjectAsBytes();
		void setSubjectKeyIdentifier(local_ref< array<jbyte,1> >  const&);
		local_ref< array<jbyte,1> > getSubjectKeyIdentifier();
		void setAuthorityKeyIdentifier(local_ref< array<jbyte,1> >  const&);
		local_ref< array<jbyte,1> > getAuthorityKeyIdentifier();
		void setCertificateValid(local_ref< java::util::Date >  const&);
		local_ref< java::util::Date > getCertificateValid();
		void setPrivateKeyValid(local_ref< java::util::Date >  const&);
		local_ref< java::util::Date > getPrivateKeyValid();
		void setSubjectPublicKeyAlgID(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getSubjectPublicKeyAlgID();
		void setSubjectPublicKey(local_ref< java::security::PublicKey >  const&);
		void setSubjectPublicKey(local_ref< array<jbyte,1> >  const&);
		local_ref< java::security::PublicKey > getSubjectPublicKey();
		void setKeyUsage(local_ref< array<jboolean,1> >  const&);
		local_ref< array<jboolean,1> > getKeyUsage();
		void setExtendedKeyUsage(local_ref< java::util::Set >  const&);
		local_ref< java::util::Set > getExtendedKeyUsage();
		void setMatchAllSubjectAltNames(jboolean);
		jboolean getMatchAllSubjectAltNames();
		void setSubjectAlternativeNames(local_ref< java::util::Collection >  const&);
		void addSubjectAlternativeName(jint, local_ref< java::lang::String >  const&);
		void addSubjectAlternativeName(jint, local_ref< array<jbyte,1> >  const&);
		local_ref< java::util::Collection > getSubjectAlternativeNames();
		void setNameConstraints(local_ref< array<jbyte,1> >  const&);
		local_ref< array<jbyte,1> > getNameConstraints();
		void setBasicConstraints(jint);
		jint getBasicConstraints();
		void setPolicy(local_ref< java::util::Set >  const&);
		local_ref< java::util::Set > getPolicy();
		void setPathToNames(local_ref< java::util::Collection >  const&);
		void addPathToName(jint, local_ref< java::lang::String >  const&);
		void addPathToName(jint, local_ref< array<jbyte,1> >  const&);
		local_ref< java::util::Collection > getPathToNames();
		local_ref< java::lang::String > toString();
		jboolean match(local_ref< java::security::cert::Certificate >  const&);
		local_ref< java::lang::Object > clone();
	}; //class X509CertSelector

} //namespace cert
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_X509CERTSELECTOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_X509CERTSELECTOR_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_X509CERTSELECTOR_HPP_IMPL

namespace j2cpp {



java::security::cert::X509CertSelector::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::cert::X509CertSelector::operator local_ref<java::security::cert::CertSelector>() const
{
	return local_ref<java::security::cert::CertSelector>(get_jobject());
}


java::security::cert::X509CertSelector::X509CertSelector()
: object<java::security::cert::X509CertSelector>(
	call_new_object<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(0),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void java::security::cert::X509CertSelector::setCertificate(local_ref< java::security::cert::X509Certificate > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(1),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}

local_ref< java::security::cert::X509Certificate > java::security::cert::X509CertSelector::getCertificate()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(2),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::security::cert::X509Certificate > >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setSerialNumber(local_ref< java::math::BigInteger > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(3),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

local_ref< java::math::BigInteger > java::security::cert::X509CertSelector::getSerialNumber()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(4),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::math::BigInteger > >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setIssuer(local_ref< javax::security::auth::x500::X500Principal > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(5),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

local_ref< javax::security::auth::x500::X500Principal > java::security::cert::X509CertSelector::getIssuer()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(6),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< javax::security::auth::x500::X500Principal > >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setIssuer(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(7),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::security::cert::X509CertSelector::getIssuerAsString()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(8),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setIssuer(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(9),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0);
}

local_ref< array<jbyte,1> > java::security::cert::X509CertSelector::getIssuerAsBytes()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(10),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setSubject(local_ref< javax::security::auth::x500::X500Principal > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(11),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}

local_ref< javax::security::auth::x500::X500Principal > java::security::cert::X509CertSelector::getSubject()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(12),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< javax::security::auth::x500::X500Principal > >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setSubject(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(13),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::security::cert::X509CertSelector::getSubjectAsString()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(14),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setSubject(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(15),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0);
}

local_ref< array<jbyte,1> > java::security::cert::X509CertSelector::getSubjectAsBytes()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(16),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setSubjectKeyIdentifier(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(17),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0);
}

local_ref< array<jbyte,1> > java::security::cert::X509CertSelector::getSubjectKeyIdentifier()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(18),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setAuthorityKeyIdentifier(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(19),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0);
}

local_ref< array<jbyte,1> > java::security::cert::X509CertSelector::getAuthorityKeyIdentifier()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(20),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setCertificateValid(local_ref< java::util::Date > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(21),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(21), 
		void >
	(get_jobject(), a0);
}

local_ref< java::util::Date > java::security::cert::X509CertSelector::getCertificateValid()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(22),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< java::util::Date > >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setPrivateKeyValid(local_ref< java::util::Date > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(23),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(23), 
		void >
	(get_jobject(), a0);
}

local_ref< java::util::Date > java::security::cert::X509CertSelector::getPrivateKeyValid()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(24),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< java::util::Date > >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setSubjectPublicKeyAlgID(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(25),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(25), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::security::cert::X509CertSelector::getSubjectPublicKeyAlgID()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(26),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(26), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setSubjectPublicKey(local_ref< java::security::PublicKey > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(27),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(27), 
		void >
	(get_jobject(), a0);
}

void java::security::cert::X509CertSelector::setSubjectPublicKey(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(28),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(28), 
		void >
	(get_jobject(), a0);
}

local_ref< java::security::PublicKey > java::security::cert::X509CertSelector::getSubjectPublicKey()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(29),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(29), 
		local_ref< java::security::PublicKey > >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setKeyUsage(local_ref< array<jboolean,1> > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(30),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(30), 
		void >
	(get_jobject(), a0);
}

local_ref< array<jboolean,1> > java::security::cert::X509CertSelector::getKeyUsage()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(31),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(31), 
		local_ref< array<jboolean,1> > >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setExtendedKeyUsage(local_ref< java::util::Set > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(32),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(32), 
		void >
	(get_jobject(), a0);
}

local_ref< java::util::Set > java::security::cert::X509CertSelector::getExtendedKeyUsage()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(33),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(33), 
		local_ref< java::util::Set > >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setMatchAllSubjectAltNames(jboolean a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(34),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(34), 
		void >
	(get_jobject(), a0);
}

jboolean java::security::cert::X509CertSelector::getMatchAllSubjectAltNames()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(35),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(35), 
		jboolean >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setSubjectAlternativeNames(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(36),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(36), 
		void >
	(get_jobject(), a0);
}

void java::security::cert::X509CertSelector::addSubjectAlternativeName(jint a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(37),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(37), 
		void >
	(get_jobject(), a0, a1);
}

void java::security::cert::X509CertSelector::addSubjectAlternativeName(jint a0, local_ref< array<jbyte,1> > const &a1)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(38),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(38), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< java::util::Collection > java::security::cert::X509CertSelector::getSubjectAlternativeNames()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(39),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(39), 
		local_ref< java::util::Collection > >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setNameConstraints(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(40),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(40), 
		void >
	(get_jobject(), a0);
}

local_ref< array<jbyte,1> > java::security::cert::X509CertSelector::getNameConstraints()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(41),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(41), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setBasicConstraints(jint a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(42),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(42), 
		void >
	(get_jobject(), a0);
}

jint java::security::cert::X509CertSelector::getBasicConstraints()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(43),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(43), 
		jint >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setPolicy(local_ref< java::util::Set > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(44),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(44), 
		void >
	(get_jobject(), a0);
}

local_ref< java::util::Set > java::security::cert::X509CertSelector::getPolicy()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(45),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(45), 
		local_ref< java::util::Set > >
	(get_jobject());
}

void java::security::cert::X509CertSelector::setPathToNames(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(46),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(46), 
		void >
	(get_jobject(), a0);
}

void java::security::cert::X509CertSelector::addPathToName(jint a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(47),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(47), 
		void >
	(get_jobject(), a0, a1);
}

void java::security::cert::X509CertSelector::addPathToName(jint a0, local_ref< array<jbyte,1> > const &a1)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(48),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(48), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< java::util::Collection > java::security::cert::X509CertSelector::getPathToNames()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(49),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(49), 
		local_ref< java::util::Collection > >
	(get_jobject());
}

local_ref< java::lang::String > java::security::cert::X509CertSelector::toString()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(50),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(50), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jboolean java::security::cert::X509CertSelector::match(local_ref< java::security::cert::Certificate > const &a0)
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(51),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(51), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::security::cert::X509CertSelector::clone()
{
	return call_method<
		java::security::cert::X509CertSelector::J2CPP_CLASS_NAME,
		java::security::cert::X509CertSelector::J2CPP_METHOD_NAME(52),
		java::security::cert::X509CertSelector::J2CPP_METHOD_SIGNATURE(52), 
		local_ref< java::lang::Object > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::cert::X509CertSelector,"java/security/cert/X509CertSelector")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,1,"setCertificate","(Ljava/security/cert/X509Certificate;)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,2,"getCertificate","()Ljava/security/cert/X509Certificate;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,3,"setSerialNumber","(Ljava/math/BigInteger;)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,4,"getSerialNumber","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,5,"setIssuer","(Ljavax/security/auth/x500/X500Principal;)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,6,"getIssuer","()Ljavax/security/auth/x500/X500Principal;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,7,"setIssuer","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,8,"getIssuerAsString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,9,"setIssuer","([B)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,10,"getIssuerAsBytes","()[B")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,11,"setSubject","(Ljavax/security/auth/x500/X500Principal;)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,12,"getSubject","()Ljavax/security/auth/x500/X500Principal;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,13,"setSubject","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,14,"getSubjectAsString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,15,"setSubject","([B)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,16,"getSubjectAsBytes","()[B")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,17,"setSubjectKeyIdentifier","([B)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,18,"getSubjectKeyIdentifier","()[B")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,19,"setAuthorityKeyIdentifier","([B)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,20,"getAuthorityKeyIdentifier","()[B")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,21,"setCertificateValid","(Ljava/util/Date;)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,22,"getCertificateValid","()Ljava/util/Date;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,23,"setPrivateKeyValid","(Ljava/util/Date;)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,24,"getPrivateKeyValid","()Ljava/util/Date;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,25,"setSubjectPublicKeyAlgID","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,26,"getSubjectPublicKeyAlgID","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,27,"setSubjectPublicKey","(Ljava/security/PublicKey;)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,28,"setSubjectPublicKey","([B)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,29,"getSubjectPublicKey","()Ljava/security/PublicKey;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,30,"setKeyUsage","([Z)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,31,"getKeyUsage","()[Z")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,32,"setExtendedKeyUsage","(Ljava/util/Set;)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,33,"getExtendedKeyUsage","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,34,"setMatchAllSubjectAltNames","(Z)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,35,"getMatchAllSubjectAltNames","()Z")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,36,"setSubjectAlternativeNames","(Ljava/util/Collection;)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,37,"addSubjectAlternativeName","(ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,38,"addSubjectAlternativeName","(I[B)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,39,"getSubjectAlternativeNames","()Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,40,"setNameConstraints","([B)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,41,"getNameConstraints","()[B")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,42,"setBasicConstraints","(I)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,43,"getBasicConstraints","()I")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,44,"setPolicy","(Ljava/util/Set;)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,45,"getPolicy","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,46,"setPathToNames","(Ljava/util/Collection;)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,47,"addPathToName","(ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,48,"addPathToName","(I[B)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,49,"getPathToNames","()Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,50,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,51,"match","(Ljava/security/cert/Certificate;)Z")
J2CPP_DEFINE_METHOD(java::security::cert::X509CertSelector,52,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_X509CERTSELECTOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
