/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.message.BasicHeader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HeaderElement; } } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/HeaderElement.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class BasicHeader;
	class BasicHeader
		: public object<BasicHeader>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit BasicHeader(jobject jobj)
		: object<BasicHeader>(jobj)
		{
		}

		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::Header>() const;


		BasicHeader(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getName();
		local_ref< java::lang::String > getValue();
		local_ref< java::lang::String > toString();
		local_ref< array< local_ref< org::apache::http::HeaderElement >, 1> > getElements();
		local_ref< java::lang::Object > clone();
	}; //class BasicHeader

} //namespace message
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADER_HPP_IMPL

namespace j2cpp {



org::apache::http::message::BasicHeader::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

org::apache::http::message::BasicHeader::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::message::BasicHeader::operator local_ref<org::apache::http::Header>() const
{
	return local_ref<org::apache::http::Header>(get_jobject());
}


org::apache::http::message::BasicHeader::BasicHeader(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<org::apache::http::message::BasicHeader>(
	call_new_object<
		org::apache::http::message::BasicHeader::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeader::J2CPP_METHOD_NAME(0),
		org::apache::http::message::BasicHeader::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


local_ref< java::lang::String > org::apache::http::message::BasicHeader::getName()
{
	return call_method<
		org::apache::http::message::BasicHeader::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeader::J2CPP_METHOD_NAME(1),
		org::apache::http::message::BasicHeader::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::message::BasicHeader::getValue()
{
	return call_method<
		org::apache::http::message::BasicHeader::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeader::J2CPP_METHOD_NAME(2),
		org::apache::http::message::BasicHeader::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::message::BasicHeader::toString()
{
	return call_method<
		org::apache::http::message::BasicHeader::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeader::J2CPP_METHOD_NAME(3),
		org::apache::http::message::BasicHeader::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< array< local_ref< org::apache::http::HeaderElement >, 1> > org::apache::http::message::BasicHeader::getElements()
{
	return call_method<
		org::apache::http::message::BasicHeader::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeader::J2CPP_METHOD_NAME(4),
		org::apache::http::message::BasicHeader::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< array< local_ref< org::apache::http::HeaderElement >, 1> >
	>(get_jobject());
}

local_ref< java::lang::Object > org::apache::http::message::BasicHeader::clone()
{
	return call_method<
		org::apache::http::message::BasicHeader::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeader::J2CPP_METHOD_NAME(5),
		org::apache::http::message::BasicHeader::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::Object >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::message::BasicHeader,"org/apache/http/message/BasicHeader")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeader,0,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeader,1,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeader,2,"getValue","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeader,3,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeader,4,"getElements","()[org.apache.http.HeaderElement")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeader,5,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
