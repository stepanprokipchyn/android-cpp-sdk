/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.media.AudioTrack
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_AUDIOTRACK_HPP_DECL
#define J2CPP_ANDROID_MEDIA_AUDIOTRACK_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace os { class Handler; } } }
namespace j2cpp { namespace android { namespace media { namespace AudioTrack_ { class OnPlaybackPositionUpdateListener; } } } }


#include <android/media/AudioTrack.hpp>
#include <android/os/Handler.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace media {

	class AudioTrack;
	namespace AudioTrack_ {

		class OnPlaybackPositionUpdateListener;
		class OnPlaybackPositionUpdateListener
			: public object<OnPlaybackPositionUpdateListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			explicit OnPlaybackPositionUpdateListener(jobject jobj)
			: object<OnPlaybackPositionUpdateListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onMarkerReached(local_ref< android::media::AudioTrack >  const&);
			void onPeriodicNotification(local_ref< android::media::AudioTrack >  const&);
		}; //class OnPlaybackPositionUpdateListener

	} //namespace AudioTrack_

	class AudioTrack
		: public object<AudioTrack>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)

		typedef AudioTrack_::OnPlaybackPositionUpdateListener OnPlaybackPositionUpdateListener;

		explicit AudioTrack(jobject jobj)
		: object<AudioTrack>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		AudioTrack(jint, jint, jint, jint, jint, jint);
		void release();
		static jfloat getMinVolume();
		static jfloat getMaxVolume();
		jint getSampleRate();
		jint getPlaybackRate();
		jint getAudioFormat();
		jint getStreamType();
		jint getChannelConfiguration();
		jint getChannelCount();
		jint getState();
		jint getPlayState();
		jint getNotificationMarkerPosition();
		jint getPositionNotificationPeriod();
		jint getPlaybackHeadPosition();
		static jint getNativeOutputSampleRate(jint);
		static jint getMinBufferSize(jint, jint, jint);
		void setPlaybackPositionUpdateListener(local_ref< android::media::AudioTrack_::OnPlaybackPositionUpdateListener >  const&);
		void setPlaybackPositionUpdateListener(local_ref< android::media::AudioTrack_::OnPlaybackPositionUpdateListener >  const&, local_ref< android::os::Handler >  const&);
		jint setStereoVolume(jfloat, jfloat);
		jint setPlaybackRate(jint);
		jint setNotificationMarkerPosition(jint);
		jint setPositionNotificationPeriod(jint);
		jint setPlaybackHeadPosition(jint);
		jint setLoopPoints(jint, jint, jint);
		void play();
		void stop();
		void pause();
		void flush();
		jint write(local_ref< array<jbyte,1> >  const&, jint, jint);
		jint write(local_ref< array<jshort,1> >  const&, jint, jint);
		jint reloadStaticData();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > PLAYSTATE_STOPPED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > PLAYSTATE_PAUSED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > PLAYSTATE_PLAYING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > MODE_STATIC;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > MODE_STREAM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > STATE_UNINITIALIZED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > STATE_INITIALIZED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > STATE_NO_STATIC_DATA;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > SUCCESS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > ERROR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > ERROR_BAD_VALUE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > ERROR_INVALID_OPERATION;
	}; //class AudioTrack

} //namespace media
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_AUDIOTRACK_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_AUDIOTRACK_HPP_IMPL
#define J2CPP_ANDROID_MEDIA_AUDIOTRACK_HPP_IMPL

