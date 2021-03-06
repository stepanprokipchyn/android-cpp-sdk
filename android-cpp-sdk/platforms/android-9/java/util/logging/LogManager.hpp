/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.logging.LogManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOGGING_LOGMANAGER_HPP_DECL
#define J2CPP_JAVA_UTIL_LOGGING_LOGMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace beans { class PropertyChangeListener; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Enumeration; } } }
namespace j2cpp { namespace java { namespace util { namespace logging { class Logger; } } } }
namespace j2cpp { namespace java { namespace util { namespace logging { class LoggingMXBean; } } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }


#include <java/beans/PropertyChangeListener.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Enumeration.hpp>
#include <java/util/logging/Logger.hpp>
#include <java/util/logging/LoggingMXBean.hpp>


namespace j2cpp {

namespace java { namespace util { namespace logging {

	class LogManager;
	class LogManager
		: public object<LogManager>
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
		J2CPP_DECLARE_FIELD(0)

		explicit LogManager(jobject jobj)
		: object<LogManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< java::util::logging::LoggingMXBean > getLoggingMXBean();
		void checkAccess();
		jboolean addLogger(local_ref< java::util::logging::Logger >  const&);
		local_ref< java::util::logging::Logger > getLogger(local_ref< java::lang::String >  const&);
		local_ref< java::util::Enumeration > getLoggerNames();
		static local_ref< java::util::logging::LogManager > getLogManager();
		local_ref< java::lang::String > getProperty(local_ref< java::lang::String >  const&);
		void readConfiguration();
		void readConfiguration(local_ref< java::io::InputStream >  const&);
		void reset();
		void addPropertyChangeListener(local_ref< java::beans::PropertyChangeListener >  const&);
		void removePropertyChangeListener(local_ref< java::beans::PropertyChangeListener >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > LOGGING_MXBEAN_NAME;
	}; //class LogManager

} //namespace logging
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOGGING_LOGMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOGGING_LOGMANAGER_HPP_IMPL
#define J2CPP_JAVA_UTIL_LOGGING_LOGMANAGER_HPP_IMPL

namespace j2cpp {



java::util::logging::LogManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::util::logging::LoggingMXBean > java::util::logging::LogManager::getLoggingMXBean()
{
	return call_static_method<
		java::util::logging::LogManager::J2CPP_CLASS_NAME,
		java::util::logging::LogManager::J2CPP_METHOD_NAME(1),
		java::util::logging::LogManager::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::logging::LoggingMXBean >
	>();
}

void java::util::logging::LogManager::checkAccess()
{
	return call_method<
		java::util::logging::LogManager::J2CPP_CLASS_NAME,
		java::util::logging::LogManager::J2CPP_METHOD_NAME(2),
		java::util::logging::LogManager::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

jboolean java::util::logging::LogManager::addLogger(local_ref< java::util::logging::Logger > const &a0)
{
	return call_method<
		java::util::logging::LogManager::J2CPP_CLASS_NAME,
		java::util::logging::LogManager::J2CPP_METHOD_NAME(3),
		java::util::logging::LogManager::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::util::logging::Logger > java::util::logging::LogManager::getLogger(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::logging::LogManager::J2CPP_CLASS_NAME,
		java::util::logging::LogManager::J2CPP_METHOD_NAME(4),
		java::util::logging::LogManager::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::logging::Logger >
	>(get_jobject(), a0);
}

local_ref< java::util::Enumeration > java::util::logging::LogManager::getLoggerNames()
{
	return call_method<
		java::util::logging::LogManager::J2CPP_CLASS_NAME,
		java::util::logging::LogManager::J2CPP_METHOD_NAME(5),
		java::util::logging::LogManager::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::util::Enumeration >
	>(get_jobject());
}

local_ref< java::util::logging::LogManager > java::util::logging::LogManager::getLogManager()
{
	return call_static_method<
		java::util::logging::LogManager::J2CPP_CLASS_NAME,
		java::util::logging::LogManager::J2CPP_METHOD_NAME(6),
		java::util::logging::LogManager::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::util::logging::LogManager >
	>();
}

local_ref< java::lang::String > java::util::logging::LogManager::getProperty(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::logging::LogManager::J2CPP_CLASS_NAME,
		java::util::logging::LogManager::J2CPP_METHOD_NAME(7),
		java::util::logging::LogManager::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

void java::util::logging::LogManager::readConfiguration()
{
	return call_method<
		java::util::logging::LogManager::J2CPP_CLASS_NAME,
		java::util::logging::LogManager::J2CPP_METHOD_NAME(8),
		java::util::logging::LogManager::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject());
}

void java::util::logging::LogManager::readConfiguration(local_ref< java::io::InputStream > const &a0)
{
	return call_method<
		java::util::logging::LogManager::J2CPP_CLASS_NAME,
		java::util::logging::LogManager::J2CPP_METHOD_NAME(9),
		java::util::logging::LogManager::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

void java::util::logging::LogManager::reset()
{
	return call_method<
		java::util::logging::LogManager::J2CPP_CLASS_NAME,
		java::util::logging::LogManager::J2CPP_METHOD_NAME(10),
		java::util::logging::LogManager::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject());
}

void java::util::logging::LogManager::addPropertyChangeListener(local_ref< java::beans::PropertyChangeListener > const &a0)
{
	return call_method<
		java::util::logging::LogManager::J2CPP_CLASS_NAME,
		java::util::logging::LogManager::J2CPP_METHOD_NAME(11),
		java::util::logging::LogManager::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}

void java::util::logging::LogManager::removePropertyChangeListener(local_ref< java::beans::PropertyChangeListener > const &a0)
{
	return call_method<
		java::util::logging::LogManager::J2CPP_CLASS_NAME,
		java::util::logging::LogManager::J2CPP_METHOD_NAME(12),
		java::util::logging::LogManager::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}


static_field<
	java::util::logging::LogManager::J2CPP_CLASS_NAME,
	java::util::logging::LogManager::J2CPP_FIELD_NAME(0),
	java::util::logging::LogManager::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> java::util::logging::LogManager::LOGGING_MXBEAN_NAME;


J2CPP_DEFINE_CLASS(java::util::logging::LogManager,"java/util/logging/LogManager")
J2CPP_DEFINE_METHOD(java::util::logging::LogManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::logging::LogManager,1,"getLoggingMXBean","()Ljava/util/logging/LoggingMXBean;")
J2CPP_DEFINE_METHOD(java::util::logging::LogManager,2,"checkAccess","()V")
J2CPP_DEFINE_METHOD(java::util::logging::LogManager,3,"addLogger","(Ljava/util/logging/Logger;)Z")
J2CPP_DEFINE_METHOD(java::util::logging::LogManager,4,"getLogger","(Ljava/lang/String;)Ljava/util/logging/Logger;")
J2CPP_DEFINE_METHOD(java::util::logging::LogManager,5,"getLoggerNames","()Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(java::util::logging::LogManager,6,"getLogManager","()Ljava/util/logging/LogManager;")
J2CPP_DEFINE_METHOD(java::util::logging::LogManager,7,"getProperty","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::logging::LogManager,8,"readConfiguration","()V")
J2CPP_DEFINE_METHOD(java::util::logging::LogManager,9,"readConfiguration","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::util::logging::LogManager,10,"reset","()V")
J2CPP_DEFINE_METHOD(java::util::logging::LogManager,11,"addPropertyChangeListener","(Ljava/beans/PropertyChangeListener;)V")
J2CPP_DEFINE_METHOD(java::util::logging::LogManager,12,"removePropertyChangeListener","(Ljava/beans/PropertyChangeListener;)V")
J2CPP_DEFINE_FIELD(java::util::logging::LogManager,0,"LOGGING_MXBEAN_NAME","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOGGING_LOGMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
