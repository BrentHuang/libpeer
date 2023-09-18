#ifndef CONFIG_H_
#define CONFIG_H_

#define SCTP_MTU (1200)
#define CONFIG_MTU (1300)

#ifdef ESP32
#define RSA_KEY_LENGTH 512
#define VIDEO_RB_DATA_LENGTH (CONFIG_MTU * 64)
#define AUDIO_RB_DATA_LENGTH (CONFIG_MTU * 64)
#define DATA_RB_DATA_LENGTH (SCTP_MTU * 128)
#define AUDIO_LATENCY 50 // ms
#else
#define HAVE_USRSCTP
#define RSA_KEY_LENGTH 2048
#define VIDEO_RB_DATA_LENGTH (CONFIG_MTU * 256)
#define AUDIO_RB_DATA_LENGTH (CONFIG_MTU * 256)
#define DATA_RB_DATA_LENGTH (SCTP_MTU * 128)
#define AUDIO_LATENCY 20 // ms
#endif

// siganling
#define MQTT_HOST "mqtt.eclipseprojects.io"
#define MQTT_PORT "8883"

#define KEEPALIVE_CONNCHECK 10000

// default use wifi interface
#define IFR_NAME "w"

//#define LOG_LEVEL LEVEL_DEBUG

#endif // CONFIG_H_