namespace j2cpp {




android::media::AudioTrack_::OnPlaybackPositionUpdateListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::media::AudioTrack_::OnPlaybackPositionUpdateListener::onMarkerReached(local_ref< android::media::AudioTrack > const &a0)
{
	return call_method<
		android::media::AudioTrack_::OnPlaybackPositionUpdateListener::J2CPP_CLASS_NAME,
		android::media::AudioTrack_::OnPlaybackPositionUpdateListener::J2CPP_METHOD_NAME(0),
		android::media::AudioTrack_::OnPlaybackPositionUpdateListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}

void android::media::AudioTrack_::OnPlaybackPositionUpdateListener::onPeriodicNotification(local_ref< android::media::AudioTrack > const &a0)
{
	return call_method<
		android::media::AudioTrack_::OnPlaybackPositionUpdateListener::J2CPP_CLASS_NAME,
		android::media::AudioTrack_::OnPlaybackPositionUpdateListener::J2CPP_METHOD_NAME(1),
		android::media::AudioTrack_::OnPlaybackPositionUpdateListener::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::media::AudioTrack_::OnPlaybackPositionUpdateListener,"android/media/AudioTrack$OnPlaybackPositionUpdateListener")
J2CPP_DEFINE_METHOD(android::media::AudioTrack_::OnPlaybackPositionUpdateListener,0,"onMarkerReached","(Landroid/media/AudioTrack;)V")
J2CPP_DEFINE_METHOD(android::media::AudioTrack_::OnPlaybackPositionUpdateListener,1,"onPeriodicNotification","(Landroid/media/AudioTrack;)V")



android::media::AudioTrack::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::media::AudioTrack::AudioTrack(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5)
: object<android::media::AudioTrack>(
	call_new_object<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(0),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2, a3, a4, a5)
)
{
}


void android::media::AudioTrack::release()
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(1),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}


jfloat android::media::AudioTrack::getMinVolume()
{
	return call_static_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(3),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(3), 
		jfloat
	>();
}

jfloat android::media::AudioTrack::getMaxVolume()
{
	return call_static_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(4),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(4), 
		jfloat
	>();
}

jint android::media::AudioTrack::getSampleRate()
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(5),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

jint android::media::AudioTrack::getPlaybackRate()
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(6),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

jint android::media::AudioTrack::getAudioFormat()
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(7),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject());
}

jint android::media::AudioTrack::getStreamType()
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(8),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject());
}

jint android::media::AudioTrack::getChannelConfiguration()
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(9),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(9), 
		jint
	>(get_jobject());
}

jint android::media::AudioTrack::getChannelCount()
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(10),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(10), 
		jint
	>(get_jobject());
}

jint android::media::AudioTrack::getState()
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(11),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(get_jobject());
}

jint android::media::AudioTrack::getPlayState()
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(12),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(12), 
		jint
	>(get_jobject());
}


jint android::media::AudioTrack::getNotificationMarkerPosition()
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(14),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(14), 
		jint
	>(get_jobject());
}

jint android::media::AudioTrack::getPositionNotificationPeriod()
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(15),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(15), 
		jint
	>(get_jobject());
}

jint android::media::AudioTrack::getPlaybackHeadPosition()
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(16),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(16), 
		jint
	>(get_jobject());
}

jint android::media::AudioTrack::getNativeOutputSampleRate(jint a0)
{
	return call_static_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(17),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(17), 
		jint
	>(a0);
}

jint android::media::AudioTrack::getMinBufferSize(jint a0, jint a1, jint a2)
{
	return call_static_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(18),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(18), 
		jint
	>(a0, a1, a2);
}

void android::media::AudioTrack::setPlaybackPositionUpdateListener(local_ref< android::media::AudioTrack_::OnPlaybackPositionUpdateListener > const &a0)
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(19),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0);
}

void android::media::AudioTrack::setPlaybackPositionUpdateListener(local_ref< android::media::AudioTrack_::OnPlaybackPositionUpdateListener > const &a0, local_ref< android::os::Handler > const &a1)
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(20),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(get_jobject(), a0, a1);
}

jint android::media::AudioTrack::setStereoVolume(jfloat a0, jfloat a1)
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(21),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(21), 
		jint
	>(get_jobject(), a0, a1);
}

jint android::media::AudioTrack::setPlaybackRate(jint a0)
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(22),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(22), 
		jint
	>(get_jobject(), a0);
}

jint android::media::AudioTrack::setNotificationMarkerPosition(jint a0)
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(23),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(23), 
		jint
	>(get_jobject(), a0);
}

