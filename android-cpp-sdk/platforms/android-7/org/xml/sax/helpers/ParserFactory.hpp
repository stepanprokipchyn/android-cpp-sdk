/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.xml.sax.helpers.ParserFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_HELPERS_PARSERFACTORY_HPP_DECL
#define J2CPP_ORG_XML_SAX_HELPERS_PARSERFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class Parser; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/xml/sax/Parser.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax { namespace helpers {

	class ParserFactory;
	class ParserFactory
		: public object<ParserFactory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit ParserFactory(jobject jobj)
		: object<ParserFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< org::xml::sax::Parser > makeParser();
		static local_ref< org::xml::sax::Parser > makeParser(local_ref< java::lang::String >  const&);
	}; //class ParserFactory

} //namespace helpers
} //namespace sax
} //namespace xml
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_HELPERS_PARSERFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_HELPERS_PARSERFACTORY_HPP_IMPL
#define J2CPP_ORG_XML_SAX_HELPERS_PARSERFACTORY_HPP_IMPL

namespace j2cpp {



org::xml::sax::helpers::ParserFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< org::xml::sax::Parser > org::xml::sax::helpers::ParserFactory::makeParser()
{
	return call_static_method<
		org::xml::sax::helpers::ParserFactory::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserFactory::J2CPP_METHOD_NAME(1),
		org::xml::sax::helpers::ParserFactory::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::xml::sax::Parser > >
	();
}

local_ref< org::xml::sax::Parser > org::xml::sax::helpers::ParserFactory::makeParser(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		org::xml::sax::helpers::ParserFactory::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserFactory::J2CPP_METHOD_NAME(2),
		org::xml::sax::helpers::ParserFactory::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< org::xml::sax::Parser > >
	(a0);
}


J2CPP_DEFINE_CLASS(org::xml::sax::helpers::ParserFactory,"org/xml/sax/helpers/ParserFactory")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserFactory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserFactory,1,"makeParser","()Lorg/xml/sax/Parser;")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserFactory,2,"makeParser","(Ljava/lang/String;)Lorg/xml/sax/Parser;")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_HELPERS_PARSERFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
