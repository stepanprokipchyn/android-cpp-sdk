/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.Selection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_SELECTION_HPP_DECL
#define J2CPP_ANDROID_TEXT_SELECTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace text { class Spannable; } } }
namespace j2cpp { namespace android { namespace text { class Layout; } } }


#include <android/text/Layout.hpp>
#include <android/text/Spannable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text {

	class Selection;
	class Selection
		: public object<Selection>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit Selection(jobject jobj)
		: object<Selection>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static jint getSelectionStart(local_ref< java::lang::CharSequence >  const&);
		static jint getSelectionEnd(local_ref< java::lang::CharSequence >  const&);
		static void setSelection(local_ref< android::text::Spannable >  const&, jint, jint);
		static void setSelection(local_ref< android::text::Spannable >  const&, jint);
		static void selectAll(local_ref< android::text::Spannable >  const&);
		static void extendSelection(local_ref< android::text::Spannable >  const&, jint);
		static void removeSelection(local_ref< android::text::Spannable >  const&);
		static jboolean moveUp(local_ref< android::text::Spannable >  const&, local_ref< android::text::Layout >  const&);
		static jboolean moveDown(local_ref< android::text::Spannable >  const&, local_ref< android::text::Layout >  const&);
		static jboolean moveLeft(local_ref< android::text::Spannable >  const&, local_ref< android::text::Layout >  const&);
		static jboolean moveRight(local_ref< android::text::Spannable >  const&, local_ref< android::text::Layout >  const&);
		static jboolean extendUp(local_ref< android::text::Spannable >  const&, local_ref< android::text::Layout >  const&);
		static jboolean extendDown(local_ref< android::text::Spannable >  const&, local_ref< android::text::Layout >  const&);
		static jboolean extendLeft(local_ref< android::text::Spannable >  const&, local_ref< android::text::Layout >  const&);
		static jboolean extendRight(local_ref< android::text::Spannable >  const&, local_ref< android::text::Layout >  const&);
		static jboolean extendToLeftEdge(local_ref< android::text::Spannable >  const&, local_ref< android::text::Layout >  const&);
		static jboolean extendToRightEdge(local_ref< android::text::Spannable >  const&, local_ref< android::text::Layout >  const&);
		static jboolean moveToLeftEdge(local_ref< android::text::Spannable >  const&, local_ref< android::text::Layout >  const&);
		static jboolean moveToRightEdge(local_ref< android::text::Spannable >  const&, local_ref< android::text::Layout >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::Object > > SELECTION_START;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::Object > > SELECTION_END;
	}; //class Selection

} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_SELECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_SELECTION_HPP_IMPL
#define J2CPP_ANDROID_TEXT_SELECTION_HPP_IMPL

