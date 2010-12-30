/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.IllegalFormatException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ILLEGALFORMATEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_ILLEGALFORMATEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class IllegalArgumentException; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/IllegalArgumentException.hpp>


namespace j2cpp {

namespace java { namespace util {

	class IllegalFormatException;
	class IllegalFormatException
		: public object<IllegalFormatException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit IllegalFormatException(jobject jobj)
		: object<IllegalFormatException>(jobj)
		{
		}

		operator local_ref<java::lang::IllegalArgumentException>() const;
		operator local_ref<java::io::Serializable>() const;


	}; //class IllegalFormatException

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ILLEGALFORMATEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ILLEGALFORMATEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_ILLEGALFORMATEXCEPTION_HPP_IMPL

namespace j2cpp {



java::util::IllegalFormatException::operator local_ref<java::lang::IllegalArgumentException>() const
{
	return local_ref<java::lang::IllegalArgumentException>(get_jobject());
}

java::util::IllegalFormatException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}



J2CPP_DEFINE_CLASS(java::util::IllegalFormatException,"java/util/IllegalFormatException")
J2CPP_DEFINE_METHOD(java::util::IllegalFormatException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ILLEGALFORMATEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
