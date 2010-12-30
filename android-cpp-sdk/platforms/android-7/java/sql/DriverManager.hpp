/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.sql.DriverManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_DRIVERMANAGER_HPP_DECL
#define J2CPP_JAVA_SQL_DRIVERMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class PrintStream; } } }
namespace j2cpp { namespace java { namespace io { class PrintWriter; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace sql { class Driver; } } }
namespace j2cpp { namespace java { namespace sql { class Connection; } } }
namespace j2cpp { namespace java { namespace util { class Properties; } } }
namespace j2cpp { namespace java { namespace util { class Enumeration; } } }


#include <java/io/PrintStream.hpp>
#include <java/io/PrintWriter.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/sql/Connection.hpp>
#include <java/sql/Driver.hpp>
#include <java/util/Enumeration.hpp>
#include <java/util/Properties.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class DriverManager;
	class DriverManager
		: public object<DriverManager>
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

		explicit DriverManager(jobject jobj)
		: object<DriverManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static void deregisterDriver(local_ref< java::sql::Driver >  const&);
		static local_ref< java::sql::Connection > getConnection(local_ref< java::lang::String >  const&);
		static local_ref< java::sql::Connection > getConnection(local_ref< java::lang::String >  const&, local_ref< java::util::Properties >  const&);
		static local_ref< java::sql::Connection > getConnection(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static local_ref< java::sql::Driver > getDriver(local_ref< java::lang::String >  const&);
		static local_ref< java::util::Enumeration > getDrivers();
		static jint getLoginTimeout();
		static local_ref< java::io::PrintStream > getLogStream();
		static local_ref< java::io::PrintWriter > getLogWriter();
		static void println(local_ref< java::lang::String >  const&);
		static void registerDriver(local_ref< java::sql::Driver >  const&);
		static void setLoginTimeout(jint);
		static void setLogStream(local_ref< java::io::PrintStream >  const&);
		static void setLogWriter(local_ref< java::io::PrintWriter >  const&);
	}; //class DriverManager

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_DRIVERMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_DRIVERMANAGER_HPP_IMPL
#define J2CPP_JAVA_SQL_DRIVERMANAGER_HPP_IMPL

namespace j2cpp {



java::sql::DriverManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


void java::sql::DriverManager::deregisterDriver(local_ref< java::sql::Driver > const &a0)
{
	return call_static_method<
		java::sql::DriverManager::J2CPP_CLASS_NAME,
		java::sql::DriverManager::J2CPP_METHOD_NAME(1),
		java::sql::DriverManager::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(a0);
}

local_ref< java::sql::Connection > java::sql::DriverManager::getConnection(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::sql::DriverManager::J2CPP_CLASS_NAME,
		java::sql::DriverManager::J2CPP_METHOD_NAME(2),
		java::sql::DriverManager::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::sql::Connection > >
	(a0);
}

local_ref< java::sql::Connection > java::sql::DriverManager::getConnection(local_ref< java::lang::String > const &a0, local_ref< java::util::Properties > const &a1)
{
	return call_static_method<
		java::sql::DriverManager::J2CPP_CLASS_NAME,
		java::sql::DriverManager::J2CPP_METHOD_NAME(3),
		java::sql::DriverManager::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::sql::Connection > >
	(a0, a1);
}

local_ref< java::sql::Connection > java::sql::DriverManager::getConnection(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_static_method<
		java::sql::DriverManager::J2CPP_CLASS_NAME,
		java::sql::DriverManager::J2CPP_METHOD_NAME(4),
		java::sql::DriverManager::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::sql::Connection > >
	(a0, a1, a2);
}

local_ref< java::sql::Driver > java::sql::DriverManager::getDriver(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::sql::DriverManager::J2CPP_CLASS_NAME,
		java::sql::DriverManager::J2CPP_METHOD_NAME(5),
		java::sql::DriverManager::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::sql::Driver > >
	(a0);
}

local_ref< java::util::Enumeration > java::sql::DriverManager::getDrivers()
{
	return call_static_method<
		java::sql::DriverManager::J2CPP_CLASS_NAME,
		java::sql::DriverManager::J2CPP_METHOD_NAME(6),
		java::sql::DriverManager::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::util::Enumeration > >
	();
}

jint java::sql::DriverManager::getLoginTimeout()
{
	return call_static_method<
		java::sql::DriverManager::J2CPP_CLASS_NAME,
		java::sql::DriverManager::J2CPP_METHOD_NAME(7),
		java::sql::DriverManager::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	();
}

local_ref< java::io::PrintStream > java::sql::DriverManager::getLogStream()
{
	return call_static_method<
		java::sql::DriverManager::J2CPP_CLASS_NAME,
		java::sql::DriverManager::J2CPP_METHOD_NAME(8),
		java::sql::DriverManager::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::io::PrintStream > >
	();
}

local_ref< java::io::PrintWriter > java::sql::DriverManager::getLogWriter()
{
	return call_static_method<
		java::sql::DriverManager::J2CPP_CLASS_NAME,
		java::sql::DriverManager::J2CPP_METHOD_NAME(9),
		java::sql::DriverManager::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::io::PrintWriter > >
	();
}

void java::sql::DriverManager::println(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::sql::DriverManager::J2CPP_CLASS_NAME,
		java::sql::DriverManager::J2CPP_METHOD_NAME(10),
		java::sql::DriverManager::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(a0);
}

void java::sql::DriverManager::registerDriver(local_ref< java::sql::Driver > const &a0)
{
	return call_static_method<
		java::sql::DriverManager::J2CPP_CLASS_NAME,
		java::sql::DriverManager::J2CPP_METHOD_NAME(11),
		java::sql::DriverManager::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(a0);
}

void java::sql::DriverManager::setLoginTimeout(jint a0)
{
	return call_static_method<
		java::sql::DriverManager::J2CPP_CLASS_NAME,
		java::sql::DriverManager::J2CPP_METHOD_NAME(12),
		java::sql::DriverManager::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(a0);
}

void java::sql::DriverManager::setLogStream(local_ref< java::io::PrintStream > const &a0)
{
	return call_static_method<
		java::sql::DriverManager::J2CPP_CLASS_NAME,
		java::sql::DriverManager::J2CPP_METHOD_NAME(13),
		java::sql::DriverManager::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(a0);
}

void java::sql::DriverManager::setLogWriter(local_ref< java::io::PrintWriter > const &a0)
{
	return call_static_method<
		java::sql::DriverManager::J2CPP_CLASS_NAME,
		java::sql::DriverManager::J2CPP_METHOD_NAME(14),
		java::sql::DriverManager::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(a0);
}


J2CPP_DEFINE_CLASS(java::sql::DriverManager,"java/sql/DriverManager")
J2CPP_DEFINE_METHOD(java::sql::DriverManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::sql::DriverManager,1,"deregisterDriver","(Ljava/sql/Driver;)V")
J2CPP_DEFINE_METHOD(java::sql::DriverManager,2,"getConnection","(Ljava/lang/String;)Ljava/sql/Connection;")
J2CPP_DEFINE_METHOD(java::sql::DriverManager,3,"getConnection","(Ljava/lang/String;Ljava/util/Properties;)Ljava/sql/Connection;")
J2CPP_DEFINE_METHOD(java::sql::DriverManager,4,"getConnection","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/Connection;")
J2CPP_DEFINE_METHOD(java::sql::DriverManager,5,"getDriver","(Ljava/lang/String;)Ljava/sql/Driver;")
J2CPP_DEFINE_METHOD(java::sql::DriverManager,6,"getDrivers","()Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(java::sql::DriverManager,7,"getLoginTimeout","()I")
J2CPP_DEFINE_METHOD(java::sql::DriverManager,8,"getLogStream","()Ljava/io/PrintStream;")
J2CPP_DEFINE_METHOD(java::sql::DriverManager,9,"getLogWriter","()Ljava/io/PrintWriter;")
J2CPP_DEFINE_METHOD(java::sql::DriverManager,10,"println","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::DriverManager,11,"registerDriver","(Ljava/sql/Driver;)V")
J2CPP_DEFINE_METHOD(java::sql::DriverManager,12,"setLoginTimeout","(I)V")
J2CPP_DEFINE_METHOD(java::sql::DriverManager,13,"setLogStream","(Ljava/io/PrintStream;)V")
J2CPP_DEFINE_METHOD(java::sql::DriverManager,14,"setLogWriter","(Ljava/io/PrintWriter;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_DRIVERMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
