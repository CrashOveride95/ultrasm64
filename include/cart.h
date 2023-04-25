/******************************************************************************/
/*               libcart - Nintendo 64 flash cartridge library                */
/*                    Copyright (C) 2022 - 2023 devwizard                     */
/*     This project is licensed under the terms of the MIT license.  See      */
/*     LICENSE for more information.                                          */
/******************************************************************************/

#ifndef __CART_H__
#define __CART_H__

#ifdef _ULTRA64
#include <ultra64.h>
#else
#include <libdragon.h>
typedef uint32_t u32;
#endif

#define CART_NULL       -1
#define CART_CI         0
#define CART_EDX        1
#define CART_ED         2
#define CART_SC         3
#define CART_MAX        4

#ifdef __cplusplus
extern "C" {
#endif

extern u32 cart_dom1;
extern u32 cart_dom2;

extern int cart_type;

extern int cart_init(void);
extern int cart_exit(void);
extern int cart_card_init(void);
extern int cart_card_swap(int flag);
extern int cart_card_rd_dram(void *dram, u32 lba, u32 count);
extern int cart_card_rd_cart(u32 cart, u32 lba, u32 count);
extern int cart_card_wr_dram(const void *dram, u32 lba, u32 count);
extern int cart_card_wr_cart(u32 cart, u32 lba, u32 count);

extern int ci_init(void);
extern int ci_exit(void);
extern int ci_card_init(void);
extern int ci_card_swap(int flag);
extern int ci_card_rd_dram(void *dram, u32 lba, u32 count);
extern int ci_card_rd_cart(u32 cart, u32 lba, u32 count);
extern int ci_card_wr_dram(const void *dram, u32 lba, u32 count);
extern int ci_card_wr_cart(u32 cart, u32 lba, u32 count);

extern int edx_init(void);
extern int edx_exit(void);
extern int edx_card_init(void);
extern int edx_card_swap(int flag);
extern int edx_card_rd_dram(void *dram, u32 lba, u32 count);
extern int edx_card_rd_cart(u32 cart, u32 lba, u32 count);
extern int edx_card_wr_dram(const void *dram, u32 lba, u32 count);
extern int edx_card_wr_cart(u32 cart, u32 lba, u32 count);

extern int ed_init(void);
extern int ed_exit(void);
extern int ed_card_init(void);
extern int ed_card_swap(int flag);
extern int ed_card_rd_dram(void *dram, u32 lba, u32 count);
extern int ed_card_rd_cart(u32 cart, u32 lba, u32 count);
extern int ed_card_wr_dram(const void *dram, u32 lba, u32 count);
extern int ed_card_wr_cart(u32 cart, u32 lba, u32 count);

extern int sc_init(void);
extern int sc_exit(void);
extern int sc_card_init(void);
extern int sc_card_swap(int flag);
extern int sc_card_rd_dram(void *dram, u32 lba, u32 count);
extern int sc_card_rd_cart(u32 cart, u32 lba, u32 count);
extern int sc_card_wr_dram(const void *dram, u32 lba, u32 count);
extern int sc_card_wr_cart(u32 cart, u32 lba, u32 count);

#ifdef __cplusplus
}
#endif

#endif /* __CART_H__ */
