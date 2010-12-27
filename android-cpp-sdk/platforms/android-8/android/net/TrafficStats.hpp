/*================================================================================
  code generated by: java2cpp
  class: android.net.TrafficStats
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_TRAFFICSTATS_HPP_DECL
#define J2CPP_ANDROID_NET_TRAFFICSTATS_HPP_DECL






namespace j2cpp {

namespace android { namespace net {

	class TrafficStats;
	class TrafficStats
		: public cpp_object<TrafficStats>
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

		TrafficStats(jobject jobj)
		: cpp_object<TrafficStats>(jobj)
		{
		}

		static cpp_long getMobileTxPackets();
		static cpp_long getMobileRxPackets();
		static cpp_long getMobileTxBytes();
		static cpp_long getMobileRxBytes();
		static cpp_long getTotalTxPackets();
		static cpp_long getTotalRxPackets();
		static cpp_long getTotalTxBytes();
		static cpp_long getTotalRxBytes();
		static cpp_long getUidTxBytes(cpp_int const&);
		static cpp_long getUidRxBytes(cpp_int const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > UNSUPPORTED;
	}; //class TrafficStats

} //namespace net
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_TRAFFICSTATS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_TRAFFICSTATS_HPP_IMPL
#define J2CPP_ANDROID_NET_TRAFFICSTATS_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::net::TrafficStats > create< android::net::TrafficStats>()
{
	return local_ref< android::net::TrafficStats >(
		environment::get().get_jenv()->NewObject(
			get_class<android::net::TrafficStats::J2CPP_CLASS_NAME>(),
			get_method_id<android::net::TrafficStats::J2CPP_CLASS_NAME, android::net::TrafficStats::J2CPP_METHOD_NAME(0), android::net::TrafficStats::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_long android::net::TrafficStats::getMobileTxPackets()
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

cpp_long android::net::TrafficStats::getMobileRxPackets()
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>()
		)
	);
}

cpp_long android::net::TrafficStats::getMobileTxBytes()
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>()
		)
	);
}

cpp_long android::net::TrafficStats::getMobileRxBytes()
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>()
		)
	);
}

cpp_long android::net::TrafficStats::getTotalTxPackets()
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>()
		)
	);
}

cpp_long android::net::TrafficStats::getTotalRxPackets()
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>()
		)
	);
}

cpp_long android::net::TrafficStats::getTotalTxBytes()
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>()
		)
	);
}

cpp_long android::net::TrafficStats::getTotalRxBytes()
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>()
		)
	);
}

cpp_long android::net::TrafficStats::getUidTxBytes(cpp_int const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), true>(),
			a0.get_jtype()
		)
	);
}

cpp_long android::net::TrafficStats::getUidRxBytes(cpp_int const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), true>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::net::TrafficStats::J2CPP_CLASS_NAME,
	android::net::TrafficStats::J2CPP_FIELD_NAME(0),
	android::net::TrafficStats::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::net::TrafficStats::UNSUPPORTED;


J2CPP_DEFINE_CLASS(android::net::TrafficStats,"android/net/TrafficStats")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,1,"getMobileTxPackets","()J")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,2,"getMobileRxPackets","()J")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,3,"getMobileTxBytes","()J")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,4,"getMobileRxBytes","()J")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,5,"getTotalTxPackets","()J")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,6,"getTotalRxPackets","()J")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,7,"getTotalTxBytes","()J")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,8,"getTotalRxBytes","()J")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,9,"getUidTxBytes","(I)J")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,10,"getUidRxBytes","(I)J")
J2CPP_DEFINE_FIELD(android::net::TrafficStats,0,"UNSUPPORTED","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_TRAFFICSTATS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION