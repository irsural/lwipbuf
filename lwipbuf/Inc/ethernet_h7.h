/**
  ******************************************************************************
  * @file    LwIP/LwIP_TCP_Echo_Server/Inc/ethernetif.h 
  * @author  MCD Application Team
  * @brief   Header for ethernetif.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

#ifndef __ETHERNET_H7_H__
#define __ETHERNET_H7_H__

#include "lwip/err.h"
#include "lwip/netif.h"

#ifdef USE_LCD
#include "lcd_trace.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define UID_H7_BEGIN (reinterpret_cast<const irs_u8*>(0x1FF1E800))
#define UID_H7_SIZE 12
  
/* Exported types ------------------------------------------------------------*/
err_t ethernetif_init(struct netif *netif);
void ethernetif_input(struct netif *netif);
void ethernet_link_check_state(struct netif *netif);
void eth_set_mac(u8_t a_hwaddr[NETIF_MAX_HWADDR_LEN]);

#ifdef __cplusplus
}
#endif

#endif