jint android::media::AudioTrack::setPositionNotificationPeriod(jint a0)
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(24),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(24), 
		jint
	>(get_jobject(), a0);
}

jint android::media::AudioTrack::setPlaybackHeadPosition(jint a0)
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(25),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(25), 
		jint
	>(get_jobject(), a0);
}

jint android::media::AudioTrack::setLoopPoints(jint a0, jint a1, jint a2)
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(26),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(26), 
		jint
	>(get_jobject(), a0, a1, a2);
}


void android::media::AudioTrack::play()
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(28),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(28), 
		void
	>(get_jobject());
}

void android::media::AudioTrack::stop()
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(29),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(29), 
		void
	>(get_jobject());
}

void android::media::AudioTrack::pause()
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(30),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(30), 
		void
	>(get_jobject());
}

void android::media::AudioTrack::flush()
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(31),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(31), 
		void
	>(get_jobject());
}

jint android::media::AudioTrack::write(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(32),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(32), 
		jint
	>(get_jobject(), a0, a1, a2);
}

jint android::media::AudioTrack::write(local_ref< array<jshort,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(33),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(33), 
		jint
	>(get_jobject(), a0, a1, a2);
}

jint android::media::AudioTrack::reloadStaticData()
{
	return call_method<
		android::media::AudioTrack::J2CPP_CLASS_NAME,
		android::media::AudioTrack::J2CPP_METHOD_NAME(34),
		android::media::AudioTrack::J2CPP_METHOD_SIGNATURE(34), 
		jint
	>(get_jobject());
}


static_field<
	android::media::AudioTrack::J2CPP_CLASS_NAME,
	android::media::AudioTrack::J2CPP_FIELD_NAME(0),
	android::media::AudioTrack::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::media::AudioTrack::PLAYSTATE_STOPPED;

static_field<
	android::media::AudioTrack::J2CPP_CLASS_NAME,
	android::media::AudioTrack::J2CPP_FIELD_NAME(1),
	android::media::AudioTrack::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::media::AudioTrack::PLAYSTATE_PAUSED;

static_field<
	android::media::AudioTrack::J2CPP_CLASS_NAME,
	android::media::AudioTrack::J2CPP_FIELD_NAME(2),
	android::media::AudioTrack::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::media::AudioTrack::PLAYSTATE_PLAYING;

static_field<
	android::media::AudioTrack::J2CPP_CLASS_NAME,
	android::media::AudioTrack::J2CPP_FIELD_NAME(3),
	android::media::AudioTrack::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::media::AudioTrack::MODE_STATIC;

static_field<
	android::media::AudioTrack::J2CPP_CLASS_NAME,
	android::media::AudioTrack::J2CPP_FIELD_NAME(4),
	android::media::AudioTrack::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::media::AudioTrack::MODE_STREAM;

static_field<
	android::media::AudioTrack::J2CPP_CLASS_NAME,
	android::media::AudioTrack::J2CPP_FIELD_NAME(5),
	android::media::AudioTrack::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::media::AudioTrack::STATE_UNINITIALIZED;

static_field<
	android::media::AudioTrack::J2CPP_CLASS_NAME,
	android::media::AudioTrack::J2CPP_FIELD_NAME(6),
	android::media::AudioTrack::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::media::AudioTrack::STATE_INITIALIZED;

static_field<
	android::media::AudioTrack::J2CPP_CLASS_NAME,
	android::media::AudioTrack::J2CPP_FIELD_NAME(7),
	android::media::AudioTrack::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::media::AudioTrack::STATE_NO_STATIC_DATA;

static_field<
	android::media::AudioTrack::J2CPP_CLASS_NAME,
	android::media::AudioTrack::J2CPP_FIELD_NAME(8),
	android::media::AudioTrack::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::media::AudioTrack::SUCCESS;

static_field<
	android::media::AudioTrack::J2CPP_CLASS_NAME,
	android::media::AudioTrack::J2CPP_FIELD_NAME(9),
	android::media::AudioTrack::J2CPP_FIELD_SIGNATURE(9),
	jint