namespace j2cpp {



android::text::Selection::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jint android::text::Selection::getSelectionStart(local_ref< java::lang::CharSequence > const &a0)
{
	return call_static_method<
		android::text::Selection::J2CPP_CLASS_NAME,
		android::text::Selection::J2CPP_METHOD_NAME(1),
		android::text::Selection::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(a0);
}

jint android::text::Selection::getSelectionEnd(local_ref< java::lang::CharSequence > const &a0)
{
	return call_static_method<
		android::text::Selection::J2CPP_CLASS_NAME,
		android::text::Selection::J2CPP_METHOD_NAME(2),
		android::text::Selection::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(a0);
}

void android::text::Selection::setSelection(local_ref< android::text::Spannable > const &a0, jint a1, jint a2)
{
	return call_static_method<
		android::text::Selection::J2CPP_CLASS_NAME,
		android::text::Selection::J2CPP_METHOD_NAME(3),
		android::text::Selection::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(a0, a1, a2);
}

void android::text::Selection::setSelection(local_ref< android::text::Spannable > const &a0, jint a1)
{
	return call_static_method<
		android::text::Selection::J2CPP_CLASS_NAME,
		android::text::Selection::J2CPP_METHOD_NAME(4),
		android::text::Selection::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(a0, a1);
}

void android::text::Selection::selectAll(local_ref< android::text::Spannable > const &a0)
{
	return call_static_method<
		android::text::Selection::J2CPP_CLASS_NAME,
		android::text::Selection::J2CPP_METHOD_NAME(5),
		android::text::Selection::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(a0);
}

void android::text::Selection::extendSelection(local_ref< android::text::Spannable > const &a0, jint a1)
{
	return call_static_method<
		android::text::Selection::J2CPP_CLASS_NAME,
		android::text::Selection::J2CPP_METHOD_NAME(6),
		android::text::Selection::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(a0, a1);
}

void android::text::Selection::removeSelection(local_ref< android::text::Spannable > const &a0)
{
	return call_static_method<
		android::text::Selection::J2CPP_CLASS_NAME,
		android::text::Selection::J2CPP_METHOD_NAME(7),
		android::text::Selection::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(a0);
}

jboolean android::text::Selection::moveUp(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return call_static_method<
		android::text::Selection::J2CPP_CLASS_NAME,
		android::text::Selection::J2CPP_METHOD_NAME(8),
		android::text::Selection::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(a0, a1);
}

jboolean android::text::Selection::moveDown(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return call_static_method<
		android::text::Selection::J2CPP_CLASS_NAME,
		android::text::Selection::J2CPP_METHOD_NAME(9),
		android::text::Selection::J2CPP_METHOD_SIGNATURE(9), 
		jboolean >
	(a0, a1);
}

jboolean android::text::Selection::moveLeft(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return call_static_method<
		android::text::Selection::J2CPP_CLASS_NAME,
		android::text::Selection::J2CPP_METHOD_NAME(10),
		android::text::Selection::J2CPP_METHOD_SIGNATURE(10), 
		jboolean >
	(a0, a1);
}

jboolean android::text::Selection::moveRight(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return call_static_method<
		android::text::Selection::J2CPP_CLASS_NAME,
		android::text::Selection::J2CPP_METHOD_NAME(11),
		android::text::Selection::J2CPP_METHOD_SIGNATURE(11), 
		jboolean >
	(a0, a1);
}

jboolean android::text::Selection::extendUp(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return call_static_method<
		android::text::Selection::J2CPP_CLASS_NAME,
		android::text::Selection::J2CPP_METHOD_NAME(12),
		android::text::Selection::J2CPP_METHOD_SIGNATURE(12), 
		jboolean >
	(a0, a1);
}

jboolean android::text::Selection::extendDown(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return call_static_method<
		android::text::Selection::J2CPP_CLASS_NAME,
		android::text::Selection::J2CPP_METHOD_NAME(13),
		android::text::Selection::J2CPP_METHOD_SIGNATURE(13), 
		jboolean >
	(a0, a1);
}

jboolean android::text::Selection::extendLeft(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return call_static_method<
		android::text::Selection::J2CPP_CLASS_NAME,
		android::text::Selection::J2CPP_METHOD_NAME(14),
		android::text::Selection::J2CPP_METHOD_SIGNATURE(14), 
		jboolean >
	(a0, a1);
}

jboolean android::text::Selection::extendRight(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return call_static_method<
		android::text::Selection::J2CPP_CLASS_NAME,
		android::text::Selection::J2CPP_METHOD_NAME(15),
		android::text::Selection::J2CPP_METHOD_SIGNATURE(15), 
		jboolean >
	(a0, a1);
}

jboolean android::text::Selection::extendToLeftEdge(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return call_static_method<
		android::text::Selection::J2CPP_CLASS_NAME,
		android::text::Selection::J2CPP_METHOD_NAME(16),
		android::text::Selection::J2CPP_METHOD_SIGNATURE(16), 
		jboolean >
	(a0, a1);
}

jboolean android::text::Selection::extendToRightEdge(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return call_static_method<
		android::text::Selection::J2CPP_CLASS_NAME,
		android::text::Selection::J2CPP_METHOD_NAME(17),
		android::text::Selection::J2CPP_METHOD_SIGNATURE(17), 
		jboolean >
	(a0, a1);
}

jboolean android::text::Selection::moveToLeftEdge(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return call_static_method<
		android::text::Selection::J2CPP_CLASS_NAME,
		android::text::Selection::J2CPP_METHOD_NAME(18),
		android::text::Selection::J2CPP_METHOD_SIGNATURE(18), 
		jboolean >
	(a0, a1);
}

jboolean android::text::Selection::moveToRightEdge(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return call_static_method<
		android::text::Selection::J2CPP_CLASS_NAME,
		android::text::Selection::J2CPP_METHOD_NAME(19),
		android::text::Selection::J2CPP_METHOD_SIGNATURE(19), 
		jboolean >
	(a0, a1);
}



static_field<
	android::text::Selection::J2CPP_CLASS_NAME,
	android::text::Selection::J2CPP_FIELD_NAME(0),
	android::text::Selection::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::Object >
> android::text::Selection::SELECTION_START;

static_field<
	android::text::Selection::J2CPP_CLASS_NAME,
	android::text::Selection::J2CPP_FIELD_NAME(1),
	android::text::Selection::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::Object >
> android::text::Selection::SELECTION_END;


J2CPP_DEFINE_CLASS(android::text::Selection,"android/text/Selection")
J2CPP_DEFINE_METHOD(android::text::Selection,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::Selection,1,"getSelectionStart","(Ljava/lang/CharSequence;)I")
J2CPP_DEFINE_METHOD(android::text::Selection,2,"getSelectionEnd","(Ljava/lang/CharSequence;)I")
J2CPP_DEFINE_METHOD(android::text::Selection,3,"setSelection","(Landroid/text/Spannable;II)V")
J2CPP_DEFINE_METHOD(android::text::Selection,4,"setSelection","(Landroid/text/Spannable;I)V")
J2CPP_DEFINE_METHOD(android::text::Selection,5,"selectAll","(Landroid/text/Spannable;)V")
J2CPP_DEFINE_METHOD(android::text::Selection,6,"extendSelection","(Landroid/text/Spannable;I)V")
J2CPP_DEFINE_METHOD(android::text::Selection,7,"removeSelection","(Landroid/text/Spannable;)V")
J2CPP_DEFINE_METHOD(android::text::Selection,8,"moveUp","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,9,"moveDown","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,10,"moveLeft","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,11,"moveRight","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,12,"extendUp","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,13,"extendDown","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,14,"extendLeft","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,15,"extendRight","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,16,"extendToLeftEdge","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,17,"extendToRightEdge","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,18,"moveToLeftEdge","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,19,"moveToRightEdge","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,20,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::text::Selection,0,"SELECTION_START","Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(android::text::Selection,1,"SELECTION_END","Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_SELECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
