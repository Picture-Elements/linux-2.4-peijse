/******************************************************************/
/* xparameters.h file for ank_demo_010 design                     */
/******************************************************************/

/*******************************************************************
*
* CAUTION: This file is automatically generated by libgen.
* Version: Xilinx EDK 6.2.1 EDK_Gm.12.3
* DO NOT EDIT.
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by the
* Free Software Foundation; either version 2 of the License, or (at your
* option) any later version.
*
*
* XILINX IS PROVIDING THIS DESIGN, CODE, OR INFORMATION "AS IS" AS A
* COURTESY TO YOU. BY PROVIDING THIS DESIGN, CODE, OR INFORMATION AS
* ONE POSSIBLE IMPLEMENTATION OF THIS FEATURE, APPLICATION OR STANDARD,
* XILINX IS MAKING NO REPRESENTATION THAT THIS IMPLEMENTATION IS FREE
* FROM ANY CLAIMS OF INFRINGEMENT, AND YOU ARE RESPONSIBLE FOR OBTAINING
* ANY THIRD PARTY RIGHTS YOU MAY REQUIRE FOR YOUR IMPLEMENTATION.
* XILINX EXPRESSLY DISCLAIMS ANY WARRANTY WHATSOEVER WITH RESPECT TO
* THE ADEQUACY OF THE IMPLEMENTATION, INCLUDING BUT NOT LIMITED TO ANY
* WARRANTIES OR REPRESENTATIONS THAT THIS IMPLEMENTATION IS FREE FROM
* CLAIMS OF INFRINGEMENT, IMPLIED WARRANTIES OF MERCHANTABILITY AND
* FITNESS FOR A PARTICULAR PURPOSE.
*
*
* Xilinx hardware products are not intended for use in life support
* appliances, devices, or systems. Use in such applications is
* expressly prohibited.
*
*
* (c) Copyright 2002-2004 Xilinx Inc.
* All rights reserved.
*
*
* You should have received a copy of the GNU General Public License along
* with this program; if not, write to the Free Software Foundation, Inc.,
* 675 Mass Ave, Cambridge, MA 02139, USA.
*
* Description: Driver parameters
*
*******************************************************************/

#define XPAR_XUARTNS550_NUM_INSTANCES 2
#define XPAR_XUARTNS550_CLOCK_HZ 100000000
#define XPAR_RS232_BASEADDR 0xFE800000
#define XPAR_RS232_HIGHADDR 0xFE801FFF
#define XPAR_RS232_DEVICE_ID 0
#define XPAR_RS232_P160_BASEADDR 0xFE802000
#define XPAR_RS232_P160_HIGHADDR 0xFE803FFF
#define XPAR_RS232_P160_DEVICE_ID 1

/******************************************************************/

#define XPAR_XEMC_NUM_INSTANCES 1
#define XPAR_FLASH_2MX32_BASEADDR 0xFE804000
#define XPAR_FLASH_2MX32_HIGHADDR 0xFE80401F
#define XPAR_FLASH_2MX32_DEVICE_ID 0
#define XPAR_FLASH_2MX32_NUM_BANKS_MEM 1

/******************************************************************/

#define XPAR_FLASH_2MX32_MEM0_BASEADDR 0xFE000000
#define XPAR_FLASH_2MX32_MEM0_HIGHADDR 0xFE7FFFFF

/******************************************************************/

#define XPAR_XGPIO_NUM_INSTANCES 3
#define XPAR_LEDS_4BIT_BASEADDR 0xFE804200
#define XPAR_LEDS_4BIT_HIGHADDR 0xFE8043FF
#define XPAR_LEDS_4BIT_DEVICE_ID 0
#define XPAR_PUSH_BUTTONS_3BIT_BASEADDR 0xFE804400
#define XPAR_PUSH_BUTTONS_3BIT_HIGHADDR 0xFE8045FF
#define XPAR_PUSH_BUTTONS_3BIT_DEVICE_ID 1
#define XPAR_DIP_SWITCHES_8BIT_BASEADDR 0xFE804600
#define XPAR_DIP_SWITCHES_8BIT_HIGHADDR 0xFE8047FF
#define XPAR_DIP_SWITCHES_8BIT_DEVICE_ID 2

/******************************************************************/

#define XPAR_INTC_MAX_NUM_INTR_INPUTS 3
#define XPAR_XINTC_HAS_IPR 1
#define XPAR_XINTC_USE_DCR 0
#define XPAR_XINTC_NUM_INSTANCES 1
#define XPAR_OPB_INTC_0_BASEADDR 0xFE804020
#define XPAR_OPB_INTC_0_HIGHADDR 0xFE80403F
#define XPAR_OPB_INTC_0_DEVICE_ID 0
#define XPAR_OPB_INTC_0_KIND_OF_INTR 0x00000000

/******************************************************************/

#define XPAR_INTC_SINGLE_BASEADDR 0xFE804020
#define XPAR_INTC_SINGLE_HIGHADDR 0xFE80403F
#define XPAR_INTC_SINGLE_DEVICE_ID XPAR_OPB_INTC_0_DEVICE_ID
#define XPAR_ETHERNET_MAC_IP2INTC_IRPT_MASK 0X000001
#define XPAR_OPB_INTC_0_ETHERNET_MAC_IP2INTC_IRPT_INTR 0
#define XPAR_RS232_P160_IP2INTC_IRPT_MASK 0X000002
#define XPAR_OPB_INTC_0_RS232_P160_IP2INTC_IRPT_INTR 1
#define XPAR_RS232_IP2INTC_IRPT_MASK 0X000004
#define XPAR_OPB_INTC_0_RS232_IP2INTC_IRPT_INTR 2

