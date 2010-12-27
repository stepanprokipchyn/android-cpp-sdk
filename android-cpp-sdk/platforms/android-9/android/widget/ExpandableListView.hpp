/*================================================================================
  code generated by: java2cpp
  class: android.widget.ExpandableListView
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_EXPANDABLELISTVIEW_HPP_DECL
#define J2CPP_ANDROID_WIDGET_EXPANDABLELISTVIEW_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace widget { namespace ExpandableListView_ { class OnGroupExpandListener; } } } }
namespace j2cpp { namespace android { namespace widget { namespace ExpandableListView_ { class OnGroupClickListener; } } } }
namespace j2cpp { namespace android { namespace widget { class ListAdapter; } } }
namespace j2cpp { namespace android { namespace widget { namespace AdapterView_ { class OnItemClickListener; } } } }
namespace j2cpp { namespace android { namespace widget { class ExpandableListAdapter; } } }
namespace j2cpp { namespace android { namespace widget { class Adapter; } } }
namespace j2cpp { namespace android { namespace widget { namespace ExpandableListView_ { class OnChildClickListener; } } } }
namespace j2cpp { namespace android { namespace widget { namespace ExpandableListView_ { class OnGroupCollapseListener; } } } }


#include <android/content/Context.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/os/Parcelable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/widget/Adapter.hpp>
#include <android/widget/AdapterView.hpp>
#include <android/widget/ExpandableListAdapter.hpp>
#include <android/widget/ExpandableListView.hpp>
#include <android/widget/ListAdapter.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class ExpandableListView;
	namespace ExpandableListView_ {

		class OnGroupExpandListener;
		class OnGroupExpandListener
			: public cpp_object<OnGroupExpandListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnGroupExpandListener(jobject jobj)
			: cpp_object<OnGroupExpandListener>(jobj)
			{
			}

			void onGroupExpand(cpp_int const&);
		}; //class OnGroupExpandListener

		class OnGroupClickListener;
		class OnGroupClickListener
			: public cpp_object<OnGroupClickListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnGroupClickListener(jobject jobj)
			: cpp_object<OnGroupClickListener>(jobj)
			{
			}

			cpp_boolean onGroupClick(local_ref< android::widget::ExpandableListView > const&, local_ref< android::view::View > const&, cpp_int const&, cpp_long const&);
		}; //class OnGroupClickListener

		class OnChildClickListener;
		class OnChildClickListener
			: public cpp_object<OnChildClickListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnChildClickListener(jobject jobj)
			: cpp_object<OnChildClickListener>(jobj)
			{
			}

			cpp_boolean onChildClick(local_ref< android::widget::ExpandableListView > const&, local_ref< android::view::View > const&, cpp_int const&, cpp_int const&, cpp_long const&);
		}; //class OnChildClickListener

		class OnGroupCollapseListener;
		class OnGroupCollapseListener
			: public cpp_object<OnGroupCollapseListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnGroupCollapseListener(jobject jobj)
			: cpp_object<OnGroupCollapseListener>(jobj)
			{
			}

			void onGroupCollapse(cpp_int const&);
		}; //class OnGroupCollapseListener

		class ExpandableListContextMenuInfo;
		class ExpandableListContextMenuInfo
			: public cpp_object<ExpandableListContextMenuInfo>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)

			ExpandableListContextMenuInfo(jobject jobj)
			: cpp_object<ExpandableListContextMenuInfo>(jobj)
			, targetView(jobj)
			, packedPosition(jobj)
			, id(jobj)
			{
			}


			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::view::View > > targetView;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_long > packedPosition;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_long > id;
		}; //class ExpandableListContextMenuInfo

	} //namespace ExpandableListView_

	class ExpandableListView
		: public cpp_object<ExpandableListView>
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
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		typedef ExpandableListView_::OnGroupExpandListener OnGroupExpandListener;
		typedef ExpandableListView_::OnGroupClickListener OnGroupClickListener;
		typedef ExpandableListView_::OnChildClickListener OnChildClickListener;
		typedef ExpandableListView_::OnGroupCollapseListener OnGroupCollapseListener;
		typedef ExpandableListView_::ExpandableListContextMenuInfo ExpandableListContextMenuInfo;

		ExpandableListView(jobject jobj)
		: cpp_object<ExpandableListView>(jobj)
		{
		}

		void setChildDivider(local_ref< android::graphics::drawable::Drawable > const&);
		void setAdapter(local_ref< android::widget::ListAdapter > const&);
		local_ref< android::widget::ListAdapter > getAdapter();
		void setOnItemClickListener(local_ref< android::widget::AdapterView_::OnItemClickListener > const&);
		void setAdapter(local_ref< android::widget::ExpandableListAdapter > const&);
		local_ref< android::widget::ExpandableListAdapter > getExpandableListAdapter();
		cpp_boolean performItemClick(local_ref< android::view::View > const&, cpp_int const&, cpp_long const&);
		cpp_boolean expandGroup(cpp_int const&);
		cpp_boolean collapseGroup(cpp_int const&);
		void setOnGroupCollapseListener(local_ref< android::widget::ExpandableListView_::OnGroupCollapseListener > const&);
		void setOnGroupExpandListener(local_ref< android::widget::ExpandableListView_::OnGroupExpandListener > const&);
		void setOnGroupClickListener(local_ref< android::widget::ExpandableListView_::OnGroupClickListener > const&);
		void setOnChildClickListener(local_ref< android::widget::ExpandableListView_::OnChildClickListener > const&);
		cpp_long getExpandableListPosition(cpp_int const&);
		cpp_int getFlatListPosition(cpp_long const&);
		cpp_long getSelectedPosition();
		cpp_long getSelectedId();
		void setSelectedGroup(cpp_int const&);
		cpp_boolean setSelectedChild(cpp_int const&, cpp_int const&, cpp_boolean const&);
		cpp_boolean isGroupExpanded(cpp_int const&);
		static cpp_int getPackedPositionType(cpp_long const&);
		static cpp_int getPackedPositionGroup(cpp_long const&);
		static cpp_int getPackedPositionChild(cpp_long const&);
		static cpp_long getPackedPositionForChild(cpp_int const&, cpp_int const&);
		static cpp_long getPackedPositionForGroup(cpp_int const&);
		void setChildIndicator(local_ref< android::graphics::drawable::Drawable > const&);
		void setChildIndicatorBounds(cpp_int const&, cpp_int const&);
		void setGroupIndicator(local_ref< android::graphics::drawable::Drawable > const&);
		void setIndicatorBounds(cpp_int const&, cpp_int const&);
		local_ref< android::os::Parcelable > onSaveInstanceState();
		void onRestoreInstanceState(local_ref< android::os::Parcelable > const&);
		void setAdapter(local_ref< android::widget::Adapter > const&);
		local_ref< android::widget::Adapter > getAdapter_1();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > PACKED_POSITION_TYPE_GROUP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > PACKED_POSITION_TYPE_CHILD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > PACKED_POSITION_TYPE_NULL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_long > PACKED_POSITION_VALUE_NULL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > CHILD_INDICATOR_INHERIT;
	}; //class ExpandableListView

} //namespace widget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_EXPANDABLELISTVIEW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_EXPANDABLELISTVIEW_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_EXPANDABLELISTVIEW_HPP_IMPL

namespace j2cpp {



void android::widget::ExpandableListView_::OnGroupExpandListener::onGroupExpand(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::ExpandableListView_::OnGroupExpandListener,"android/widget/ExpandableListView$OnGroupExpandListener")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView_::OnGroupExpandListener,0,"onGroupExpand","(I)V")

cpp_boolean android::widget::ExpandableListView_::OnGroupClickListener::onGroupClick(local_ref< android::widget::ExpandableListView > const &a0, local_ref< android::view::View > const &a1, cpp_int const &a2, cpp_long const &a3)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::ExpandableListView_::OnGroupClickListener,"android/widget/ExpandableListView$OnGroupClickListener")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView_::OnGroupClickListener,0,"onGroupClick","(Landroid/widget/ExpandableListView;Landroid/view/View;IJ)Z")

cpp_boolean android::widget::ExpandableListView_::OnChildClickListener::onChildClick(local_ref< android::widget::ExpandableListView > const &a0, local_ref< android::view::View > const &a1, cpp_int const &a2, cpp_int const &a3, cpp_long const &a4)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::ExpandableListView_::OnChildClickListener,"android/widget/ExpandableListView$OnChildClickListener")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView_::OnChildClickListener,0,"onChildClick","(Landroid/widget/ExpandableListView;Landroid/view/View;IIJ)Z")

void android::widget::ExpandableListView_::OnGroupCollapseListener::onGroupCollapse(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::ExpandableListView_::OnGroupCollapseListener,"android/widget/ExpandableListView$OnGroupCollapseListener")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView_::OnGroupCollapseListener,0,"onGroupCollapse","(I)V")

template <>
local_ref< android::widget::ExpandableListView_::ExpandableListContextMenuInfo > create< android::widget::ExpandableListView_::ExpandableListContextMenuInfo>(local_ref< android::view::View > const &a0, cpp_long const &a1, cpp_long const &a2)
{
	return local_ref< android::widget::ExpandableListView_::ExpandableListContextMenuInfo >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::ExpandableListView_::ExpandableListContextMenuInfo::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::ExpandableListView_::ExpandableListContextMenuInfo::J2CPP_CLASS_NAME, android::widget::ExpandableListView_::ExpandableListContextMenuInfo::J2CPP_METHOD_NAME(0), android::widget::ExpandableListView_::ExpandableListContextMenuInfo::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(android::widget::ExpandableListView_::ExpandableListContextMenuInfo,"android/widget/ExpandableListView$ExpandableListContextMenuInfo")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView_::ExpandableListContextMenuInfo,0,"<init>","(Landroid/view/View;JJ)V")
J2CPP_DEFINE_FIELD(android::widget::ExpandableListView_::ExpandableListContextMenuInfo,0,"targetView","Landroid/view/View;")
J2CPP_DEFINE_FIELD(android::widget::ExpandableListView_::ExpandableListContextMenuInfo,1,"packedPosition","J")
J2CPP_DEFINE_FIELD(android::widget::ExpandableListView_::ExpandableListContextMenuInfo,2,"id","J")


template <>
local_ref< android::widget::ExpandableListView > create< android::widget::ExpandableListView>(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::widget::ExpandableListView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::ExpandableListView::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::ExpandableListView::J2CPP_CLASS_NAME, android::widget::ExpandableListView::J2CPP_METHOD_NAME(0), android::widget::ExpandableListView::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::ExpandableListView > create< android::widget::ExpandableListView>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::widget::ExpandableListView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::ExpandableListView::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::ExpandableListView::J2CPP_CLASS_NAME, android::widget::ExpandableListView::J2CPP_METHOD_NAME(1), android::widget::ExpandableListView::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::ExpandableListView > create< android::widget::ExpandableListView>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
{
	return local_ref< android::widget::ExpandableListView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::ExpandableListView::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::ExpandableListView::J2CPP_CLASS_NAME, android::widget::ExpandableListView::J2CPP_METHOD_NAME(2), android::widget::ExpandableListView::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


void android::widget::ExpandableListView::setChildDivider(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ExpandableListView::setAdapter(local_ref< android::widget::ListAdapter > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::widget::ListAdapter > android::widget::ExpandableListView::getAdapter()
{
	return local_ref< android::widget::ListAdapter >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void android::widget::ExpandableListView::setOnItemClickListener(local_ref< android::widget::AdapterView_::OnItemClickListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ExpandableListView::setAdapter(local_ref< android::widget::ExpandableListAdapter > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::widget::ExpandableListAdapter > android::widget::ExpandableListView::getExpandableListAdapter()
{
	return local_ref< android::widget::ExpandableListAdapter >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_boolean android::widget::ExpandableListView::performItemClick(local_ref< android::view::View > const &a0, cpp_int const &a1, cpp_long const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean android::widget::ExpandableListView::expandGroup(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::widget::ExpandableListView::collapseGroup(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ExpandableListView::setOnGroupCollapseListener(local_ref< android::widget::ExpandableListView_::OnGroupCollapseListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ExpandableListView::setOnGroupExpandListener(local_ref< android::widget::ExpandableListView_::OnGroupExpandListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ExpandableListView::setOnGroupClickListener(local_ref< android::widget::ExpandableListView_::OnGroupClickListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ExpandableListView::setOnChildClickListener(local_ref< android::widget::ExpandableListView_::OnChildClickListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long android::widget::ExpandableListView::getExpandableListPosition(cpp_int const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::ExpandableListView::getFlatListPosition(cpp_long const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long android::widget::ExpandableListView::getSelectedPosition()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

cpp_long android::widget::ExpandableListView::getSelectedId()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

void android::widget::ExpandableListView::setSelectedGroup(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::widget::ExpandableListView::setSelectedChild(cpp_int const &a0, cpp_int const &a1, cpp_boolean const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean android::widget::ExpandableListView::isGroupExpanded(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::ExpandableListView::getPackedPositionType(cpp_long const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::ExpandableListView::getPackedPositionGroup(cpp_long const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::ExpandableListView::getPackedPositionChild(cpp_long const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), true>(),
			a0.get_jtype()
		)
	);
}

cpp_long android::widget::ExpandableListView::getPackedPositionForChild(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_long android::widget::ExpandableListView::getPackedPositionForGroup(cpp_int const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), true>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ExpandableListView::setChildIndicator(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ExpandableListView::setChildIndicatorBounds(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::widget::ExpandableListView::setGroupIndicator(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ExpandableListView::setIndicatorBounds(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::os::Parcelable > android::widget::ExpandableListView::onSaveInstanceState()
{
	return local_ref< android::os::Parcelable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>()
		)
	);
}

void android::widget::ExpandableListView::onRestoreInstanceState(local_ref< android::os::Parcelable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ExpandableListView::setAdapter(local_ref< android::widget::Adapter > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::widget::Adapter > android::widget::ExpandableListView::getAdapter_1()
{
	return local_ref< android::widget::Adapter >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>()
		)
	);
}


static_field<
	android::widget::ExpandableListView::J2CPP_CLASS_NAME,
	android::widget::ExpandableListView::J2CPP_FIELD_NAME(0),
	android::widget::ExpandableListView::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::widget::ExpandableListView::PACKED_POSITION_TYPE_GROUP;

static_field<
	android::widget::ExpandableListView::J2CPP_CLASS_NAME,
	android::widget::ExpandableListView::J2CPP_FIELD_NAME(1),
	android::widget::ExpandableListView::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::widget::ExpandableListView::PACKED_POSITION_TYPE_CHILD;

static_field<
	android::widget::ExpandableListView::J2CPP_CLASS_NAME,
	android::widget::ExpandableListView::J2CPP_FIELD_NAME(2),
	android::widget::ExpandableListView::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::widget::ExpandableListView::PACKED_POSITION_TYPE_NULL;

static_field<
	android::widget::ExpandableListView::J2CPP_CLASS_NAME,
	android::widget::ExpandableListView::J2CPP_FIELD_NAME(3),
	android::widget::ExpandableListView::J2CPP_FIELD_SIGNATURE(3),
	cpp_long
> android::widget::ExpandableListView::PACKED_POSITION_VALUE_NULL;

static_field<
	android::widget::ExpandableListView::J2CPP_CLASS_NAME,
	android::widget::ExpandableListView::J2CPP_FIELD_NAME(4),
	android::widget::ExpandableListView::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> android::widget::ExpandableListView::CHILD_INDICATOR_INHERIT;


J2CPP_DEFINE_CLASS(android::widget::ExpandableListView,"android/widget/ExpandableListView")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,3,"dispatchDraw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,4,"setChildDivider","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,5,"setAdapter","(Landroid/widget/ListAdapter;)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,6,"getAdapter","()Landroid/widget/ListAdapter;")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,7,"setOnItemClickListener","(Landroid/widget/AdapterView$OnItemClickListener;)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,8,"setAdapter","(Landroid/widget/ExpandableListAdapter;)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,9,"getExpandableListAdapter","()Landroid/widget/ExpandableListAdapter;")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,10,"performItemClick","(Landroid/view/View;IJ)Z")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,11,"expandGroup","(I)Z")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,12,"collapseGroup","(I)Z")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,13,"setOnGroupCollapseListener","(Landroid/widget/ExpandableListView$OnGroupCollapseListener;)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,14,"setOnGroupExpandListener","(Landroid/widget/ExpandableListView$OnGroupExpandListener;)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,15,"setOnGroupClickListener","(Landroid/widget/ExpandableListView$OnGroupClickListener;)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,16,"setOnChildClickListener","(Landroid/widget/ExpandableListView$OnChildClickListener;)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,17,"getExpandableListPosition","(I)J")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,18,"getFlatListPosition","(J)I")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,19,"getSelectedPosition","()J")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,20,"getSelectedId","()J")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,21,"setSelectedGroup","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,22,"setSelectedChild","(IIZ)Z")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,23,"isGroupExpanded","(I)Z")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,24,"getPackedPositionType","(J)I")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,25,"getPackedPositionGroup","(J)I")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,26,"getPackedPositionChild","(J)I")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,27,"getPackedPositionForChild","(II)J")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,28,"getPackedPositionForGroup","(I)J")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,29,"setChildIndicator","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,30,"setChildIndicatorBounds","(II)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,31,"setGroupIndicator","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,32,"setIndicatorBounds","(II)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,33,"onSaveInstanceState","()Landroid/os/Parcelable;")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,34,"onRestoreInstanceState","(Landroid/os/Parcelable;)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,35,"setAdapter","(Landroid/widget/Adapter;)V")
J2CPP_DEFINE_METHOD(android::widget::ExpandableListView,36,"getAdapter","()Landroid/widget/Adapter;")
J2CPP_DEFINE_FIELD(android::widget::ExpandableListView,0,"PACKED_POSITION_TYPE_GROUP","I")
J2CPP_DEFINE_FIELD(android::widget::ExpandableListView,1,"PACKED_POSITION_TYPE_CHILD","I")
J2CPP_DEFINE_FIELD(android::widget::ExpandableListView,2,"PACKED_POSITION_TYPE_NULL","I")
J2CPP_DEFINE_FIELD(android::widget::ExpandableListView,3,"PACKED_POSITION_VALUE_NULL","J")
J2CPP_DEFINE_FIELD(android::widget::ExpandableListView,4,"CHILD_INDICATOR_INHERIT","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_EXPANDABLELISTVIEW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
