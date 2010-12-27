/*================================================================================
  code generated by: java2cpp
  class: java.security.cert.CertPathBuilderResult
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTPATHBUILDERRESULT_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_CERTPATHBUILDERRESULT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertPath; } } } }


#include <java/lang/Object.hpp>
#include <java/security/cert/CertPath.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class CertPathBuilderResult;
	class CertPathBuilderResult
		: public cpp_object<CertPathBuilderResult>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		CertPathBuilderResult(jobject jobj)
		: cpp_object<CertPathBuilderResult>(jobj)
		{
		}

		local_ref< java::lang::Object > clone();
		local_ref< java::security::cert::CertPath > getCertPath();
	}; //class CertPathBuilderResult

} //namespace cert
} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTPATHBUILDERRESULT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTPATHBUILDERRESULT_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_CERTPATHBUILDERRESULT_HPP_IMPL

namespace j2cpp {


local_ref< java::lang::Object > java::security::cert::CertPathBuilderResult::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::security::cert::CertPath > java::security::cert::CertPathBuilderResult::getCertPath()
{
	return local_ref< java::security::cert::CertPath >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::cert::CertPathBuilderResult,"java/security/cert/CertPathBuilderResult")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathBuilderResult,0,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathBuilderResult,1,"getCertPath","()Ljava/security/cert/CertPath;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTPATHBUILDERRESULT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
