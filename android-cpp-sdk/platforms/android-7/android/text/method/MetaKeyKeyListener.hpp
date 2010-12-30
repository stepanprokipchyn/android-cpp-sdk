/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.method.MetaKeyKeyListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_METAKEYKEYLISTENER_HPP_DECL
#define J2CPP_ANDROID_TEXT_METHOD_METAKEYKEYLISTENER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace text { class Spannable; } } }
namespace j2cpp { namespace android { namespace text { class Editable; } } }


#include <android/text/Editable.hpp>
#include <android/text/Spannable.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/View.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text { namespace method {

	class MetaKeyKeyListener;
	class MetaKeyKeyListener
		: public object<MetaKeyKeyListener>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)

		explicit MetaKeyKeyListener(jobject jobj)
		: object<MetaKeyKeyListener>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		MetaKeyKeyListener();
		static void resetMetaState(local_ref< android::text::Spannable >  const&);
		static jint getMetaState(local_ref< java::lang::CharSequence >  const&);
		static jint getMetaState(local_ref< java::lang::CharSequence >  const&, jint);
		static void adjustMetaAfterKeypress(local_ref< android::text::Spannable >  const&);
		static jboolean isMetaTracker(local_ref< java::lang::CharSequence >  const&, local_ref< java::lang::Object >  const&);
		static jboolean isSelectingMetaTracker(local_ref< java::lang::CharSequence >  const&, local_ref< java::lang::Object >  const&);
		jboolean onKeyDown(local_ref< android::view::View >  const&, local_ref< android::text::Editable >  const&, jint, local_ref< android::view::KeyEvent >  const&);
		jboolean onKeyUp(local_ref< android::view::View >  const&, local_ref< android::text::Editable >  const&, jint, local_ref< android::view::KeyEvent >  const&);
		void clearMetaKeyState(local_ref< android::view::View >  const&, local_ref< android::text::Editable >  const&, jint);
		static void clearMetaKeyState(local_ref< android::text::Editable >  const&, jint);
		static jlong resetLockedMeta(jlong);
		static jint getMetaState(jlong);
		static jint getMetaState(jlong, jint);
		static jlong adjustMetaAfterKeypress(jlong);
		static jlong handleKeyDown(jlong, jint, local_ref< android::view::KeyEvent >  const&);
		static jlong handleKeyUp(jlong, jint, local_ref< android::view::KeyEvent >  const&);
		jlong clearMetaKeyState(jlong, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > META_SHIFT_ON;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > META_ALT_ON;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > META_SYM_ON;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > META_CAP_LOCKED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > META_ALT_LOCKED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > META_SYM_LOCKED;
	}; //class MetaKeyKeyListener

} //namespace method
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_METAKEYKEYLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_METAKEYKEYLISTENER_HPP_IMPL
#define J2CPP_ANDROID_TEXT_METHOD_METAKEYKEYLISTENER_HPP_IMPL

