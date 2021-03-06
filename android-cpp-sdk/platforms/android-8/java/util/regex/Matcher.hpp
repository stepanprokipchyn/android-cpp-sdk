/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.regex.Matcher
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_REGEX_MATCHER_HPP_DECL
#define J2CPP_JAVA_UTIL_REGEX_MATCHER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class StringBuffer; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { namespace regex { class Pattern; } } } }
namespace j2cpp { namespace java { namespace util { namespace regex { class MatchResult; } } } }


#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/util/regex/MatchResult.hpp>
#include <java/util/regex/Pattern.hpp>


namespace j2cpp {

namespace java { namespace util { namespace regex {

	class Matcher;
	class Matcher
		: public object<Matcher>
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
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)

		explicit Matcher(jobject jobj)
		: object<Matcher>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::regex::MatchResult>() const;


		local_ref< java::util::regex::Matcher > appendReplacement(local_ref< java::lang::StringBuffer >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::util::regex::Matcher > reset(local_ref< java::lang::CharSequence >  const&);
		local_ref< java::util::regex::Matcher > reset();
		local_ref< java::util::regex::Matcher > region(jint, jint);
		local_ref< java::lang::StringBuffer > appendTail(local_ref< java::lang::StringBuffer >  const&);
		local_ref< java::lang::String > replaceFirst(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > replaceAll(local_ref< java::lang::String >  const&);
		local_ref< java::util::regex::Pattern > pattern();
		local_ref< java::lang::String > group(jint);
		local_ref< java::lang::String > group();
		jboolean find(jint);
		jboolean find();
		jint start(jint);
		jint end(jint);
		jboolean matches();
		static local_ref< java::lang::String > quoteReplacement(local_ref< java::lang::String >  const&);
		jboolean lookingAt();
		jint start();
		jint groupCount();
		jint end();
		local_ref< java::util::regex::MatchResult > toMatchResult();
		local_ref< java::util::regex::Matcher > useAnchoringBounds(jboolean);
		jboolean hasAnchoringBounds();
		local_ref< java::util::regex::Matcher > useTransparentBounds(jboolean);
		jboolean hasTransparentBounds();
		jint regionStart();
		jint regionEnd();
		jboolean requireEnd();
		jboolean hitEnd();
		local_ref< java::util::regex::Matcher > usePattern(local_ref< java::util::regex::Pattern >  const&);
	}; //class Matcher

} //namespace regex
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_REGEX_MATCHER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_REGEX_MATCHER_HPP_IMPL
#define J2CPP_JAVA_UTIL_REGEX_MATCHER_HPP_IMPL

namespace j2cpp {



java::util::regex::Matcher::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::regex::Matcher::operator local_ref<java::util::regex::MatchResult>() const
{
	return local_ref<java::util::regex::MatchResult>(get_jobject());
}


local_ref< java::util::regex::Matcher > java::util::regex::Matcher::appendReplacement(local_ref< java::lang::StringBuffer > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(1),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::regex::Matcher >
	>(get_jobject(), a0, a1);
}

local_ref< java::util::regex::Matcher > java::util::regex::Matcher::reset(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(2),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::regex::Matcher >
	>(get_jobject(), a0);
}

local_ref< java::util::regex::Matcher > java::util::regex::Matcher::reset()
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(3),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::regex::Matcher >
	>(get_jobject());
}

local_ref< java::util::regex::Matcher > java::util::regex::Matcher::region(jint a0, jint a1)
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(4),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::regex::Matcher >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuffer > java::util::regex::Matcher::appendTail(local_ref< java::lang::StringBuffer > const &a0)
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(5),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::StringBuffer >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::regex::Matcher::replaceFirst(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(6),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::regex::Matcher::replaceAll(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(7),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::util::regex::Pattern > java::util::regex::Matcher::pattern()
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(8),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::util::regex::Pattern >
	>(get_jobject());
}

local_ref< java::lang::String > java::util::regex::Matcher::group(jint a0)
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(9),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::regex::Matcher::group()
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(10),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jboolean java::util::regex::Matcher::find(jint a0)
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(11),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::regex::Matcher::find()
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(12),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(get_jobject());
}

jint java::util::regex::Matcher::start(jint a0)
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(13),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(13), 
		jint
	>(get_jobject(), a0);
}

jint java::util::regex::Matcher::end(jint a0)
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(14),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(14), 
		jint
	>(get_jobject(), a0);
}

jboolean java::util::regex::Matcher::matches()
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(15),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(15), 
		jboolean
	>(get_jobject());
}

local_ref< java::lang::String > java::util::regex::Matcher::quoteReplacement(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(16),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::String >
	>(a0);
}

jboolean java::util::regex::Matcher::lookingAt()
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(17),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(17), 
		jboolean
	>(get_jobject());
}

jint java::util::regex::Matcher::start()
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(18),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(18), 
		jint
	>(get_jobject());
}

jint java::util::regex::Matcher::groupCount()
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(19),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(19), 
		jint
	>(get_jobject());
}

jint java::util::regex::Matcher::end()
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(20),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(20), 
		jint
	>(get_jobject());
}

local_ref< java::util::regex::MatchResult > java::util::regex::Matcher::toMatchResult()
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(21),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::util::regex::MatchResult >
	>(get_jobject());
}

local_ref< java::util::regex::Matcher > java::util::regex::Matcher::useAnchoringBounds(jboolean a0)
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(22),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< java::util::regex::Matcher >
	>(get_jobject(), a0);
}

jboolean java::util::regex::Matcher::hasAnchoringBounds()
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(23),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(23), 
		jboolean
	>(get_jobject());
}

local_ref< java::util::regex::Matcher > java::util::regex::Matcher::useTransparentBounds(jboolean a0)
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(24),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< java::util::regex::Matcher >
	>(get_jobject(), a0);
}

jboolean java::util::regex::Matcher::hasTransparentBounds()
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(25),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(25), 
		jboolean
	>(get_jobject());
}

jint java::util::regex::Matcher::regionStart()
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(26),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(26), 
		jint
	>(get_jobject());
}

jint java::util::regex::Matcher::regionEnd()
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(27),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(27), 
		jint
	>(get_jobject());
}

jboolean java::util::regex::Matcher::requireEnd()
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(28),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(28), 
		jboolean
	>(get_jobject());
}

jboolean java::util::regex::Matcher::hitEnd()
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(29),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(29), 
		jboolean
	>(get_jobject());
}

local_ref< java::util::regex::Matcher > java::util::regex::Matcher::usePattern(local_ref< java::util::regex::Pattern > const &a0)
{
	return call_method<
		java::util::regex::Matcher::J2CPP_CLASS_NAME,
		java::util::regex::Matcher::J2CPP_METHOD_NAME(30),
		java::util::regex::Matcher::J2CPP_METHOD_SIGNATURE(30), 
		local_ref< java::util::regex::Matcher >
	>(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(java::util::regex::Matcher,"java/util/regex/Matcher")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,1,"appendReplacement","(Ljava/lang/StringBuffer;Ljava/lang/String;)Ljava/util/regex/Matcher;")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,2,"reset","(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,3,"reset","()Ljava/util/regex/Matcher;")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,4,"region","(II)Ljava/util/regex/Matcher;")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,5,"appendTail","(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,6,"replaceFirst","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,7,"replaceAll","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,8,"pattern","()Ljava/util/regex/Pattern;")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,9,"group","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,10,"group","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,11,"find","(I)Z")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,12,"find","()Z")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,13,"start","(I)I")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,14,"end","(I)I")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,15,"matches","()Z")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,16,"quoteReplacement","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,17,"lookingAt","()Z")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,18,"start","()I")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,19,"groupCount","()I")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,20,"end","()I")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,21,"toMatchResult","()Ljava/util/regex/MatchResult;")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,22,"useAnchoringBounds","(Z)Ljava/util/regex/Matcher;")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,23,"hasAnchoringBounds","()Z")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,24,"useTransparentBounds","(Z)Ljava/util/regex/Matcher;")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,25,"hasTransparentBounds","()Z")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,26,"regionStart","()I")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,27,"regionEnd","()I")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,28,"requireEnd","()Z")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,29,"hitEnd","()Z")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,30,"usePattern","(Ljava/util/regex/Pattern;)Ljava/util/regex/Matcher;")
J2CPP_DEFINE_METHOD(java::util::regex::Matcher,31,"finalize","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_REGEX_MATCHER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