> android::media::AudioTrack::ERROR;

static_field<
	android::media::AudioTrack::J2CPP_CLASS_NAME,
	android::media::AudioTrack::J2CPP_FIELD_NAME(10),
	android::media::AudioTrack::J2CPP_FIELD_SIGNATURE(10),
	jint
> android::media::AudioTrack::ERROR_BAD_VALUE;

static_field<
	android::media::AudioTrack::J2CPP_CLASS_NAME,
	android::media::AudioTrack::J2CPP_FIELD_NAME(11),
	android::media::AudioTrack::J2CPP_FIELD_SIGNATURE(11),
	jint
> android::media::AudioTrack::ERROR_INVALID_OPERATION;


J2CPP_DEFINE_CLASS(android::media::AudioTrack,"android/media/AudioTrack")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,0,"<init>","(IIIIII)V")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,1,"release","()V")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,2,"finalize","()V")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,3,"getMinVolume","()F")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,4,"getMaxVolume","()F")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,5,"getSampleRate","()I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,6,"getPlaybackRate","()I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,7,"getAudioFormat","()I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,8,"getStreamType","()I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,9,"getChannelConfiguration","()I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,10,"getChannelCount","()I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,11,"getState","()I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,12,"getPlayState","()I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,13,"getNativeFrameCount","()I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,14,"getNotificationMarkerPosition","()I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,15,"getPositionNotificationPeriod","()I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,16,"getPlaybackHeadPosition","()I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,17,"getNativeOutputSampleRate","(I)I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,18,"getMinBufferSize","(III)I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,19,"setPlaybackPositionUpdateListener","(Landroid/media/AudioTrack$OnPlaybackPositionUpdateListener;)V")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,20,"setPlaybackPositionUpdateListener","(Landroid/media/AudioTrack$OnPlaybackPositionUpdateListener;Landroid/os/Handler;)V")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,21,"setStereoVolume","(FF)I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,22,"setPlaybackRate","(I)I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,23,"setNotificationMarkerPosition","(I)I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,24,"setPositionNotificationPeriod","(I)I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,25,"setPlaybackHeadPosition","(I)I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,26,"setLoopPoints","(III)I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,27,"setState","(I)V")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,28,"play","()V")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,29,"stop","()V")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,30,"pause","()V")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,31,"flush","()V")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,32,"write","([BII)I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,33,"write","([SII)I")
J2CPP_DEFINE_METHOD(android::media::AudioTrack,34,"reloadStaticData","()I")
J2CPP_DEFINE_FIELD(android::media::AudioTrack,0,"PLAYSTATE_STOPPED","I")
J2CPP_DEFINE_FIELD(android::media::AudioTrack,1,"PLAYSTATE_PAUSED","I")
J2CPP_DEFINE_FIELD(android::media::AudioTrack,2,"PLAYSTATE_PLAYING","I")
J2CPP_DEFINE_FIELD(android::media::AudioTrack,3,"MODE_STATIC","I")
J2CPP_DEFINE_FIELD(android::media::AudioTrack,4,"MODE_STREAM","I")
J2CPP_DEFINE_FIELD(android::media::AudioTrack,5,"STATE_UNINITIALIZED","I")
J2CPP_DEFINE_FIELD(android::media::AudioTrack,6,"STATE_INITIALIZED","I")
J2CPP_DEFINE_FIELD(android::media::AudioTrack,7,"STATE_NO_STATIC_DATA","I")
J2CPP_DEFINE_FIELD(android::media::AudioTrack,8,"SUCCESS","I")
J2CPP_DEFINE_FIELD(android::media::AudioTrack,9,"ERROR","I")
J2CPP_DEFINE_FIELD(android::media::AudioTrack,10,"ERROR_BAD_VALUE","I")
J2CPP_DEFINE_FIELD(android::media::AudioTrack,11,"ERROR_INVALID_OPERATION","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_AUDIOTRACK_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
