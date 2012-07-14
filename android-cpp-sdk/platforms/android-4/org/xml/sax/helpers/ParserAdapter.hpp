/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.xml.sax.helpers.ParserAdapter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_HELPERS_PARSERADAPTER_HPP_DECL
#define J2CPP_ORG_XML_SAX_HELPERS_PARSERADAPTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class XMLReader; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class DTDHandler; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class Parser; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class Locator; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class DocumentHandler; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class AttributeList; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class EntityResolver; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class InputSource; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class ContentHandler; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class ErrorHandler; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/xml/sax/AttributeList.hpp>
#include <org/xml/sax/ContentHandler.hpp>
#include <org/xml/sax/DTDHandler.hpp>
#include <org/xml/sax/DocumentHandler.hpp>
#include <org/xml/sax/EntityResolver.hpp>
#include <org/xml/sax/ErrorHandler.hpp>
#include <org/xml/sax/InputSource.hpp>
#include <org/xml/sax/Locator.hpp>
#include <org/xml/sax/Parser.hpp>
#include <org/xml/sax/XMLReader.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax { namespace helpers {

	class ParserAdapter;
	class ParserAdapter
		: public object<ParserAdapter>
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

		explicit ParserAdapter(jobject jobj)
		: object<ParserAdapter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::xml::sax::XMLReader>() const;
		operator local_ref<org::xml::sax::DocumentHandler>() const;


		ParserAdapter();
		ParserAdapter(local_ref< org::xml::sax::Parser > const&);
		void setFeature(local_ref< java::lang::String >  const&, jboolean);
		jboolean getFeature(local_ref< java::lang::String >  const&);
		void setProperty(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > getProperty(local_ref< java::lang::String >  const&);
		void setEntityResolver(local_ref< org::xml::sax::EntityResolver >  const&);
		local_ref< org::xml::sax::EntityResolver > getEntityResolver();
		void setDTDHandler(local_ref< org::xml::sax::DTDHandler >  const&);
		local_ref< org::xml::sax::DTDHandler > getDTDHandler();
		void setContentHandler(local_ref< org::xml::sax::ContentHandler >  const&);
		local_ref< org::xml::sax::ContentHandler > getContentHandler();
		void setErrorHandler(local_ref< org::xml::sax::ErrorHandler >  const&);
		local_ref< org::xml::sax::ErrorHandler > getErrorHandler();
		void parse(local_ref< java::lang::String >  const&);
		void parse(local_ref< org::xml::sax::InputSource >  const&);
		void setDocumentLocator(local_ref< org::xml::sax::Locator >  const&);
		void startDocument();
		void endDocument();
		void startElement(local_ref< java::lang::String >  const&, local_ref< org::xml::sax::AttributeList >  const&);
		void endElement(local_ref< java::lang::String >  const&);
		void characters(local_ref< array<jchar,1> >  const&, jint, jint);
		void ignorableWhitespace(local_ref< array<jchar,1> >  const&, jint, jint);
		void processingInstruction(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
	}; //class ParserAdapter

} //namespace helpers
} //namespace sax
} //namespace xml
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_HELPERS_PARSERADAPTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_HELPERS_PARSERADAPTER_HPP_IMPL
#define J2CPP_ORG_XML_SAX_HELPERS_PARSERADAPTER_HPP_IMPL

namespace j2cpp {



org::xml::sax::helpers::ParserAdapter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::xml::sax::helpers::ParserAdapter::operator local_ref<org::xml::sax::XMLReader>() const
{
	return local_ref<org::xml::sax::XMLReader>(get_jobject());
}

org::xml::sax::helpers::ParserAdapter::operator local_ref<org::xml::sax::DocumentHandler>() const
{
	return local_ref<org::xml::sax::DocumentHandler>(get_jobject());
}


org::xml::sax::helpers::ParserAdapter::ParserAdapter()
: object<org::xml::sax::helpers::ParserAdapter>(
	call_new_object<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(0),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



org::xml::sax::helpers::ParserAdapter::ParserAdapter(local_ref< org::xml::sax::Parser > const &a0)
: object<org::xml::sax::helpers::ParserAdapter>(
	call_new_object<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(1),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


void org::xml::sax::helpers::ParserAdapter::setFeature(local_ref< java::lang::String > const &a0, jboolean a1)
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(2),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1);
}

jboolean org::xml::sax::helpers::ParserAdapter::getFeature(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(3),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0);
}

