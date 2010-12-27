/*================================================================================
  code generated by: java2cpp
  class: javax.xml.transform.Result
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_RESULT_HPP_DECL
#define J2CPP_JAVAX_XML_TRANSFORM_RESULT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace transform {

	class Result;
	class Result
		: public cpp_object<Result>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		Result(jobject jobj)
		: cpp_object<Result>(jobj)
		{
		}

		void setSystemId(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getSystemId();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > PI_DISABLE_OUTPUT_ESCAPING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > PI_ENABLE_OUTPUT_ESCAPING;
	}; //class Result

} //namespace transform
} //namespace xml
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_RESULT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_RESULT_HPP_IMPL
#define J2CPP_JAVAX_XML_TRANSFORM_RESULT_HPP_IMPL

namespace j2cpp {


void javax::xml::transform::Result::setSystemId(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > javax::xml::transform::Result::getSystemId()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


static_field<
	javax::xml::transform::Result::J2CPP_CLASS_NAME,
	javax::xml::transform::Result::J2CPP_FIELD_NAME(0),
	javax::xml::transform::Result::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> javax::xml::transform::Result::PI_DISABLE_OUTPUT_ESCAPING;

static_field<
	javax::xml::transform::Result::J2CPP_CLASS_NAME,
	javax::xml::transform::Result::J2CPP_FIELD_NAME(1),
	javax::xml::transform::Result::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> javax::xml::transform::Result::PI_ENABLE_OUTPUT_ESCAPING;


J2CPP_DEFINE_CLASS(javax::xml::transform::Result,"javax/xml/transform/Result")
J2CPP_DEFINE_METHOD(javax::xml::transform::Result,0,"setSystemId","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::Result,1,"getSystemId","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(javax::xml::transform::Result,0,"PI_DISABLE_OUTPUT_ESCAPING","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(javax::xml::transform::Result,1,"PI_ENABLE_OUTPUT_ESCAPING","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_RESULT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
