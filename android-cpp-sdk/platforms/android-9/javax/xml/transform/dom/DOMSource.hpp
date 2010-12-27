/*================================================================================
  code generated by: java2cpp
  class: javax.xml.transform.dom.DOMSource
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_DOM_DOMSOURCE_HPP_DECL
#define J2CPP_JAVAX_XML_TRANSFORM_DOM_DOMSOURCE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Node; } } } }


#include <java/lang/String.hpp>
#include <org/w3c/dom/Node.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace transform { namespace dom {

	class DOMSource;
	class DOMSource
		: public cpp_object<DOMSource>
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
		J2CPP_DECLARE_FIELD(0)

		DOMSource(jobject jobj)
		: cpp_object<DOMSource>(jobj)
		{
		}

		void setNode(local_ref< org::w3c::dom::Node > const&);
		local_ref< org::w3c::dom::Node > getNode();
		void setSystemId(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getSystemId();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > FEATURE;
	}; //class DOMSource

} //namespace dom
} //namespace transform
} //namespace xml
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_DOM_DOMSOURCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_DOM_DOMSOURCE_HPP_IMPL
#define J2CPP_JAVAX_XML_TRANSFORM_DOM_DOMSOURCE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::xml::transform::dom::DOMSource > create< javax::xml::transform::dom::DOMSource>()
{
	return local_ref< javax::xml::transform::dom::DOMSource >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::xml::transform::dom::DOMSource::J2CPP_CLASS_NAME>(),
			get_method_id<javax::xml::transform::dom::DOMSource::J2CPP_CLASS_NAME, javax::xml::transform::dom::DOMSource::J2CPP_METHOD_NAME(0), javax::xml::transform::dom::DOMSource::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< javax::xml::transform::dom::DOMSource > create< javax::xml::transform::dom::DOMSource>(local_ref< org::w3c::dom::Node > const &a0)
{
	return local_ref< javax::xml::transform::dom::DOMSource >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::xml::transform::dom::DOMSource::J2CPP_CLASS_NAME>(),
			get_method_id<javax::xml::transform::dom::DOMSource::J2CPP_CLASS_NAME, javax::xml::transform::dom::DOMSource::J2CPP_METHOD_NAME(1), javax::xml::transform::dom::DOMSource::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< javax::xml::transform::dom::DOMSource > create< javax::xml::transform::dom::DOMSource>(local_ref< org::w3c::dom::Node > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< javax::xml::transform::dom::DOMSource >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::xml::transform::dom::DOMSource::J2CPP_CLASS_NAME>(),
			get_method_id<javax::xml::transform::dom::DOMSource::J2CPP_CLASS_NAME, javax::xml::transform::dom::DOMSource::J2CPP_METHOD_NAME(2), javax::xml::transform::dom::DOMSource::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::xml::transform::dom::DOMSource::setNode(local_ref< org::w3c::dom::Node > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::Node > javax::xml::transform::dom::DOMSource::getNode()
{
	return local_ref< org::w3c::dom::Node >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void javax::xml::transform::dom::DOMSource::setSystemId(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > javax::xml::transform::dom::DOMSource::getSystemId()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}


static_field<
	javax::xml::transform::dom::DOMSource::J2CPP_CLASS_NAME,
	javax::xml::transform::dom::DOMSource::J2CPP_FIELD_NAME(0),
	javax::xml::transform::dom::DOMSource::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> javax::xml::transform::dom::DOMSource::FEATURE;


J2CPP_DEFINE_CLASS(javax::xml::transform::dom::DOMSource,"javax/xml/transform/dom/DOMSource")
J2CPP_DEFINE_METHOD(javax::xml::transform::dom::DOMSource,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::transform::dom::DOMSource,1,"<init>","(Lorg/w3c/dom/Node;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::dom::DOMSource,2,"<init>","(Lorg/w3c/dom/Node;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::dom::DOMSource,3,"setNode","(Lorg/w3c/dom/Node;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::dom::DOMSource,4,"getNode","()Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(javax::xml::transform::dom::DOMSource,5,"setSystemId","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::dom::DOMSource,6,"getSystemId","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(javax::xml::transform::dom::DOMSource,0,"FEATURE","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_DOM_DOMSOURCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
