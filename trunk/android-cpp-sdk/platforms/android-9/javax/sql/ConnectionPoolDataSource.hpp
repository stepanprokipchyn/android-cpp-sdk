/*================================================================================
  code generated by: java2cpp
  class: javax.sql.ConnectionPoolDataSource
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_CONNECTIONPOOLDATASOURCE_HPP_DECL
#define J2CPP_JAVAX_SQL_CONNECTIONPOOLDATASOURCE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace javax { namespace sql { class PooledConnection; } } }


#include <java/lang/String.hpp>
#include <javax/sql/PooledConnection.hpp>


namespace j2cpp {

namespace javax { namespace sql {

	class ConnectionPoolDataSource;
	class ConnectionPoolDataSource
		: public cpp_object<ConnectionPoolDataSource>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		ConnectionPoolDataSource(jobject jobj)
		: cpp_object<ConnectionPoolDataSource>(jobj)
		{
		}

		local_ref< javax::sql::PooledConnection > getPooledConnection();
		local_ref< javax::sql::PooledConnection > getPooledConnection(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
	}; //class ConnectionPoolDataSource

} //namespace sql
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_CONNECTIONPOOLDATASOURCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_CONNECTIONPOOLDATASOURCE_HPP_IMPL
#define J2CPP_JAVAX_SQL_CONNECTIONPOOLDATASOURCE_HPP_IMPL

namespace j2cpp {


local_ref< javax::sql::PooledConnection > javax::sql::ConnectionPoolDataSource::getPooledConnection()
{
	return local_ref< javax::sql::PooledConnection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< javax::sql::PooledConnection > javax::sql::ConnectionPoolDataSource::getPooledConnection(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< javax::sql::PooledConnection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::sql::ConnectionPoolDataSource,"javax/sql/ConnectionPoolDataSource")
J2CPP_DEFINE_METHOD(javax::sql::ConnectionPoolDataSource,0,"getPooledConnection","()Ljavax/sql/PooledConnection;")
J2CPP_DEFINE_METHOD(javax::sql::ConnectionPoolDataSource,1,"getPooledConnection","(Ljava/lang/String;Ljava/lang/String;)Ljavax/sql/PooledConnection;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_CONNECTIONPOOLDATASOURCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION