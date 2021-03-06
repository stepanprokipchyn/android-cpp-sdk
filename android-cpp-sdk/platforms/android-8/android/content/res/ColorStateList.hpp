/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.res.ColorStateList
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_RES_COLORSTATELIST_HPP_DECL
#define J2CPP_ANDROID_CONTENT_RES_COLORSTATELIST_HPP_DECL


namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Resources; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/res/Resources.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/xmlpull/v1/XmlPullParser.hpp>


namespace j2cpp {

namespace android { namespace content { namespace res {

	class ColorStateList;
	class ColorStateList
		: public object<ColorStateList>
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
		J2CPP_DECLARE_FIELD(0)

		explicit ColorStateList(jobject jobj)
		: object<ColorStateList>(jobj)
		{
		}

		operator local_ref<android::os::Parcelable>() const;
		operator local_ref<java::lang::Object>() const;


		ColorStateList(local_ref< array<jint,2> > const&, local_ref< array<jint,1> > const&);
		static local_ref< android::content::res::ColorStateList > valueOf(jint);
		static local_ref< android::content::res::ColorStateList > createFromXml(local_ref< android::content::res::Resources >  const&, local_ref< org::xmlpull::v1::XmlPullParser >  const&);
		local_ref< android::content::res::ColorStateList > withAlpha(jint);
		jboolean isStateful();
		jint getColorForState(local_ref< array<jint,1> >  const&, jint);
		jint getDefaultColor();
		local_ref< java::lang::String > toString();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class ColorStateList

} //namespace res
} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_RES_COLORSTATELIST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_RES_COLORSTATELIST_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_RES_COLORSTATELIST_HPP_IMPL

namespace j2cpp {



android::content::res::ColorStateList::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}

android::content::res::ColorStateList::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::content::res::ColorStateList::ColorStateList(local_ref< array<jint,2> > const &a0, local_ref< array<jint,1> > const &a1)
: object<android::content::res::ColorStateList>(
	call_new_object<
		android::content::res::ColorStateList::J2CPP_CLASS_NAME,
		android::content::res::ColorStateList::J2CPP_METHOD_NAME(0),
		android::content::res::ColorStateList::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


local_ref< android::content::res::ColorStateList > android::content::res::ColorStateList::valueOf(jint a0)
{
	return call_static_method<
		android::content::res::ColorStateList::J2CPP_CLASS_NAME,
		android::content::res::ColorStateList::J2CPP_METHOD_NAME(1),
		android::content::res::ColorStateList::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::content::res::ColorStateList >
	>(a0);
}

local_ref< android::content::res::ColorStateList > android::content::res::ColorStateList::createFromXml(local_ref< android::content::res::Resources > const &a0, local_ref< org::xmlpull::v1::XmlPullParser > const &a1)
{
	return call_static_method<
		android::content::res::ColorStateList::J2CPP_CLASS_NAME,
		android::content::res::ColorStateList::J2CPP_METHOD_NAME(2),
		android::content::res::ColorStateList::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::content::res::ColorStateList >
	>(a0, a1);
}

local_ref< android::content::res::ColorStateList > android::content::res::ColorStateList::withAlpha(jint a0)
{
	return call_method<
		android::content::res::ColorStateList::J2CPP_CLASS_NAME,
		android::content::res::ColorStateList::J2CPP_METHOD_NAME(3),
		android::content::res::ColorStateList::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::content::res::ColorStateList >
	>(get_jobject(), a0);
}

jboolean android::content::res::ColorStateList::isStateful()
{
	return call_method<
		android::content::res::ColorStateList::J2CPP_CLASS_NAME,
		android::content::res::ColorStateList::J2CPP_METHOD_NAME(4),
		android::content::res::ColorStateList::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject());
}

jint android::content::res::ColorStateList::getColorForState(local_ref< array<jint,1> > const &a0, jint a1)
{
	return call_method<
		android::content::res::ColorStateList::J2CPP_CLASS_NAME,
		android::content::res::ColorStateList::J2CPP_METHOD_NAME(5),
		android::content::res::ColorStateList::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject(), a0, a1);
}

jint android::content::res::ColorStateList::getDefaultColor()
{
	return call_method<
		android::content::res::ColorStateList::J2CPP_CLASS_NAME,
		android::content::res::ColorStateList::J2CPP_METHOD_NAME(6),
		android::content::res::ColorStateList::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > android::content::res::ColorStateList::toString()
{
	return call_method<
		android::content::res::ColorStateList::J2CPP_CLASS_NAME,
		android::content::res::ColorStateList::J2CPP_METHOD_NAME(7),
		android::content::res::ColorStateList::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint android::content::res::ColorStateList::describeContents()
{
	return call_method<
		android::content::res::ColorStateList::J2CPP_CLASS_NAME,
		android::content::res::ColorStateList::J2CPP_METHOD_NAME(8),
		android::content::res::ColorStateList::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject());
}

void android::content::res::ColorStateList::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::content::res::ColorStateList::J2CPP_CLASS_NAME,
		android::content::res::ColorStateList::J2CPP_METHOD_NAME(9),
		android::content::res::ColorStateList::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1);
}



static_field<
	android::content::res::ColorStateList::J2CPP_CLASS_NAME,
	android::content::res::ColorStateList::J2CPP_FIELD_NAME(0),
	android::content::res::ColorStateList::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::content::res::ColorStateList::CREATOR;


J2CPP_DEFINE_CLASS(android::content::res::ColorStateList,"android/content/res/ColorStateList")
J2CPP_DEFINE_METHOD(android::content::res::ColorStateList,0,"<init>","([[I[I)V")
J2CPP_DEFINE_METHOD(android::content::res::ColorStateList,1,"valueOf","(I)Landroid/content/res/ColorStateList;")
J2CPP_DEFINE_METHOD(android::content::res::ColorStateList,2,"createFromXml","(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;)Landroid/content/res/ColorStateList;")
J2CPP_DEFINE_METHOD(android::content::res::ColorStateList,3,"withAlpha","(I)Landroid/content/res/ColorStateList;")
J2CPP_DEFINE_METHOD(android::content::res::ColorStateList,4,"isStateful","()Z")
J2CPP_DEFINE_METHOD(android::content::res::ColorStateList,5,"getColorForState","([II)I")
J2CPP_DEFINE_METHOD(android::content::res::ColorStateList,6,"getDefaultColor","()I")
J2CPP_DEFINE_METHOD(android::content::res::ColorStateList,7,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::res::ColorStateList,8,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::content::res::ColorStateList,9,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::res::ColorStateList,10,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::res::ColorStateList,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_RES_COLORSTATELIST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
