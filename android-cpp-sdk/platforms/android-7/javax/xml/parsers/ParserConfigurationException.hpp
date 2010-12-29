/*================================================================================
  code generated by: java2cpp
  class: javax.xml.parsers.ParserConfigurationException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_PARSERS_PARSERCONFIGURATIONEXCEPTION_HPP_DECL
#define J2CPP_JAVAX_XML_PARSERS_PARSERCONFIGURATIONEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/lang/Exception.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace parsers {

	class ParserConfigurationException;
	class ParserConfigurationException
		: public cpp_object<ParserConfigurationException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ParserConfigurationException(jobject jobj)
		: cpp_object<ParserConfigurationException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;


		ParserConfigurationException();
		ParserConfigurationException(local_ref< java::lang::String > const&);
	}; //class ParserConfigurationException

} //namespace parsers
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_PARSERS_PARSERCONFIGURATIONEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_PARSERS_PARSERCONFIGURATIONEXCEPTION_HPP_IMPL
#define J2CPP_JAVAX_XML_PARSERS_PARSERCONFIGURATIONEXCEPTION_HPP_IMPL

namespace j2cpp {



javax::xml::parsers::ParserConfigurationException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jtype());
}


javax::xml::parsers::ParserConfigurationException::ParserConfigurationException()
: cpp_object<javax::xml::parsers::ParserConfigurationException>(
	environment::get().get_jenv()->NewObject(
		get_class<javax::xml::parsers::ParserConfigurationException::J2CPP_CLASS_NAME>(),
		get_method_id<javax::xml::parsers::ParserConfigurationException::J2CPP_CLASS_NAME, javax::xml::parsers::ParserConfigurationException::J2CPP_METHOD_NAME(0), javax::xml::parsers::ParserConfigurationException::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



javax::xml::parsers::ParserConfigurationException::ParserConfigurationException(local_ref< java::lang::String > const &a0)
: cpp_object<javax::xml::parsers::ParserConfigurationException>(
	environment::get().get_jenv()->NewObject(
		get_class<javax::xml::parsers::ParserConfigurationException::J2CPP_CLASS_NAME>(),
		get_method_id<javax::xml::parsers::ParserConfigurationException::J2CPP_CLASS_NAME, javax::xml::parsers::ParserConfigurationException::J2CPP_METHOD_NAME(1), javax::xml::parsers::ParserConfigurationException::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}



J2CPP_DEFINE_CLASS(javax::xml::parsers::ParserConfigurationException,"javax/xml/parsers/ParserConfigurationException")
J2CPP_DEFINE_METHOD(javax::xml::parsers::ParserConfigurationException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::ParserConfigurationException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_PARSERS_PARSERCONFIGURATIONEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION