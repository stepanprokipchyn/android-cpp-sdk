/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.util.StateSet
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_STATESET_HPP_DECL
#define J2CPP_ANDROID_UTIL_STATESET_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace util {

	class StateSet;
	class StateSet
		: public object<StateSet>
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

		explicit StateSet(jobject jobj)
		: object<StateSet>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		StateSet();
		static jboolean isWildCard(local_ref< array<jint,1> >  const&);
		static jboolean stateSetMatches(local_ref< array<jint,1> >  const&, local_ref< array<jint,1> >  const&);
		static jboolean stateSetMatches(local_ref< array<jint,1> >  const&, jint);
		static local_ref< array<jint,1> > trimStateSet(local_ref< array<jint,1> >  const&, jint);
		static local_ref< java::lang::String > dump(local_ref< array<jint,1> >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< array<jint,1> > > WILD_CARD;
	}; //class StateSet

} //namespace util
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_STATESET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_STATESET_HPP_IMPL
#define J2CPP_ANDROID_UTIL_STATESET_HPP_IMPL

namespace j2cpp {



android::util::StateSet::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::util::StateSet::StateSet()
: object<android::util::StateSet>(
	call_new_object<
		android::util::StateSet::J2CPP_CLASS_NAME,
		android::util::StateSet::J2CPP_METHOD_NAME(0),
		android::util::StateSet::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


jboolean android::util::StateSet::isWildCard(local_ref< array<jint,1> > const &a0)
{
	return call_static_method<
		android::util::StateSet::J2CPP_CLASS_NAME,
		android::util::StateSet::J2CPP_METHOD_NAME(1),
		android::util::StateSet::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(a0);
}

jboolean android::util::StateSet::stateSetMatches(local_ref< array<jint,1> > const &a0, local_ref< array<jint,1> > const &a1)
{
	return call_static_method<
		android::util::StateSet::J2CPP_CLASS_NAME,
		android::util::StateSet::J2CPP_METHOD_NAME(2),
		android::util::StateSet::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(a0, a1);
}

jboolean android::util::StateSet::stateSetMatches(local_ref< array<jint,1> > const &a0, jint a1)
{
	return call_static_method<
		android::util::StateSet::J2CPP_CLASS_NAME,
		android::util::StateSet::J2CPP_METHOD_NAME(3),
		android::util::StateSet::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(a0, a1);
}

local_ref< array<jint,1> > android::util::StateSet::trimStateSet(local_ref< array<jint,1> > const &a0, jint a1)
{
	return call_static_method<
		android::util::StateSet::J2CPP_CLASS_NAME,
		android::util::StateSet::J2CPP_METHOD_NAME(4),
		android::util::StateSet::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< array<jint,1> >
	>(a0, a1);
}

local_ref< java::lang::String > android::util::StateSet::dump(local_ref< array<jint,1> > const &a0)
{
	return call_static_method<
		android::util::StateSet::J2CPP_CLASS_NAME,
		android::util::StateSet::J2CPP_METHOD_NAME(5),
		android::util::StateSet::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(a0);
}



static_field<
	android::util::StateSet::J2CPP_CLASS_NAME,
	android::util::StateSet::J2CPP_FIELD_NAME(0),
	android::util::StateSet::J2CPP_FIELD_SIGNATURE(0),
	local_ref< array<jint,1> >
> android::util::StateSet::WILD_CARD;


J2CPP_DEFINE_CLASS(android::util::StateSet,"android/util/StateSet")
J2CPP_DEFINE_METHOD(android::util::StateSet,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::util::StateSet,1,"isWildCard","([I)Z")
J2CPP_DEFINE_METHOD(android::util::StateSet,2,"stateSetMatches","([I[I)Z")
J2CPP_DEFINE_METHOD(android::util::StateSet,3,"stateSetMatches","([II)Z")
J2CPP_DEFINE_METHOD(android::util::StateSet,4,"trimStateSet","([II)[I")
J2CPP_DEFINE_METHOD(android::util::StateSet,5,"dump","([I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::util::StateSet,6,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::util::StateSet,0,"WILD_CARD","[I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_STATESET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
