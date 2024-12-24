#pragma once
#include "flags_osd.h"
#include "flags_video.h"

#define COMMAND_RESPONSE_FLAGS_OK 1
#define COMMAND_RESPONSE_FLAGS_FAILED 2
#define COMMAND_RESPONSE_FLAGS_UNKNOWN_COMMAND 4
#define COMMAND_RESPONSE_FLAGS_FAILED_INVALID_PARAMS 8


#define TELEMETRY_FLAGS_RXTX ((u32)(((u32)0x01)))
#define TELEMETRY_FLAGS_RXONLY ((u32)(((u32)0x01)<<1))
#define TELEMETRY_FLAGS_REQUEST_DATA_STREAMS ((u32)(((u32)0x01)<<2))
#define TELEMETRY_FLAGS_SPECTATOR_ENABLE ((u32)(((u32)0x01)<<3))
#define TELEMETRY_FLAGS_FORCE_ARMED ((u32)(((u32)0x01)<<4))
#define TELEMETRY_FLAGS_SEND_FULL_PACKETS_TO_CONTROLLER ((u32)(((u32)0x01)<<10))
//#define TELEMETRY_FLAGS_SEND_ON_LOWEST_DATARATE ((u32)(((u32)0x01)<<11))
#define TELEMETRY_FLAGS_ALLOW_ANY_VEHICLE_SYSID ((u32)(((u32)0x01)<<12))
#define TELEMETRY_FLAGS_REMOVE_DUPLICATE_FC_MESSAGES ((u32)(((u32)0x01)<<13))
#define TELEMETRY_FLAGS_DONT_SHOW_FC_MESSAGES ((u32)(((u32)0x01)<<14))


// First 5 bits are model type
// Last 3 bits are firmware type
#define MODEL_TYPE_MASK 0x1F     // 00011111
#define MODEL_FIRMWARE_MASK 0xE0 // 11100000

#define MODEL_TYPE_GENERIC 0
#define MODEL_TYPE_DRONE 1
#define MODEL_TYPE_AIRPLANE 2
#define MODEL_TYPE_HELI 3
#define MODEL_TYPE_CAR 4
#define MODEL_TYPE_BOAT 5
#define MODEL_TYPE_ROBOT 6
#define MODEL_TYPE_RELAY 7
#define MODEL_TYPE_LAST 8

#define MODEL_FIRMWARE_TYPE_RUBY 0

// Encryption flags for models

#define MODEL_ENC_FLAGS_NONE      ((u32)((u32)0x0))
#define MODEL_ENC_FLAG_ENC_BEACON ((u32)(((u32)0x01)))
#define MODEL_ENC_FLAG_ENC_DATA   ((u32)(((u32)0x01)<<1))
#define MODEL_ENC_FLAG_ENC_VIDEO  ((u32)(((u32)0x01)<<2))
#define MODEL_ENC_FLAG_ENC_ALL    ((u32)(((u32)0x01)<<3))

// raspivid commands
#define RASPIVID_COMMAND_ID_BRIGHTNESS 1
#define RASPIVID_COMMAND_ID_CONTRAST   2
#define RASPIVID_COMMAND_ID_SATURATION 3
#define RASPIVID_COMMAND_ID_SHARPNESS  4

#define RASPIVID_COMMAND_ID_FPS  10
#define RASPIVID_COMMAND_ID_KEYFRAME 11
#define RASPIVID_COMMAND_ID_SLICES 12

#define RASPIVID_COMMAND_ID_QUANTIZATION  50
#define RASPIVID_COMMAND_ID_QUANTIZATION_INIT 51
#define RASPIVID_COMMAND_ID_QUANTIZATION_MIN 52
#define RASPIVID_COMMAND_ID_QUANTIZATION_MAX  53
#define RASPIVID_COMMAND_ID_VIDEO_BITRATE 55
// bitrate param is in 100kb increments
#define RASPIVID_COMMAND_ID_QUIT 200


// Local control message model changed type

#define MODEL_CHANGED_GENERIC 0
#define MODEL_CHANGED_RADIO_LINK_FRAMES_FLAGS 1
#define MODEL_CHANGED_FREQUENCY 2
#define MODEL_CHANGED_RADIO_LINK_CAPABILITIES 3
#define MODEL_CHANGED_RADIO_POWERS 4
#define MODEL_CHANGED_ADAPTIVE_VIDEO_FLAGS 5
#define MODEL_CHANGED_EC_SCHEME 6
#define MODEL_CHANGED_CAMERA_PARAMS 7
#define MODEL_CHANGED_STATS 8
#define MODEL_CHANGED_VIDEO_BITRATE 9
#define MODEL_CHANGED_USER_SELECTED_VIDEO_PROFILE 10
#define MODEL_CHANGED_VIDEO_H264_QUANTIZATION 11
#define MODEL_CHANGED_SIK_PACKET_SIZE 12
#define MODEL_CHANGED_RADIO_LINK_PARAMS 14
#define MODEL_CHANGED_SIK_FREQUENCY 17
#define MODEL_CHANGED_VIDEO_RESOLUTION 18
#define MODEL_CHANGED_VIDEO_CODEC 19

#define MODEL_CHANGED_DEFAULT_MAX_ADATIVE_KEYFRAME 20
#define MODEL_CHANGED_VIDEO_KEYFRAME 21
#define MODEL_CHANGED_SWAPED_RADIO_INTERFACES 22
#define MODEL_CHANGED_ROTATED_RADIO_LINKS 23

