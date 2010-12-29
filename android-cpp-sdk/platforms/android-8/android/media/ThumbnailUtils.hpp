/*================================================================================
  code generated by: java2cpp
  class: android.media.ThumbnailUtils
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_THUMBNAILUTILS_HPP_DECL
#define J2CPP_ANDROID_MEDIA_THUMBNAILUTILS_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class Bitmap; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <android/graphics/Bitmap.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace media {

	class ThumbnailUtils;
	class ThumbnailUtils
		: public cpp_object<ThumbnailUtils>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)

		ThumbnailUtils(jobject jobj)
		: cpp_object<ThumbnailUtils>(jobj)
		{
		}

		static local_ref< android::graphics::Bitmap > createVideoThumbnail(local_ref< java::lang::String > const&, cpp_int const&);
		static local_ref< android::graphics::Bitmap > extractThumbnail(local_ref< android::graphics::Bitmap > const&, cpp_int const&, cpp_int const&);
		static local_ref< android::graphics::Bitmap > extractThumbnail(local_ref< android::graphics::Bitmap > const&, cpp_int const&, cpp_int const&, cpp_int const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > OPTIONS_RECYCLE_INPUT;
	}; //class ThumbnailUtils

} //namespace media
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_THUMBNAILUTILS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_THUMBNAILUTILS_HPP_IMPL
#define J2CPP_ANDROID_MEDIA_THUMBNAILUTILS_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::media::ThumbnailUtils > create< android::media::ThumbnailUtils>()
{
	return local_ref< android::media::ThumbnailUtils >(
		environment::get().get_jenv()->NewObject(
			get_class<android::media::ThumbnailUtils::J2CPP_CLASS_NAME>(),
			get_method_id<android::media::ThumbnailUtils::J2CPP_CLASS_NAME, android::media::ThumbnailUtils::J2CPP_METHOD_NAME(0), android::media::ThumbnailUtils::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< android::graphics::Bitmap > android::media::ThumbnailUtils::createVideoThumbnail(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< android::graphics::Bitmap >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::graphics::Bitmap > android::media::ThumbnailUtils::extractThumbnail(local_ref< android::graphics::Bitmap > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< android::graphics::Bitmap >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::graphics::Bitmap > android::media::ThumbnailUtils::extractThumbnail(local_ref< android::graphics::Bitmap > const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return local_ref< android::graphics::Bitmap >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}


static_field<
	android::media::ThumbnailUtils::J2CPP_CLASS_NAME,
	android::media::ThumbnailUtils::J2CPP_FIELD_NAME(0),
	android::media::ThumbnailUtils::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::media::ThumbnailUtils::OPTIONS_RECYCLE_INPUT;


J2CPP_DEFINE_CLASS(android::media::ThumbnailUtils,"android/media/ThumbnailUtils")
J2CPP_DEFINE_METHOD(android::media::ThumbnailUtils,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::media::ThumbnailUtils,1,"createVideoThumbnail","(Ljava/lang/String;I)Landroid/graphics/Bitmap;")
J2CPP_DEFINE_METHOD(android::media::ThumbnailUtils,2,"extractThumbnail","(Landroid/graphics/Bitmap;II)Landroid/graphics/Bitmap;")
J2CPP_DEFINE_METHOD(android::media::ThumbnailUtils,3,"extractThumbnail","(Landroid/graphics/Bitmap;III)Landroid/graphics/Bitmap;")
J2CPP_DEFINE_FIELD(android::media::ThumbnailUtils,0,"OPTIONS_RECYCLE_INPUT","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_THUMBNAILUTILS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION