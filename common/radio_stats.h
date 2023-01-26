#pragma once
#include "../base/base.h"
#include "../base/shared_mem.h"

#ifdef __cplusplus
extern "C" {
#endif  

void radio_stats_reset(shared_mem_radio_stats* pSMRS, int graphRefreshInterval);
void radio_stats_log_info(shared_mem_radio_stats* pSMRS);
int  radio_stats_periodic_update(shared_mem_radio_stats* pSMRS, u32 timeNow);
int radio_stats_update_on_packet_received(shared_mem_radio_stats* pSMRS, u32 timeNow, int iInterfaceIndex, u8* pPacketBuffer, int iPacketLength, int iCRCOk);

void radio_stats_set_radio_link_rt_delay(shared_mem_radio_stats* pSMRS, int iRadioLink, u32 delay);
void radio_stats_set_commands_rt_delay(shared_mem_radio_stats* pSMRS, u32 delay);
void radio_stats_set_tx_card_for_radio_link(shared_mem_radio_stats* pSMRS, int iRadioLink, int iTxCard);
void radio_stats_set_card_current_frequency(shared_mem_radio_stats* pSMRS, int iRadioInterface, int freq);


void radio_stats_update_on_packet_sent_on_radio_interface(shared_mem_radio_stats* pSMRS, u32 timeNow, int interfaceIndex, int iLinkIndex, int iStreamIndex, int iPacketLength, int iChainedCount);
void radio_stats_update_on_packet_sent_on_radio_link(shared_mem_radio_stats* pSMRS, u32 timeNow, int interfaceIndex, int iLinkIndex, int iStreamIndex, int iPacketLength, int iChainedCount);
void radio_stats_update_on_packet_sent_for_radio_stream(shared_mem_radio_stats* pSMRS, u32 timeNow, int iStreamIndex, int iPacketLength);

void radio_controller_links_stats_reset(t_packet_data_controller_link_stats* pControllerStats);
void radio_controller_links_stats_periodic_update(t_packet_data_controller_link_stats* pControllerStats, u32 timeNow);

#ifdef __cplusplus
}  
#endif