namespace j2cpp {



android::text::method::MetaKeyKeyListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::text::method::MetaKeyKeyListener::MetaKeyKeyListener()
: object<android::text::method::MetaKeyKeyListener>(
	call_new_object<
		android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_NAME(0),
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void android::text::method::MetaKeyKeyListener::resetMetaState(local_ref< android::text::Spannable > const &a0)
{
	return call_static_method<
		android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_NAME(1),
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(a0);
}

jint android::text::method::MetaKeyKeyListener::getMetaState(local_ref< java::lang::CharSequence > const &a0)
{
	return call_static_method<
		android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_NAME(2),
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(a0);
}

jint android::text::method::MetaKeyKeyListener::getMetaState(local_ref< java::lang::CharSequence > const &a0, jint a1)
{
	return call_static_method<
		android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_NAME(3),
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(a0, a1);
}

void android::text::method::MetaKeyKeyListener::adjustMetaAfterKeypress(local_ref< android::text::Spannable > const &a0)
{
	return call_static_method<
		android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_NAME(4),
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(a0);
}

jboolean android::text::method::MetaKeyKeyListener::isMetaTracker(local_ref< java::lang::CharSequence > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_static_method<
		android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_NAME(5),
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(a0, a1);
}

jboolean android::text::method::MetaKeyKeyListener::isSelectingMetaTracker(local_ref< java::lang::CharSequence > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_static_method<
		android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_NAME(6),
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(a0, a1);
}


jboolean android::text::method::MetaKeyKeyListener::onKeyDown(local_ref< android::view::View > const &a0, local_ref< android::text::Editable > const &a1, jint a2, local_ref< android::view::KeyEvent > const &a3)
{
	return call_method<
		android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_NAME(8),
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

jboolean android::text::method::MetaKeyKeyListener::onKeyUp(local_ref< android::view::View > const &a0, local_ref< android::text::Editable > const &a1, jint a2, local_ref< android::view::KeyEvent > const &a3)
{
	return call_method<
		android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_NAME(9),
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_SIGNATURE(9), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

void android::text::method::MetaKeyKeyListener::clearMetaKeyState(local_ref< android::view::View > const &a0, local_ref< android::text::Editable > const &a1, jint a2)
{
	return call_method<
		android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_NAME(10),
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::text::method::MetaKeyKeyListener::clearMetaKeyState(local_ref< android::text::Editable > const &a0, jint a1)
{
	return call_static_method<
		android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_NAME(11),
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(a0, a1);
}

jlong android::text::method::MetaKeyKeyListener::resetLockedMeta(jlong a0)
{
	return call_static_method<
		android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_NAME(12),
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_SIGNATURE(12), 
		jlong >
	(a0);
}

jint android::text::method::MetaKeyKeyListener::getMetaState(jlong a0)
{
	return call_static_method<
		android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_NAME(13),
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_SIGNATURE(13), 
		jint >
	(a0);
}

jint android::text::method::MetaKeyKeyListener::getMetaState(jlong a0, jint a1)
{
	return call_static_method<
		android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_NAME(14),
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_SIGNATURE(14), 
		jint >
	(a0, a1);
}

jlong android::text::method::MetaKeyKeyListener::adjustMetaAfterKeypress(jlong a0)
{
	return call_static_method<
		android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_NAME(15),
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_SIGNATURE(15), 
		jlong >
	(a0);
}

jlong android::text::method::MetaKeyKeyListener::handleKeyDown(jlong a0, jint a1, local_ref< android::view::KeyEvent > const &a2)
{
	return call_static_method<
		android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_NAME(16),
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_SIGNATURE(16), 
		jlong >
	(a0, a1, a2);
}

jlong android::text::method::MetaKeyKeyListener::handleKeyUp(jlong a0, jint a1, local_ref< android::view::KeyEvent > const &a2)
{
	return call_static_method<
		android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_NAME(17),
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_SIGNATURE(17), 
		jlong >
	(a0, a1, a2);
}

jlong android::text::method::MetaKeyKeyListener::clearMetaKeyState(jlong a0, jint a1)
{
	return call_method<
		android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_NAME(18),
		android::text::method::MetaKeyKeyListener::J2CPP_METHOD_SIGNATURE(18), 
		jlong >
	(get_jobject(), a0, a1);
}


static_field<
	android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
	android::text::method::MetaKeyKeyListener::J2CPP_FIELD_NAME(0),
	android::text::method::MetaKeyKeyListener::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::text::method::MetaKeyKeyListener::META_SHIFT_ON;

static_field<
	android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
	android::text::method::MetaKeyKeyListener::J2CPP_FIELD_NAME(1),
	android::text::method::MetaKeyKeyListener::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::text::method::MetaKeyKeyListener::META_ALT_ON;

static_field<
	android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
	android::text::method::MetaKeyKeyListener::J2CPP_FIELD_NAME(2),
	android::text::method::MetaKeyKeyListener::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::text::method::MetaKeyKeyListener::META_SYM_ON;

static_field<
	android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
	android::text::method::MetaKeyKeyListener::J2CPP_FIELD_NAME(3),
	android::text::method::MetaKeyKeyListener::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::text::method::MetaKeyKeyListener::META_CAP_LOCKED;

static_field<
	android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
	android::text::method::MetaKeyKeyListener::J2CPP_FIELD_NAME(4),
	android::text::method::MetaKeyKeyListener::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::text::method::MetaKeyKeyListener::META_ALT_LOCKED;

static_field<
	android::text::method::MetaKeyKeyListener::J2CPP_CLASS_NAME,
	android::text::method::MetaKeyKeyListener::J2CPP_FIELD_NAME(5),
	android::text::method::MetaKeyKeyListener::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::text::method::MetaKeyKeyListener::META_SYM_LOCKED;


J2CPP_DEFINE_CLASS(android::text::method::MetaKeyKeyListener,"android/text/method/MetaKeyKeyListener")
J2CPP_DEFINE_METHOD(android::text::method::MetaKeyKeyListener,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::method::MetaKeyKeyListener,1,"resetMetaState","(Landroid/text/Spannable;)V")
J2CPP_DEFINE_METHOD(android::text::method::MetaKeyKeyListener,2,"getMetaState","(Ljava/lang/CharSequence;)I")
J2CPP_DEFINE_METHOD(android::text::method::MetaKeyKeyListener,3,"getMetaState","(Ljava/lang/CharSequence;I)I")
J2CPP_DEFINE_METHOD(android::text::method::MetaKeyKeyListener,4,"adjustMetaAfterKeypress","(Landroid/text/Spannable;)V")
J2CPP_DEFINE_METHOD(android::text::method::MetaKeyKeyListener,5,"isMetaTracker","(Ljava/lang/CharSequence;Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::text::method::MetaKeyKeyListener,6,"isSelectingMetaTracker","(Ljava/lang/CharSequence;Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::text::method::MetaKeyKeyListener,7,"resetLockedMeta","(Landroid/text/Spannable;)V")
J2CPP_DEFINE_METHOD(android::text::method::MetaKeyKeyListener,8,"onKeyDown","(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::MetaKeyKeyListener,9,"onKeyUp","(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::MetaKeyKeyListener,10,"clearMetaKeyState","(Landroid/view/View;Landroid/text/Editable;I)V")
J2CPP_DEFINE_METHOD(android::text::method::MetaKeyKeyListener,11,"clearMetaKeyState","(Landroid/text/Editable;I)V")
J2CPP_DEFINE_METHOD(android::text::method::MetaKeyKeyListener,12,"resetLockedMeta","(J)J")
J2CPP_DEFINE_METHOD(android::text::method::MetaKeyKeyListener,13,"getMetaState","(J)I")
J2CPP_DEFINE_METHOD(android::text::method::MetaKeyKeyListener,14,"getMetaState","(JI)I")
J2CPP_DEFINE_METHOD(android::text::method::MetaKeyKeyListener,15,"adjustMetaAfterKeypress","(J)J")
J2CPP_DEFINE_METHOD(android::text::method::MetaKeyKeyListener,16,"handleKeyDown","(JILandroid/view/KeyEvent;)J")
J2CPP_DEFINE_METHOD(android::text::method::MetaKeyKeyListener,17,"handleKeyUp","(JILandroid/view/KeyEvent;)J")
J2CPP_DEFINE_METHOD(android::text::method::MetaKeyKeyListener,18,"clearMetaKeyState","(JI)J")
J2CPP_DEFINE_FIELD(android::text::method::MetaKeyKeyListener,0,"META_SHIFT_ON","I")
J2CPP_DEFINE_FIELD(android::text::method::MetaKeyKeyListener,1,"META_ALT_ON","I")
J2CPP_DEFINE_FIELD(android::text::method::MetaKeyKeyListener,2,"META_SYM_ON","I")
J2CPP_DEFINE_FIELD(android::text::method::MetaKeyKeyListener,3,"META_CAP_LOCKED","I")
J2CPP_DEFINE_FIELD(android::text::method::MetaKeyKeyListener,4,"META_ALT_LOCKED","I")
J2CPP_DEFINE_FIELD(android::text::method::MetaKeyKeyListener,5,"META_SYM_LOCKED","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_METAKEYKEYLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
