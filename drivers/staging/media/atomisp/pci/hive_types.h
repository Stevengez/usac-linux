/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Support for Intel Camera Imaging ISP subsystem.
 * Copyright (c) 2015, Intel Corporation.
 */

#ifndef _HRT_HIVE_TYPES_H
#define _HRT_HIVE_TYPES_H

#include "version.h"

/* boolean data type */
typedef unsigned int hive_bool;
#define hive_false 0
#define hive_true  1

typedef signed char          hive_int8;
typedef short                hive_int16;
typedef int                  hive_int32;
typedef long long            hive_int64;

typedef unsigned char        hive_uint8;
typedef unsigned short       hive_uint16;
typedef unsigned int         hive_uint32;
typedef unsigned long long   hive_uint64;

#define HRT_DATA_WIDTH	  32
#define HRT_ADDRESS_WIDTH 64
#define HRT_DATA_BYTES    (HRT_DATA_WIDTH / 8)
#define HRT_ADDRESS_BYTES (HRT_ADDRESS_WIDTH / 8)
#define SIZEOF_HRT_REG    (HRT_DATA_WIDTH >> 3)

typedef hive_uint32 hrt_data;
typedef hive_uint64 hrt_address;

/* use 64 bit addresses in simulation, where possible */
typedef hive_uint64  hive_sim_address;

/* below is for csim, not for hrt, rename and move this elsewhere */

typedef unsigned int hive_uint;
typedef hive_uint32  hive_address;
typedef hive_address hive_slave_address;
typedef hive_address hive_mem_address;

/* MMIO devices */
typedef hive_uint    hive_mmio_id;
typedef hive_mmio_id hive_slave_id;
typedef hive_mmio_id hive_port_id;
typedef hive_mmio_id hive_master_id;
typedef hive_mmio_id hive_mem_id;
typedef hive_mmio_id hive_dev_id;
typedef hive_mmio_id hive_fifo_id;

typedef hive_uint      hive_hier_id;
typedef hive_hier_id   hive_device_id;
typedef hive_device_id hive_proc_id;
typedef hive_device_id hive_cell_id;
typedef hive_device_id hive_host_id;
typedef hive_device_id hive_bus_id;
typedef hive_device_id hive_bridge_id;
typedef hive_device_id hive_fifo_adapter_id;
typedef hive_device_id hive_custom_device_id;

typedef hive_uint hive_slot_id;
typedef hive_uint hive_fu_id;
typedef hive_uint hive_reg_file_id;
typedef hive_uint hive_reg_id;

/* Streaming devices */
typedef hive_uint hive_outport_id;
typedef hive_uint hive_inport_id;

typedef hive_uint hive_msink_id;

/* HRT specific */
typedef char *hive_program;
typedef char *hive_function;

#endif /* _HRT_HIVE_TYPES_H */
