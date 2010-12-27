/*================================================================================
  code generated by: java2cpp
  class: javax.xml.transform.TransformerFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORY_HPP_DECL
#define J2CPP_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class URIResolver; } } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class ErrorListener; } } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class Transformer; } } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class Source; } } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class Templates; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/xml/transform/ErrorListener.hpp>
#include <javax/xml/transform/Source.hpp>
#include <javax/xml/transform/Templates.hpp>
#include <javax/xml/transform/Transformer.hpp>
#include <javax/xml/transform/URIResolver.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace transform {

	class TransformerFactory;
	class TransformerFactory
		: public cpp_object<TransformerFactory>
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

		TransformerFactory(jobject jobj)
		: cpp_object<TransformerFactory>(jobj)
		{
		}

		static local_ref< javax::xml::transform::TransformerFactory > newInstance();
		local_ref< javax::xml::transform::Transformer > newTransformer(local_ref< javax::xml::transform::Source > const&);
		local_ref< javax::xml::transform::Transformer > newTransformer();
		local_ref< javax::xml::transform::Templates > newTemplates(local_ref< javax::xml::transform::Source > const&);
		local_ref< javax::xml::transform::Source > getAssociatedStylesheet(local_ref< javax::xml::transform::Source > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		void setURIResolver(local_ref< javax::xml::transform::URIResolver > const&);
		local_ref< javax::xml::transform::URIResolver > getURIResolver();
		void setFeature(local_ref< java::lang::String > const&, cpp_boolean const&);
		cpp_boolean getFeature(local_ref< java::lang::String > const&);
		void setAttribute(local_ref< java::lang::String > const&, local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > getAttribute(local_ref< java::lang::String > const&);
		void setErrorListener(local_ref< javax::xml::transform::ErrorListener > const&);
		local_ref< javax::xml::transform::ErrorListener > getErrorListener();
	}; //class TransformerFactory

} //namespace transform
} //namespace xml
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORY_HPP_IMPL
#define J2CPP_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORY_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::xml::transform::TransformerFactory > create< javax::xml::transform::TransformerFactory>()
{
	return local_ref< javax::xml::transform::TransformerFactory >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::xml::transform::TransformerFactory::J2CPP_CLASS_NAME>(),
			get_method_id<javax::xml::transform::TransformerFactory::J2CPP_CLASS_NAME, javax::xml::transform::TransformerFactory::J2CPP_METHOD_NAME(0), javax::xml::transform::TransformerFactory::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< javax::xml::transform::TransformerFactory > javax::xml::transform::TransformerFactory::newInstance()
{
	return local_ref< javax::xml::transform::TransformerFactory >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

local_ref< javax::xml::transform::Transformer > javax::xml::transform::TransformerFactory::newTransformer(local_ref< javax::xml::transform::Source > const &a0)
{
	return local_ref< javax::xml::transform::Transformer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< javax::xml::transform::Transformer > javax::xml::transform::TransformerFactory::newTransformer()
{
	return local_ref< javax::xml::transform::Transformer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< javax::xml::transform::Templates > javax::xml::transform::TransformerFactory::newTemplates(local_ref< javax::xml::transform::Source > const &a0)
{
	return local_ref< javax::xml::transform::Templates >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< javax::xml::transform::Source > javax::xml::transform::TransformerFactory::getAssociatedStylesheet(local_ref< javax::xml::transform::Source > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3)
{
	return local_ref< javax::xml::transform::Source >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void javax::xml::transform::TransformerFactory::setURIResolver(local_ref< javax::xml::transform::URIResolver > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< javax::xml::transform::URIResolver > javax::xml::transform::TransformerFactory::getURIResolver()
{
	return local_ref< javax::xml::transform::URIResolver >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void javax::xml::transform::TransformerFactory::setFeature(local_ref< java::lang::String > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean javax::xml::transform::TransformerFactory::getFeature(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

void javax::xml::transform::TransformerFactory::setAttribute(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::Object > javax::xml::transform::TransformerFactory::getAttribute(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

void javax::xml::transform::TransformerFactory::setErrorListener(local_ref< javax::xml::transform::ErrorListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< javax::xml::transform::ErrorListener > javax::xml::transform::TransformerFactory::getErrorListener()
{
	return local_ref< javax::xml::transform::ErrorListener >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::xml::transform::TransformerFactory,"javax/xml/transform/TransformerFactory")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,1,"newInstance","()Ljavax/xml/transform/TransformerFactory;")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,2,"newTransformer","(Ljavax/xml/transform/Source;)Ljavax/xml/transform/Transformer;")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,3,"newTransformer","()Ljavax/xml/transform/Transformer;")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,4,"newTemplates","(Ljavax/xml/transform/Source;)Ljavax/xml/transform/Templates;")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,5,"getAssociatedStylesheet","(Ljavax/xml/transform/Source;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/transform/Source;")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,6,"setURIResolver","(Ljavax/xml/transform/URIResolver;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,7,"getURIResolver","()Ljavax/xml/transform/URIResolver;")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,8,"setFeature","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,9,"getFeature","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,10,"setAttribute","(Ljava/lang/String;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,11,"getAttribute","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,12,"setErrorListener","(Ljavax/xml/transform/ErrorListener;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,13,"getErrorListener","()Ljavax/xml/transform/ErrorListener;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
