/*================================================================================
  code generated by: java2cpp
  class: java.util.concurrent.ExecutorService
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_EXECUTORSERVICE_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_EXECUTORSERVICE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class Callable; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class Future; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/util/Collection.hpp>
#include <java/util/List.hpp>
#include <java/util/concurrent/Callable.hpp>
#include <java/util/concurrent/Future.hpp>
#include <java/util/concurrent/TimeUnit.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class ExecutorService;
	class ExecutorService
		: public cpp_object<ExecutorService>
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

		ExecutorService(jobject jobj)
		: cpp_object<ExecutorService>(jobj)
		{
		}

		void shutdown();
		local_ref< java::util::List > shutdownNow();
		cpp_boolean isShutdown();
		cpp_boolean isTerminated();
		cpp_boolean awaitTermination(cpp_long const&, local_ref< java::util::concurrent::TimeUnit > const&);
		local_ref< java::util::concurrent::Future > submit(local_ref< java::util::concurrent::Callable > const&);
		local_ref< java::util::concurrent::Future > submit(local_ref< java::lang::Runnable > const&, local_ref< java::lang::Object > const&);
		local_ref< java::util::concurrent::Future > submit(local_ref< java::lang::Runnable > const&);
		local_ref< java::util::List > invokeAll(local_ref< java::util::Collection > const&);
		local_ref< java::util::List > invokeAll(local_ref< java::util::Collection > const&, cpp_long const&, local_ref< java::util::concurrent::TimeUnit > const&);
		local_ref< java::lang::Object > invokeAny(local_ref< java::util::Collection > const&);
		local_ref< java::lang::Object > invokeAny(local_ref< java::util::Collection > const&, cpp_long const&, local_ref< java::util::concurrent::TimeUnit > const&);
	}; //class ExecutorService

} //namespace concurrent
} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_EXECUTORSERVICE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_EXECUTORSERVICE_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_EXECUTORSERVICE_HPP_IMPL

namespace j2cpp {


void java::util::concurrent::ExecutorService::shutdown()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::util::List > java::util::concurrent::ExecutorService::shutdownNow()
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_boolean java::util::concurrent::ExecutorService::isShutdown()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_boolean java::util::concurrent::ExecutorService::isTerminated()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean java::util::concurrent::ExecutorService::awaitTermination(cpp_long const &a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::util::concurrent::Future > java::util::concurrent::ExecutorService::submit(local_ref< java::util::concurrent::Callable > const &a0)
{
	return local_ref< java::util::concurrent::Future >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::concurrent::Future > java::util::concurrent::ExecutorService::submit(local_ref< java::lang::Runnable > const &a0, local_ref< java::lang::Object > const &a1)
{
	return local_ref< java::util::concurrent::Future >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::util::concurrent::Future > java::util::concurrent::ExecutorService::submit(local_ref< java::lang::Runnable > const &a0)
{
	return local_ref< java::util::concurrent::Future >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::List > java::util::concurrent::ExecutorService::invokeAll(local_ref< java::util::Collection > const &a0)
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::List > java::util::concurrent::ExecutorService::invokeAll(local_ref< java::util::Collection > const &a0, cpp_long const &a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::ExecutorService::invokeAny(local_ref< java::util::Collection > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::ExecutorService::invokeAny(local_ref< java::util::Collection > const &a0, cpp_long const &a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::ExecutorService,"java/util/concurrent/ExecutorService")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,0,"shutdown","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,1,"shutdownNow","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,2,"isShutdown","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,3,"isTerminated","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,4,"awaitTermination","(JLjava/util/concurrent/TimeUnit;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,5,"submit","(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,6,"submit","(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,7,"submit","(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,8,"invokeAll","(Ljava/util/Collection;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,9,"invokeAll","(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,10,"invokeAny","(Ljava/util/Collection;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ExecutorService,11,"invokeAny","(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_EXECUTORSERVICE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
