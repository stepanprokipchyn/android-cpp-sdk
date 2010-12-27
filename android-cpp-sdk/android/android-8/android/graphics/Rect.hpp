/*================================================================================
  code generated by: java2cpp
  class: android.graphics.Rect
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_RECT_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_RECT_HPP_DECL


namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class Rect;
	class Rect
		: public cpp_object<Rect>
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

		Rect(jobject jobj)
		: cpp_object<Rect>(jobj)
		, left(jobj)
		, top(jobj)
		, right(jobj)
		, bottom(jobj)
		{
		}

		cpp_boolean equals(local_ref< java::lang::Object > const&);
		local_ref< java::lang::String > toString();
		local_ref< java::lang::String > toShortString();
		local_ref< java::lang::String > flattenToString();
		static local_ref< android::graphics::Rect > unflattenFromString(local_ref< java::lang::String > const&);
		cpp_boolean isEmpty();
		cpp_int width();
		cpp_int height();
		cpp_int centerX();
		cpp_int centerY();
		cpp_float exactCenterX();
		cpp_float exactCenterY();
		void setEmpty();
		void set(cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);
		void set(local_ref< android::graphics::Rect > const&);
		void offset(cpp_int const&, cpp_int const&);
		void offsetTo(cpp_int const&, cpp_int const&);
		void inset(cpp_int const&, cpp_int const&);
		cpp_boolean contains(cpp_int const&, cpp_int const&);
		cpp_boolean contains(cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);
		cpp_boolean contains(local_ref< android::graphics::Rect > const&);
		cpp_boolean intersect(cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);
		cpp_boolean intersect(local_ref< android::graphics::Rect > const&);
		cpp_boolean setIntersect(local_ref< android::graphics::Rect > const&, local_ref< android::graphics::Rect > const&);
		cpp_boolean intersects(cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);
		static cpp_boolean intersects(local_ref< android::graphics::Rect > const&, local_ref< android::graphics::Rect > const&);
		void Union(cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);
		void Union(local_ref< android::graphics::Rect > const&);
		void Union(cpp_int const&, cpp_int const&);
		void sort();
		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);
		void readFromParcel(local_ref< android::os::Parcel > const&);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > left;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > top;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > right;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > bottom;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class Rect

} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_RECT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_RECT_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_RECT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::graphics::Rect > create< android::graphics::Rect>()
{
	return local_ref< android::graphics::Rect >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::Rect::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::Rect::J2CPP_CLASS_NAME, android::graphics::Rect::J2CPP_METHOD_NAME(0), android::graphics::Rect::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::graphics::Rect > create< android::graphics::Rect>(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return local_ref< android::graphics::Rect >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::Rect::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::Rect::J2CPP_CLASS_NAME, android::graphics::Rect::J2CPP_METHOD_NAME(1), android::graphics::Rect::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

template <>
local_ref< android::graphics::Rect > create< android::graphics::Rect>(local_ref< android::graphics::Rect > const &a0)
{
	return local_ref< android::graphics::Rect >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::Rect::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::Rect::J2CPP_CLASS_NAME, android::graphics::Rect::J2CPP_METHOD_NAME(2), android::graphics::Rect::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::graphics::Rect::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::graphics::Rect::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::String > android::graphics::Rect::toShortString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::String > android::graphics::Rect::flattenToString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< android::graphics::Rect > android::graphics::Rect::unflattenFromString(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::graphics::Rect >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::graphics::Rect::isEmpty()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_int android::graphics::Rect::width()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_int android::graphics::Rect::height()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_int android::graphics::Rect::centerX()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_int android::graphics::Rect::centerY()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_float android::graphics::Rect::exactCenterX()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_float android::graphics::Rect::exactCenterY()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

void android::graphics::Rect::setEmpty()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

void android::graphics::Rect::set(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::graphics::Rect::set(local_ref< android::graphics::Rect > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::Rect::offset(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::Rect::offsetTo(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::Rect::inset(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::graphics::Rect::contains(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::graphics::Rect::contains(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_boolean android::graphics::Rect::contains(local_ref< android::graphics::Rect > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::graphics::Rect::intersect(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_boolean android::graphics::Rect::intersect(local_ref< android::graphics::Rect > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::graphics::Rect::setIntersect(local_ref< android::graphics::Rect > const &a0, local_ref< android::graphics::Rect > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::graphics::Rect::intersects(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_boolean android::graphics::Rect::intersects(local_ref< android::graphics::Rect > const &a0, local_ref< android::graphics::Rect > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::Rect::Union(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::graphics::Rect::Union(local_ref< android::graphics::Rect > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::Rect::Union(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::Rect::sort()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>()
		)
	);
}

cpp_int android::graphics::Rect::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>()
		)
	);
}

void android::graphics::Rect::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::Rect::readFromParcel(local_ref< android::os::Parcel > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::graphics::Rect::J2CPP_CLASS_NAME,
	android::graphics::Rect::J2CPP_FIELD_NAME(4),
	android::graphics::Rect::J2CPP_FIELD_SIGNATURE(4),
	local_ref< android::os::Parcelable_::Creator >
> android::graphics::Rect::CREATOR;


J2CPP_DEFINE_CLASS(android::graphics::Rect,"android/graphics/Rect")
J2CPP_DEFINE_METHOD(android::graphics::Rect,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,1,"<init>","(IIII)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,2,"<init>","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,3,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Rect,4,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::graphics::Rect,5,"toShortString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::graphics::Rect,6,"flattenToString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::graphics::Rect,7,"unflattenFromString","(Ljava/lang/String;)Landroid/graphics/Rect;")
J2CPP_DEFINE_METHOD(android::graphics::Rect,8,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(android::graphics::Rect,9,"width","()I")
J2CPP_DEFINE_METHOD(android::graphics::Rect,10,"height","()I")
J2CPP_DEFINE_METHOD(android::graphics::Rect,11,"centerX","()I")
J2CPP_DEFINE_METHOD(android::graphics::Rect,12,"centerY","()I")
J2CPP_DEFINE_METHOD(android::graphics::Rect,13,"exactCenterX","()F")
J2CPP_DEFINE_METHOD(android::graphics::Rect,14,"exactCenterY","()F")
J2CPP_DEFINE_METHOD(android::graphics::Rect,15,"setEmpty","()V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,16,"set","(IIII)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,17,"set","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,18,"offset","(II)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,19,"offsetTo","(II)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,20,"inset","(II)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,21,"contains","(II)Z")
J2CPP_DEFINE_METHOD(android::graphics::Rect,22,"contains","(IIII)Z")
J2CPP_DEFINE_METHOD(android::graphics::Rect,23,"contains","(Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Rect,24,"intersect","(IIII)Z")
J2CPP_DEFINE_METHOD(android::graphics::Rect,25,"intersect","(Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Rect,26,"setIntersect","(Landroid/graphics/Rect;Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Rect,27,"intersects","(IIII)Z")
J2CPP_DEFINE_METHOD(android::graphics::Rect,28,"intersects","(Landroid/graphics/Rect;Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Rect,29,"union","(IIII)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,30,"union","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,31,"union","(II)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,32,"sort","()V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,33,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::graphics::Rect,34,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,35,"readFromParcel","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::graphics::Rect,36,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::Rect,0,"left","I")
J2CPP_DEFINE_FIELD(android::graphics::Rect,1,"top","I")
J2CPP_DEFINE_FIELD(android::graphics::Rect,2,"right","I")
J2CPP_DEFINE_FIELD(android::graphics::Rect,3,"bottom","I")
J2CPP_DEFINE_FIELD(android::graphics::Rect,4,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_RECT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
