#
# Makefile for the Xilinx On Chip Peripheral support code
#

list-multi		:= xilinx_ocp.o

# Linux file to EXPORT_SYMBOL all of the Xilinx entries.
export-objs		+= xilinx_syms.o
xilinx_ocp-objs		+= xilinx_syms.o

# The Xilinx OS independent code.
xilinx_ocp-objs		+= xbasic_types.o xdma_channel.o xdma_channel_sg.o \
			   xipif_v1_23_b.o xpacket_fifo_v2_00_a.o \
			   xpacket_fifo_l_v2_00_a.o xversion.o

obj-$(CONFIG_XILINX_OCP) := xilinx_ocp.o

xilinx_ocp.o: $(xilinx_ocp-objs)
	$(LD) -r -o $@ $(xilinx_ocp-objs)

include $(TOPDIR)/Rules.make