#define MODEL_CHANGED_CONTROLLER_TELEMETRY 25
#define MODEL_CHANGED_RELAY_PARAMS 26
#define MODEL_CHANGED_VIDEO_IPQUANTIZATION_DELTA 27

#define MODEL_CHANGED_SERIAL_PORTS 30

#define MODEL_CHANGED_AUDIO_PARAMS 31
#define MODEL_CHANGED_OSD_PARAMS 32
#define MODEL_CHANGED_VEHICLE_GENERIC_PARAMS 33
#define MODEL_CHANGED_RADIO_DATARATES 34

#define MODEL_CHANGED_SYNCHRONISED_SETTINGS_FROM_VEHICLE 55
#define MODEL_CHANGED_RC_PARAMS 56
#define MODEL_CHANGED_RESET_RADIO_LINK 57
#define MODEL_CHANGED_THREADS_PRIORITIES 58

#define MODEL_CHANGED_CAMERA_BRIGHTNESS 128
#define MODEL_CHANGED_CAMERA_CONTRAST 129
#define MODEL_CHANGED_CAMERA_SATURATION 130
#define MODEL_CHANGED_CAMERA_HUE 131


//----------------------------------------------------
// Model & developer flags

// Used on uModelFlags :
#define MODEL_FLAG_PRIORITIZE_UPLINK ((u32)(((u32)0x01)))
#define MODEL_FLAG_USE_LOGER_SERVICE ((u32)(((u32)0x01)<<1))
#define MODEL_FLAG_DISABLE_ALL_LOGS  ((u32)(((u32)0x01)<<2))

// Used on radioLinksParams.uGlobalRadioLinksFlags :
#define MODEL_RADIOLINKS_FLAGS_DOWNLINK_ONLY ((u32)(((u32)0x01)))
#define MODEL_RADIOLINKS_FLAGS_BYPASS_SOCKETS_BUFFERS ((u32)(((u32)0x02)))
#define MODEL_RADIOLINKS_FLAGS_HAS_NEGOCIATED_LINKS ((u32)(((u32)0x04)))

// Used on uDeveloperFlags :
#define DEVELOPER_FLAGS_BIT_LIVE_LOG ((u32)(((u32)0x01)))
#define DEVELOPER_FLAGS_BIT_RADIO_SILENCE_FAILSAFE ((u32)(((u32)0x01)<<1))
#define DEVELOPER_FLAGS_BIT_LOG_ONLY_ERRORS ((u32)(((u32)0x01)<<2))
#define DEVELOPER_FLAGS_BIT_ENABLE_VIDEO_LINK_STATS ((u32)(((u32)0x01)<<3))
#define DEVELOPER_FLAGS_BIT_ENABLE_VIDEO_LINK_GRAPHS ((u32)(((u32)0x01)<<4))
#define DEVELOPER_FLAGS_BIT_INJECT_VIDEO_FAULTS ((u32)(((u32)0x01)<<5))
#define DEVELOPER_FLAGS_BIT_DISABLE_VIDEO_OVERLOAD_CHECK ((u32)(((u32)0x01)<<6))
#define DEVELOPER_FLAGS_BIT_SEND_BACK_VEHICLE_TX_GAP ((u32)(((u32)0x01)<<7))
//#define DEVELOPER_FLAGS_BIT_SEND_BACK_VEHICLE_VIDEO_BITRATE_HISTORY ((u32)(((u32)0x01)<<16))
#define DEVELOPER_FLAGS_BIT_INJECT_RECOVERABLE_VIDEO_FAULTS ((u32)(((u32)0x01)<<17))
#define DEVELOPER_FLAGS_USE_PCAP_RADIO_TX ((u32)(((u32)0x01)<<18))


#define RXTX_SYNC_TYPE_NONE 0
#define RXTX_SYNC_TYPE_BASIC 1
#define RXTX_SYNC_TYPE_ADV 2
#define RXTX_SYNC_TYPE_LAST 3


// Any of those can be set, multiple can be set
#define RELAY_CAPABILITY_TRANSPORT_TELEMETRY ((u32)1)
#define RELAY_CAPABILITY_TRANSPORT_VIDEO     (((u32)1)<<1)
#define RELAY_CAPABILITY_TRANSPORT_COMMANDS  (((u32)1)<<2)
#define RELAY_CAPABILITY_SWITCH_OSD         (((u32)1)<<3)
#define RELAY_CAPABILITY_MERGE_OSD          (((u32)1)<<4)

// Any of those can be set, multiple can be set
#define RELAY_MODE_MAIN       (((u32)1))
#define RELAY_MODE_REMOTE     (((u32)1)<<1)
#define RELAY_MODE_PIP_MAIN   (((u32)1)<<2)
#define RELAY_MODE_PIP_REMOTE (((u32)1)<<3)
#define RELAY_MODE_IS_RELAY_NODE   (((u32)1)<<4)
#define RELAY_MODE_IS_RELAYED_NODE (((u32)1)<<5)


#define LOG_TYPE_FLAGS_NONE 0
#define LOG_TYPE_FLAGS_ARMED 1
#define LOG_TYPE_FLAGS_RECORDING 2

#define LOG_PARAM_RADIO_DBM ((u32)1)
#define LOG_PARAM_RADIO_DATARATE (((u32)1)<<1)
#define LOG_PARAMS_VIDEO_PACKETS (((u32)1)<<2)
#define LOG_PARAMS_VIDEO_RETRANSMISSIONS (((u32)1)<<3)

// hardware capabilities flags in model's type_hardware_capabilities

#define MODEL_HW_CAP_FLAG_OTA ((u32)1)