/******************************************************************/

#define XPAR_OPB_LCD_INTERFACE_0_BASEADDR 0xFE804800
#define XPAR_OPB_LCD_INTERFACE_0_HIGHADDR 0xFE8048FF

/******************************************************************/

#define XPAR_XEMAC_NUM_INSTANCES 1
#define XPAR_ETHERNET_MAC_BASEADDR 0xFFFF0000
#define XPAR_ETHERNET_MAC_HIGHADDR 0xFFFF3FFF
#define XPAR_ETHERNET_MAC_DEVICE_ID 0
#define XPAR_ETHERNET_MAC_ERR_COUNT_EXIST 1
#define XPAR_ETHERNET_MAC_DMA_PRESENT 3
#define XPAR_ETHERNET_MAC_MII_EXIST 1

/******************************************************************/

#define XPAR_SDRAM_8MX32_BASEADDR 0x00000000
#define XPAR_SDRAM_8MX32_HIGHADDR 0x01FFFFFF

/******************************************************************/

#define XPAR_PLB_BRAM_IF_CNTLR_1_BASEADDR 0xFFFFC000
#define XPAR_PLB_BRAM_IF_CNTLR_1_HIGHADDR 0xFFFFFFFF

/******************************************************************/

#define XPAR_CPU_PPC405_CORE_CLOCK_FREQ_HZ 300000000

/******************************************************************/


/******************************************************************/

/* Linux Redefines */

/******************************************************************/

#define XPAR_UARTNS550_0_BASEADDR (XPAR_RS232_BASEADDR+0x1000)
#define XPAR_UARTNS550_0_HIGHADDR XPAR_RS232_HIGHADDR
#define XPAR_UARTNS550_0_CLOCK_FREQ_HZ XPAR_XUARTNS550_CLOCK_HZ
#define XPAR_UARTNS550_0_DEVICE_ID XPAR_RS232_DEVICE_ID
#define XPAR_UARTNS550_1_BASEADDR (XPAR_RS232_P160_BASEADDR+0x1000)
#define XPAR_UARTNS550_1_HIGHADDR XPAR_RS232_P160_HIGHADDR
#define XPAR_UARTNS550_1_CLOCK_FREQ_HZ XPAR_XUARTNS550_CLOCK_HZ
#define XPAR_UARTNS550_1_DEVICE_ID XPAR_RS232_P160_DEVICE_ID

/******************************************************************/

#define XPAR_EMAC_0_BASEADDR XPAR_ETHERNET_MAC_BASEADDR
#define XPAR_EMAC_0_HIGHADDR XPAR_ETHERNET_MAC_HIGHADDR
#define XPAR_EMAC_0_DMA_PRESENT XPAR_ETHERNET_MAC_DMA_PRESENT
#define XPAR_EMAC_0_MII_EXIST XPAR_ETHERNET_MAC_MII_EXIST
#define XPAR_EMAC_0_ERR_COUNT_EXIST XPAR_ETHERNET_MAC_ERR_COUNT_EXIST
#define XPAR_EMAC_0_DEVICE_ID XPAR_ETHERNET_MAC_DEVICE_ID

/******************************************************************/

#define XPAR_GPIO_0_BASEADDR XPAR_LEDS_4BIT_BASEADDR
#define XPAR_GPIO_0_HIGHADDR XPAR_LEDS_4BIT_HIGHADDR
#define XPAR_GPIO_0_DEVICE_ID XPAR_LEDS_4BIT_DEVICE_ID
#define XPAR_GPIO_1_BASEADDR XPAR_PUSH_BUTTONS_3BIT_BASEADDR
#define XPAR_GPIO_1_HIGHADDR XPAR_PUSH_BUTTONS_3BIT_HIGHADDR
#define XPAR_GPIO_1_DEVICE_ID XPAR_PUSH_BUTTONS_3BIT_DEVICE_ID
#define XPAR_GPIO_2_BASEADDR XPAR_DIP_SWITCHES_8BIT_BASEADDR
#define XPAR_GPIO_2_HIGHADDR XPAR_DIP_SWITCHES_8BIT_HIGHADDR
#define XPAR_GPIO_2_DEVICE_ID XPAR_DIP_SWITCHES_8BIT_DEVICE_ID

/******************************************************************/

#define XPAR_INTC_0_BASEADDR XPAR_OPB_INTC_0_BASEADDR
#define XPAR_INTC_0_HIGHADDR XPAR_OPB_INTC_0_HIGHADDR
#define XPAR_INTC_0_KIND_OF_INTR XPAR_OPB_INTC_0_KIND_OF_INTR
#define XPAR_INTC_0_DEVICE_ID XPAR_OPB_INTC_0_DEVICE_ID

/******************************************************************/

#define XPAR_INTC_0_EMAC_0_VEC_ID XPAR_OPB_INTC_0_ETHERNET_MAC_IP2INTC_IRPT_INTR
#define XPAR_INTC_0_UARTNS550_1_VEC_ID XPAR_OPB_INTC_0_RS232_P160_IP2INTC_IRPT_INTR
#define XPAR_INTC_0_UARTNS550_0_VEC_ID XPAR_OPB_INTC_0_RS232_IP2INTC_IRPT_INTR

/******************************************************************/

#define XPAR_PLB_CLOCK_FREQ_HZ 100000000
#define XPAR_CORE_CLOCK_FREQ_HZ XPAR_CPU_PPC405_CORE_CLOCK_FREQ_HZ
#define XPAR_DDR_0_SIZE 0x2000000

/******************************************************************/

#define XPAR_PCI_0_CLOCK_FREQ_HZ    0

/******************************************************************/
