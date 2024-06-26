/*
 * Copyright (c) 2024 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef __MSMHWIOREG_H__
#define __MSMHWIOREG_H__

#include "msmhwiobase.h"

#define HOST_SOC_CE_0_DST_WFSS_CE_0_CHANNEL_DST_REG_REG_BASE                                                                 (HOST_SOC_WFSS_CE_REG_BASE      + 0x00001000)
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R2_STATUS_RING_HP_ADDR                                                         (HOST_SOC_CE_0_DST_WFSS_CE_0_CHANNEL_DST_REG_REG_BASE      + 0x408)
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R2_STATUS_RING_TP_TAIL_PTR_BMSK                                                    0xffff
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R2_STATUS_RING_TP_TAIL_PTR_SHFT                                                         0
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_STATUS_RING_BASE_MSB_RING_SIZE_BMSK                                           0xffff00
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_STATUS_RING_BASE_MSB_RING_SIZE_SHFT                                                  8
#define HWIO_WCSS_UMAC_WBM_R0_MISC_CONTROL_SPARE_CONTROL_BMSK                                                        0xfffffffc
#define HWIO_WCSS_UMAC_WBM_R0_MISC_CONTROL_SPARE_CONTROL_SHFT                                                                 2
#define HOST_SOC_CE_0_SRC_WFSS_CE_0_CHANNEL_SRC_REG_REG_BASE                                                              (HOST_SOC_WFSS_CE_REG_BASE      + 0x00000000)
#define HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_LSB_ADDR                                                   (HOST_SOC_CE_0_SRC_WFSS_CE_0_CHANNEL_SRC_REG_REG_BASE      + 0x0)
#define HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_LSB_RMSK                                                   0xffffffff
#define HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_LSB_IN                    \
                in_dword(HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_LSB_ADDR)
#define HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_LSB_INM(m)            \
                in_dword_masked(HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_LSB_ADDR, m)
#define HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_LSB_OUT(v)            \
                out_dword(HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_LSB_ADDR,v)
#define HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_LSB_OUTM(m,v) \
                out_dword_masked_ns(HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_LSB_ADDR,m,v,HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_LSB_IN)
#define HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_LSB_RING_BASE_ADDR_LSB_BMSK                                0xffffffff
#define HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_LSB_RING_BASE_ADDR_LSB_SHFT                                         0
#define HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_MSB_ADDR                                                   (HOST_SOC_CE_0_SRC_WFSS_CE_0_CHANNEL_SRC_REG_REG_BASE      + 0x4)
#define HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_MSB_RMSK                                                     0xffffff
#define HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_MSB_IN                    \
                in_dword(HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_MSB_ADDR)
#define HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_MSB_INM(m)            \
                in_dword_masked(HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_MSB_ADDR, m)
#define HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_MSB_OUT(v)            \
                out_dword(HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_MSB_ADDR,v)
#define HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_MSB_OUTM(m,v) \
                out_dword_masked_ns(HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_MSB_ADDR,m,v,HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_MSB_IN)
#define HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_MSB_RING_SIZE_BMSK                                           0xffff00
#define HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R0_SRC_RING_BASE_MSB_RING_SIZE_SHFT                                                  8
#define HOST_SOC_CE_1_DST_WFSS_CE_1_CHANNEL_DST_REG_REG_BASE                                                                 (HOST_SOC_WFSS_CE_REG_BASE      + 0x00003000)
#define HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_ADDR                                                     (HOST_SOC_CE_1_DST_WFSS_CE_1_CHANNEL_DST_REG_REG_BASE      + 0x0)
#define HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_RMSK                                                     0xffffffff
#define HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_IN                    \
                in_dword(HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_ADDR)
#define HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_INM(m)            \
                in_dword_masked(HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_ADDR, m)
#define HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_OUT(v)            \
                out_dword(HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_ADDR,v)
#define HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_OUTM(m,v) \
                out_dword_masked_ns(HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_ADDR,m,v,HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_IN)
#define HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_RING_BASE_ADDR_LSB_BMSK                                  0xffffffff
#define HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_RING_BASE_ADDR_LSB_SHFT                                           0
#define HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_ADDR                                                     (HOST_SOC_CE_1_DST_WFSS_CE_1_CHANNEL_DST_REG_REG_BASE      + 0x4)
#define HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_RMSK                                                       0xffffff
#define HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_IN                    \
                in_dword(HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_ADDR)
#define HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_INM(m)            \
                in_dword_masked(HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_ADDR, m)
#define HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_OUT(v)            \
                out_dword(HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_ADDR,v)
#define HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_OUTM(m,v) \
                out_dword_masked_ns(HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_ADDR,m,v,HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_IN)
#define HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_RING_SIZE_BMSK                                             0xffff00
#define HWIO_SOC_CE_1_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_RING_SIZE_SHFT                                                    8
#define HWIO_SOC_CE_0_SRC_WFSS_CE_CHANNEL_SRC_R2_SRC_RING_HP_ADDR                                                         (HOST_SOC_CE_0_SRC_WFSS_CE_0_CHANNEL_SRC_REG_REG_BASE      + 0x400)
#define HOST_SOC_CE_1_SRC_WFSS_CE_1_CHANNEL_SRC_REG_REG_BASE                                                                 (HOST_SOC_WFSS_CE_REG_BASE      + 0x00002000)
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_ADDR                                                     (HOST_SOC_CE_0_DST_WFSS_CE_0_CHANNEL_DST_REG_REG_BASE      + 0x0)
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_RMSK                                                     0xffffffff
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_IN                    \
                in_dword(HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_ADDR)
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_INM(m)            \
                in_dword_masked(HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_ADDR, m)
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_OUT(v)            \
                out_dword(HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_ADDR,v)
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_OUTM(m,v) \
                out_dword_masked_ns(HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_ADDR,m,v,HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_IN)
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_RING_BASE_ADDR_LSB_BMSK                                  0xffffffff
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_LSB_RING_BASE_ADDR_LSB_SHFT                                           0
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_ADDR                                                     (HOST_SOC_CE_0_DST_WFSS_CE_0_CHANNEL_DST_REG_REG_BASE      + 0x4)
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_RMSK                                                       0xffffff
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_IN                    \
                in_dword(HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_ADDR)
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_INM(m)            \
                in_dword_masked(HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_ADDR, m)
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_OUT(v)            \
                out_dword(HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_ADDR,v)
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_OUTM(m,v) \
                out_dword_masked_ns(HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_ADDR,m,v,HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_IN)
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_RING_SIZE_BMSK                                             0xffff00
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_RING_SIZE_SHFT                                                    8
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_RING_BASE_ADDR_MSB_BMSK                                        0xff
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_DEST_RING_BASE_MSB_RING_BASE_ADDR_MSB_SHFT                                           0
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R2_DEST_RING_HP_ADDR                                                           (HOST_SOC_CE_0_DST_WFSS_CE_0_CHANNEL_DST_REG_REG_BASE      + 0x400)
#define HWIO_SOC_CE_0_DST_WFSS_CE_CHANNEL_DST_R0_STATUS_RING_BASE_LSB_ADDR                                                   (HOST_SOC_CE_0_DST_WFSS_CE_0_CHANNEL_DST_REG_REG_BASE      + 0x58)


#endif
