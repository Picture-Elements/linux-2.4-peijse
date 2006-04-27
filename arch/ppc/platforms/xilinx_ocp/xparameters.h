/*
 * xparameters.h
 *
 * This file includes the correct xparameters.h for the CONFIG'ed board
 *
 * Author: MontaVista Software, Inc.
 *         source@mvista.com
 *
 * 2002 (c) MontaVista, Software, Inc.  This file is licensed under the terms
 * of the GNU General Public License version 2.  This program is licensed
 * "as is" without any warranty of any kind, whether express or implied.
 */

#include <linux/config.h>

#if defined(CONFIG_XILINX_ML300)
#include "xparameters_ml300.h"
#endif

#if defined(CONFIG_MEMEC_2VPX)
#include "xparameters_2vpx.h"
#endif

#if defined(CONFIG_JSE)
#include "xparameters_jse.h"
#endif
