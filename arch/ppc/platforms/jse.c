/*
 * Copyright (c) 2003 Picture Elements, Inc.
 *    Stephen Williams (steve@picturel.com)
 *
 *    This source code is free software; you can redistribute it
 *    and/or modify it in source code form under the terms of the GNU
 *    General Public License as published by the Free Software
 *    Foundation; either version 2 of the License, or (at your option)
 *    any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */
#ident "$Id:$"

#include <linux/config.h>
#include <linux/console.h>
#include <linux/serial_reg.h>
#include <linux/init.h>
#include <asm/ibm4xx.h>
#include <asm/pci-bridge.h>
#include <asm/machdep.h>

int ppc405_map_irq(struct pci_dev *dev, unsigned char idsel,
		   unsigned char pin)
{
	/* These IRQ mappings for PCI devices are imposed by the
	   physical layout of the board. */
      static char pci_irq_table[][4] = {
	      /* IDSEL 6 - PCI slot 1      - EXT IRQ 0 */
	    {25, 25, 25, 25},
	      /* IDSEL 7 - PCI slot 2      - EXT IRQ 1 */
	    {26, 26, 26, 26},
	      /* IDSEL 8 - <unused>        - <none>    */
	    { 0,  0,  0,  0},
	      /* IDSEL 9  - <unused>        - <none>    */
	    { 0,  0,  0,  0},
	      /* IDSEL 10 - PCI host bridge - EXT IRQ 3 */
	    {28, 28, 28, 28},
	      /* IDSEL 11 - JP2C            - EXT IRQ 2 */
	    {27, 27, 27, 27}
      };

      const long min_idsel = 6, max_idsel = 11, irqs_per_slot = 4;
      return PCI_IRQ_TABLE_LOOKUP;
}

#if 0
/*
 * This is a diagnostic console for debugging when the serial is not
 * working for me.
 */

static void
jse_serial_putc(u8 * com_port, unsigned char c)
{
	while ((readb(com_port + (UART_LSR)) & UART_LSR_THRE) == 0) ;
	writeb(c, com_port);
}

static void jse_console_write(struct console*jc, const char*txt, unsigned cnt)
{
      char c;
      u8 *com_port = (u8 *) UART1_IO_BASE;

      while (cnt > 0 &&  (c = *txt++)) {
	    jse_serial_putc(com_port, c);
	    if (c == '\n') jse_serial_putc(com_port, '\r');
      }
}

static int jse_console_read(struct console*jc, const char*txt, unsigned cnt)
{
      return -1;
}

static struct console jse_console = {
      name:    "jcons",
      write:   jse_console_write,
      read:    jse_console_read,
      device:  0,
      unblank: 0,
      setup:   0,
      flags:   0,
      next:    0
};
#endif

void __init
board_setup_arch(void)
{
      unsigned long mem = 0;
      unsigned long bp_pages=0;
      char bpa_buf[56];
      char*cp;

      if (ppc_md.find_end_of_memory)
	    mem = (ppc_md.find_end_of_memory) ();

      if (mem > 24*1024*1024)
	    bp_pages = (mem - 24*1024*1024) / PAGE_SIZE;

	/* register_console(&jse_console); */
      printk("Picture Elements JSE (C) 2004-2006 Picture Elements, Inc.\n");

	/* If there is no other bigphysarea= setting, then create our
	   own automatic choice from the bp_pages value calculated
	   above. */
      if ((cp = strstr(cmd_line, "bigphysarea=")) == 0) {
	    printk("Using bigphysarea=%lu\n", bp_pages);
	    snprintf(bpa_buf, sizeof bpa_buf, " bigphysarea=%lu", bp_pages);
	    strcat(cmd_line,bpa_buf);
      }
}

void __init
board_io_mapping(void)
{
}

void __init
board_setup_irq(void)
{
	/* This is already done by the U-Boot BIOS. */
}

void __init
board_init(void)
{
}

/*
 * $Log: $
 */

