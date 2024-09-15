#pragma once

#define DEFAULT_MAX_LOOP_TIME_MILISECONDS 30
#define DEFAULT_MAX_RX_LOOP_TIMEOUT_MILISECONDS 49

#define DEFAULT_DELAY_WIFI_CHANGE 60

#define TIMEOUT_TELEMETRY_LOST 2000 // miliseconds
#define TIMEOUT_FC_MESSAGE 2500  // How long should the last message from FC should be send to controller. Send it for 2 seconds

#define TIMEOUT_RADIO_FRAMES_FLAGS_CHANGE_CONFIRMATION 5000

#define TIMEOUT_LINK_TO_CONTROLLER_LOST 3000

#define TIMEOUT_TEST_LINK_STATE_START 2000
#define TIMEOUT_TEST_LINK_STATE_APPLY_RADIO_PARAMS 5000
#define TIMEOUT_TEST_LINK_STATE_PING 3000
#define TIMEOUT_TEST_LINK_STATE_END 3000
