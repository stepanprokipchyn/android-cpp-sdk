/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.entity.LaxContentLengthStrategy
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_ENTITY_LAXCONTENTLENGTHSTRATEGY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_ENTITY_LAXCONTENTLENGTHSTRATEGY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpMessage; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace entity { class ContentLengthStrategy; } } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpMessage.hpp>
#include <org/apache/http/entity/ContentLengthStrategy.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace entity {

	class LaxContentLengthStrategy;
	class LaxContentLengthStrategy
		: public object<LaxContentLengthStrategy>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit LaxContentLengthStrategy(jobject jobj)
		: object<LaxContentLengthStrategy>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::entity::ContentLengthStrategy>() const;


		LaxContentLengthStrategy();
		jlong determineLength(local_ref< org::apache::http::HttpMessage >  const&);
	}; //class LaxContentLengthStrategy

} //namespace entity
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_ENTITY_LAXCONTENTLENGTHSTRATEGY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_ENTITY_LAXCONTENTLENGTHSTRATEGY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_ENTITY_LAXCONTENTLENGTHSTRATEGY_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::entity::LaxContentLengthStrategy::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::entity::LaxContentLengthStrategy::operator local_ref<org::apache::http::entity::ContentLengthStrategy>() const
{
	return local_ref<org::apache::http::entity::ContentLengthStrategy>(get_jobject());
}


org::apache::http::impl::entity::LaxContentLengthStrategy::LaxContentLengthStrategy()
: object<org::apache::http::impl::entity::LaxContentLengthStrategy>(
	call_new_object<
		org::apache::http::impl::entity::LaxContentLengthStrategy::J2CPP_CLASS_NAME,
		org::apache::http::impl::entity::LaxContentLengthStrategy::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::entity::LaxContentLengthStrategy::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


jlong org::apache::http::impl::entity::LaxContentLengthStrategy::determineLength(local_ref< org::apache::http::HttpMessage > const &a0)
{
	return call_method<
		org::apache::http::impl::entity::LaxContentLengthStrategy::J2CPP_CLASS_NAME,
		org::apache::http::impl::entity::LaxContentLengthStrategy::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::entity::LaxContentLengthStrategy::J2CPP_METHOD_SIGNATURE(1), 
		jlong >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::entity::LaxContentLengthStrategy,"org/apache/http/impl/entity/LaxContentLengthStrategy")
J2CPP_DEFINE_METHOD(org::apache::http::impl::entity::LaxContentLengthStrategy,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::entity::LaxContentLengthStrategy,1,"determineLength","(Lorg/apache/http/HttpMessage;)J")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_ENTITY_LAXCONTENTLENGTHSTRATEGY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