void org::xml::sax::helpers::ParserAdapter::setProperty(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(4),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > org::xml::sax::helpers::ParserAdapter::getProperty(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(5),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

void org::xml::sax::helpers::ParserAdapter::setEntityResolver(local_ref< org::xml::sax::EntityResolver > const &a0)
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(6),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

local_ref< org::xml::sax::EntityResolver > org::xml::sax::helpers::ParserAdapter::getEntityResolver()
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(7),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< org::xml::sax::EntityResolver >
	>(get_jobject());
}

void org::xml::sax::helpers::ParserAdapter::setDTDHandler(local_ref< org::xml::sax::DTDHandler > const &a0)
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(8),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

local_ref< org::xml::sax::DTDHandler > org::xml::sax::helpers::ParserAdapter::getDTDHandler()
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(9),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< org::xml::sax::DTDHandler >
	>(get_jobject());
}

void org::xml::sax::helpers::ParserAdapter::setContentHandler(local_ref< org::xml::sax::ContentHandler > const &a0)
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(10),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

local_ref< org::xml::sax::ContentHandler > org::xml::sax::helpers::ParserAdapter::getContentHandler()
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(11),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< org::xml::sax::ContentHandler >
	>(get_jobject());
}

void org::xml::sax::helpers::ParserAdapter::setErrorHandler(local_ref< org::xml::sax::ErrorHandler > const &a0)
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(12),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

local_ref< org::xml::sax::ErrorHandler > org::xml::sax::helpers::ParserAdapter::getErrorHandler()
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(13),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< org::xml::sax::ErrorHandler >
	>(get_jobject());
}

void org::xml::sax::helpers::ParserAdapter::parse(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(14),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::helpers::ParserAdapter::parse(local_ref< org::xml::sax::InputSource > const &a0)
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(15),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::helpers::ParserAdapter::setDocumentLocator(local_ref< org::xml::sax::Locator > const &a0)
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(16),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::helpers::ParserAdapter::startDocument()
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(17),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject());
}

void org::xml::sax::helpers::ParserAdapter::endDocument()
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(18),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject());
}

void org::xml::sax::helpers::ParserAdapter::startElement(local_ref< java::lang::String > const &a0, local_ref< org::xml::sax::AttributeList > const &a1)
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(19),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0, a1);
}

void org::xml::sax::helpers::ParserAdapter::endElement(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(20),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::helpers::ParserAdapter::characters(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(21),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(21), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::xml::sax::helpers::ParserAdapter::ignorableWhitespace(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(22),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(22), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::xml::sax::helpers::ParserAdapter::processingInstruction(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xml::sax::helpers::ParserAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_NAME(23),
		org::xml::sax::helpers::ParserAdapter::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::xml::sax::helpers::ParserAdapter,"org/xml/sax/helpers/ParserAdapter")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,1,"<init>","(Lorg/xml/sax/Parser;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,2,"setFeature","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,3,"getFeature","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,4,"setProperty","(Ljava/lang/String;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,5,"getProperty","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,6,"setEntityResolver","(Lorg/xml/sax/EntityResolver;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,7,"getEntityResolver","()Lorg/xml/sax/EntityResolver;")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,8,"setDTDHandler","(Lorg/xml/sax/DTDHandler;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,9,"getDTDHandler","()Lorg/xml/sax/DTDHandler;")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,10,"setContentHandler","(Lorg/xml/sax/ContentHandler;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,11,"getContentHandler","()Lorg/xml/sax/ContentHandler;")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,12,"setErrorHandler","(Lorg/xml/sax/ErrorHandler;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,13,"getErrorHandler","()Lorg/xml/sax/ErrorHandler;")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,14,"parse","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,15,"parse","(Lorg/xml/sax/InputSource;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,16,"setDocumentLocator","(Lorg/xml/sax/Locator;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,17,"startDocument","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,18,"endDocument","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,19,"startElement","(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,20,"endElement","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,21,"characters","([CII)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,22,"ignorableWhitespace","([CII)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::ParserAdapter,23,"processingInstruction","(Ljava/lang/String;Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_HELPERS_PARSERADAPTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION