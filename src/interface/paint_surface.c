/*****************************************************************************
 * Copyright (c) 2014 Ted John
 * OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
 *
 * This file is part of OpenRCT2.
 *
 * OpenRCT2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *****************************************************************************/

#include "paint_surface.h"
#include "viewport.h"
#include "../config.h"


const uint8 byte_97B444[] = {
	0, 2, 1, 3, 8, 10, 9, 11, 4, 6,
	5, 7, 12, 14, 13, 15, 0, 0, 0, 0,
	0, 0, 0, 17, 0, 0, 0, 16, 0, 18,
	15, 0
};

// rct2: 0x97B464
const rct_xy16 viewport_surface_paint_data_0[] = {
	{32,  0},
	{-32, 32},
	{-64, 32},
	{0,   -64}
};

// rct2: 0x97B474
const rct_xy16 viewport_surface_paint_data_1[] = {
	{0,   32},
	{-64, 0},
	{-32, -64},
	{32,  -32}
};

// rct2: 0x97B484
const rct_xy16 viewport_surface_paint_data_2[] = {
	{0,   -32},
	{0,   0},
	{-32, 0},
	{-32, -32}
};

// rct2: 0x97B494
const rct_xy16 viewport_surface_paint_data_3[] = {
	{-32, 0},
	{-32, -32},
	{0,   -32},
	{0,   0}
};

const uint8 byte_97B4A4[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 1, 1,
	1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
	0, 0, 0, 0, 1, 1, 1, 1, 1, 2,
	1, 1
};

const uint8 byte_97B4C4[] = {
	0, 0, 0, 0, 1, 1, 1, 1, 0, 0,
	0, 0, 1, 1, 1, 1, 0, 0, 0, 0,
	1, 1, 1, 1, 0, 0, 0, 0, 1, 1,
	2, 1
};

const uint8 byte_97B4E4[] = {
	0, 0, 1, 1, 0, 0, 1, 1, 0, 0,
	1, 1, 0, 0, 1, 1, 0, 0, 1, 1,
	0, 0, 1, 2, 0, 0, 1, 1, 0, 0,
	1, 1
};

const uint8 byte_97B504[] = {
	0, 1, 0, 1, 0, 1, 0, 1, 0, 1,
	0, 1, 0, 1, 0, 1, 0, 1, 0, 1,
	0, 1, 0, 1, 0, 1, 0, 2, 0, 1,
	0, 1
};

const uint8 byte_97B524[] = {
	2, 5, 1, 4, 2, 5, 1, 2, 2, 4,
	1, 2, 1, 3, 0, 3, 1, 5, 0
};

const uint32 byte_97B537[] = {
	2, 5, 2, 4, 2, 5, 1, 1, 3, 4,
	3, 2, 1, 2, 0, 3, 1, 5, 0
};

const uint8 byte_97B54A[] = {
	2, 2, 2, 4, 0, 0, 1, 1, 3, 4,
	3, 5, 1, 2, 2, 3, 1, 5, 0
};

const uint8 byte_97B55D[] = {
	2, 2, 1, 4, 0, 0, 1, 2, 2, 4,
	1, 5, 1, 3, 2, 3, 1, 5, 0
};

const uint8 stru_97B570[][2] = {
	{2, 2},
	{3, 3},
	{3, 5},
	{3, 3},
	{4, 4},
	{4, 6},
	{2, 2},
	{3, 3},
	{3, 5},
	{3, 3},
	{2, 3},
	{2, 3},
	{2, 3},
	{3, 4},
	{2, 3},
	{3, 4}
};

const sint16 word_97B590[] = {
	0,
	0,
	-32,
	0,
	0,
	-48,
	0,
	0,
	-32,
	0,
	-16,
	-16,
	-16,
	-16,
	-16,
	-16,
};

const uint8 byte_97B5B0[] = {
	0, 0, 0, 3, 3, 3, 6, 6, 6, 6,
	10, 11, 12, 13, 14, 14
};

const uint32 stru_97B5C0[][5] = {
	{1579, 1599, 1589, 1609, 0},
	{1747, 1767, 1757, 1777, 1},
	{1663, 1683, 1673, 1693, 2},
	{1831, 1851, 1841, 1861, 3},
};

const uint32 stru_97B640[][16] = {
	{1615, 1619, 1623, 1627, 1631, 1635, 1639, 1643, 1647, 1651, 1655, 1659, 1615, 1627, 1639, 1651},
	{1783, 1787, 1791, 1795, 1799, 1803, 1807, 1811, 1815, 1819, 1823, 1827, 1783, 1795, 1807, 1819},
	{1699, 1703, 1707, 1711, 1715, 1719, 1723, 1727, 1731, 1735, 1739, 1743, 1699, 1711, 1723, 1735},
	{1867, 1871, 1875, 1879, 1883, 1887, 1891, 1895, 1899, 1903, 1907, 1911, 1867, 1879, 1891, 1903},
};

const uint8 byte_97B740[] = {
	0, 0, 0, 0, 0, 0, 0, 2, 0, 0,
	0, 3, 0, 1, 4, 0
};

const uint32 dword_97B750[][2] = {
	{1915,                                           1934},
	{2086,                                           2105},
	{2485,                                           2504},
	{2542,                                           2561},
	{2314,                                           2333},
	{2371,                                           2390},
	{2200,                                           2219},
	{2143,                                           2162},
	{2257 | COLOUR_BRIGHT_RED << 19 | 0x20000000,    2276 | COLOUR_BRIGHT_RED << 19 | 0x20000000},
	{2257 | COLOUR_YELLOW << 19 | 0x20000000,        2276 | COLOUR_YELLOW << 19 | 0x20000000},
	{2257 | COLOUR_BRIGHT_PURPLE << 19 | 0x20000000, 2276 | COLOUR_BRIGHT_PURPLE << 19 | 0x20000000},
	{2257 | COLOUR_BRIGHT_GREEN << 19 | 0x20000000,  2276 | COLOUR_BRIGHT_GREEN << 19 | 0x20000000},
	{2029,                                           2048},
	{1972,                                           1991},
	{2428,                                           2447},
};

const uint32 dword_97B7C8[] = {
	1953,
	2124,
	2523,
	2580,
	2352,
	2409,
	2238,
	2181,
	2295 | COLOUR_BRIGHT_RED << 19 | 0x20000000,
	2295 | COLOUR_YELLOW << 19 | 0x20000000,
	2295 | COLOUR_BRIGHT_PURPLE << 19 | 0x20000000,
	2295 | COLOUR_BRIGHT_GREEN << 19 | 0x20000000,
	2067,
	2010,
	2466,
};

const uint32 dword_97B804[] = {
	28959,
	28983,
	28977,
	28989,
	28995,
	28959,
	29001,
	29007,
	28959,
	28959,
	28959,
	28959,
	28971,
	28965
};

const uint8 byte_97B83C[] = {
	0, 0, 0, 2, 2, 3, 0, 0, 3, 3,
	3, 3, 0, 0
};

const uint8 byte_97B84A[] = {
	0, 1, 2, 3, 4, 14, 6, 7, 8, 9,
	10, 11, 12, 13
};

const uint32 dword_97B858[][2] = {
	{2739, 2758},
	{2777, 2796},
	{2815, 2834},
	{2853, 2872},
};

const uint32 dword_97B878[][2] = {
	{2891, 2910},
	{2929, 2948},
	{2967, 2986},
	{3005, 3024},
};

const uint32 dword_97B898[][2] = {
	{2701, 2720},
	{2663, 2682},
	{2701, 2720},
	{2663, 2682}
};


#define _dword_9E3240 RCT2_GLOBAL(0x9E3240, rct_map_element *)
#define _dword_9E3244 RCT2_GLOBAL(0x9E3244, rct_map_element *)
#define _dword_9E3248 RCT2_GLOBAL(0x9E3248, rct_map_element *)
#define _dword_9E324C RCT2_GLOBAL(0x9E324C, rct_map_element *)
#define _dword_9E3250 RCT2_GLOBAL(0x9E3250, rct_map_element *)

#define _dword_9E3254 RCT2_GLOBAL(0x9E3254, uint32)
#define _dword_9E3258 RCT2_GLOBAL(0x9E3258, uint32)
#define _dword_9E325C RCT2_GLOBAL(0x9E325C, uint32)
#define _dword_9E3260 RCT2_GLOBAL(0x9E3260, uint32)
#define _dword_9E3264 RCT2_GLOBAL(0x9E3264, uint32)

#define _dword_9E3268 RCT2_GLOBAL(0x9E3268, uint32)
#define _dword_9E326C RCT2_GLOBAL(0x9E326C, uint32)
#define _dword_9E3270 RCT2_GLOBAL(0x9E3270, uint32)
#define _dword_9E3274 RCT2_GLOBAL(0x9E3274, uint32)
#define _dword_9E3278 RCT2_GLOBAL(0x9E3278, uint32)

#define _dword_9E327C RCT2_GLOBAL(0x9E327C, uint16)
#define _dword_9E327E RCT2_GLOBAL(0x9E327E, uint16)
#define _dword_9E3280 RCT2_GLOBAL(0x9E3280, uint16)
#define _dword_9E3282 RCT2_GLOBAL(0x9E3282, uint16)

#define _dword_9E3284 RCT2_GLOBAL(0x9E3284, uint16)
#define _dword_9E3286 RCT2_GLOBAL(0x9E3286, uint16)
#define _dword_9E3288 RCT2_GLOBAL(0x9E3288, uint16)
#define _dword_9E328A RCT2_GLOBAL(0x9E328A, uint16)

enum
{
	SEGMENT_B4 = (1 << 0),
	SEGMENT_B8 = (1 << 1),
	SEGMENT_BC = (1 << 2),
	SEGMENT_C0 = (1 << 3),
	SEGMENT_C4 = (1 << 4),
	SEGMENT_C8 = (1 << 5),
	SEGMENT_CC = (1 << 6),
	SEGMENT_D0 = (1 << 7),
	SEGMENT_D4 = (1 << 8),
};

static void paint_setup_set_segment_support_height(int flags, uint16 height, uint8 segment_flags)
{
	for (int s = 0; s < 9; s++) {
		if (flags & (1 << s)) {
			RCT2_GLOBAL(0x0141E9B4 + s * 4, uint16) = height;
			RCT2_GLOBAL(0x0141E9B6 + s * 4, uint8) = segment_flags;
		}
	}
}

static void paint_setup_set_support_height(uint16 height, uint8 segment_flags)
{
	RCT2_GLOBAL(RCT2_ADDRESS_CURRENT_PAINT_TILE_MAX_HEIGHT, uint16) = height;
	RCT2_GLOBAL(0x0141E9DA, uint8) = segment_flags;
}

uint32 viewport_surface_paint_setup_get_ebx(rct_map_element * mapElement, int cl)
{
	uint8 bl = mapElement->properties.surface.slope;

	uint16 di = (bl & 0x0F) << cl;
	uint32 ebx = bl & 0x10;

	di = ((di >> 4) | di) & 0x0F;
	return ebx | di;
}

enum edge
{
	EDGE_BOTTOMLEFT,
	EDGE_BOTTOMRIGHT,
	EDGE_TOPLEFT,
	EDGE_TOPRIGHT
};


typedef struct
{
	uint32 var_00;
	uint32 var_04;
	uint32 var_08;
	uint32 var_0C;
	uint32 var_10;
	uint32 pad[3];
} viewport_surface_paint_struct_0;

/**
 * rct2: 0x0065E890
 */
void viewport_surface_smooth_bottom_left()
{
	registers regs;
	regs.ax = _dword_9E3280;
	regs.cx = _dword_9E3288;

	uint8 temp = regs.cl;
	regs.cl = regs.al;
	regs.al = temp;

	regs.esi = _dword_9E3248;

	if (regs.ax != regs.cx) {
		return;
	}

	if (regs.esi == 0) {
		return;
	}

	regs.ebp = _dword_9E3278;
	regs.ebp = byte_97B444[regs.ebp];
	uint32 local_9E3290 = regs.ebp;

	regs.dh = byte_97B524[regs.ebp];

	regs.ebp = _dword_9E3270;

	regs.ecx = byte_97B444[regs.ebp];
	regs.cl = byte_97B54A[regs.ecx];
	regs.ebp = _dword_9E325C;
	regs.eax = _dword_9E3264;

	if (regs.ebp == regs.eax) {
		if (regs.cl == regs.dh) {
			return;
		}

		if (byte_97B83C[regs.eax] & 2) {
			return;
		}
	} else {
		if (byte_97B83C[regs.eax] & 1) {
			return;
		}

		if (byte_97B83C[regs.ebp] & 1) {
			return;
		}
	}

	uint32 image_id = local_9E3290 + 28921;

	paint_struct * out;
	if (sub_68818E(image_id, 0, 0, &out)) {
		out->var_04 = dword_97B804[regs.ebp] + regs.ecx;
		out->var_0C |= 1;
	}
}

/**
 * rct2: 0x0065E946
 */
void viewport_surface_smooth_bottom_right()
{
	registers regs;
	regs.ax = _dword_9E327E;
	regs.cx = _dword_9E3286;

	uint8 temp = regs.cl;
	regs.cl = regs.al;
	regs.al = temp;

	regs.esi = _dword_9E3244;

	if (regs.ax != regs.cx) {
		return;
	}

	if (regs.esi == 0) {
		return;
	}

	regs.ebp = _dword_9E3278;
	regs.ebp = byte_97B444[regs.ebp];
	uint32 local_9E3290 = regs.ebp;

	regs.dh = byte_97B55D[regs.ebp];

	regs.ebp = _dword_9E326C;

	regs.ecx = byte_97B444[regs.ebp];
	regs.cl = byte_97B537[regs.ecx];
	regs.ebp = _dword_9E3258;
	regs.eax = _dword_9E3264;

	if (regs.ebp == regs.eax) {
		if (regs.cl == regs.dh) {
			return;
		}

		if (byte_97B83C[regs.eax] & 2) {
			return;
		}
	} else {
		if (byte_97B83C[regs.eax] & 1) {
			return;
		}

		if (byte_97B83C[regs.ebp] & 1) {
			return;
		}
	}

	uint32 image_id = local_9E3290 + 28902;

	paint_struct * out;
	if (sub_68818E(image_id, 0, 0, &out)) {
		out->var_04 = dword_97B804[regs.ebp] + regs.ecx;
		out->var_0C |= 1;
	}
}

/**
 * rct: 0x0065E9FC
 */
void viewport_surface_smooth_top_left()
{
	registers regs;
	regs.ax = _dword_9E3282;
	regs.cx = _dword_9E328A;

	uint8 temp = regs.cl;
	regs.cl = regs.al;
	regs.al = temp;

	regs.esi = _dword_9E324C;

	if (regs.ax != regs.cx) {
		return;
	}

	if (regs.esi == 0) {
		return;
	}

	regs.ebp = _dword_9E3278;
	regs.ebp = byte_97B444[regs.ebp];
	uint32 local_9E3290 = regs.ebp;

	regs.dh = byte_97B537[regs.ebp];

	regs.ebp = _dword_9E3274;

	regs.ecx = byte_97B444[regs.ebp];
	regs.cl = byte_97B55D[regs.ecx];
	regs.ebp = _dword_9E3260;
	regs.eax = _dword_9E3264;

	if (regs.ebp == regs.eax) {
		if (regs.cl == regs.dh) {
			return;
		}

		if (byte_97B83C[regs.eax] & 2) {
			return;
		}
	} else {
		if (byte_97B83C[regs.eax] & 1) {
			return;
		}

		if (byte_97B83C[regs.ebp] & 1) {
			return;
		}
	}

	uint32 image_id = local_9E3290 + 28940;

	paint_struct * out;
	if (sub_68818E(image_id, 0, 0, &out)) {
		out->var_04 = dword_97B804[regs.ebp] + regs.ecx;
		out->var_0C |= 1;
	}
}

/**
 * rct2: 0x0065EAB2
 */
void viewport_surface_smooth_top_right()
{
	registers regs;
	regs.ax = _dword_9E327C;
	regs.cx = _dword_9E3284;

	uint8 temp = regs.cl;
	regs.cl = regs.al;
	regs.al = temp;

	regs.esi = _dword_9E3240;

	if (regs.ax != regs.cx) {
		return;
	}

	if (regs.esi == 0) {
		return;
	}

	regs.ebp = _dword_9E3278;
	regs.ebp = byte_97B444[regs.ebp];
	uint32 local_9E3290 = regs.ebp;

	regs.dh = byte_97B54A[regs.ebp];

	regs.ebp = _dword_9E3268;

	regs.ecx = byte_97B444[regs.ebp];
	regs.cl = byte_97B524[regs.ecx];
	regs.ebp = _dword_9E3254;
	regs.eax = _dword_9E3264;

	if (regs.ebp == regs.eax) {
		if (regs.cl == regs.dh) {
			return;
		}

		if (byte_97B83C[regs.eax] & 2) {
			return;
		}
	} else {
		if (byte_97B83C[regs.eax] & 1) {
			return;
		}

		if (byte_97B83C[regs.ebp] & 1) {
			return;
		}
	}

	uint32 image_id = local_9E3290 + 28883;

	paint_struct * out;
	if (sub_68818E(image_id, 0, 0, &out)) {
		out->var_04 = dword_97B804[regs.ebp] + regs.ecx;
		out->var_0C |= 1;
	}
}

void viewport_surface_draw_land_side(enum edge edge, uint16 height)
{
	switch (edge) {
		case EDGE_BOTTOMLEFT:
			//RCT2_CALLPROC_X(0x65EB7D, 0x99999999, 0xAAAAAAAA, 0xBBBBBBBB, height / 16, 0xDDDDDDDD, 0, 0);
			break;
		case EDGE_BOTTOMRIGHT:
			RCT2_CALLPROC_X(0x65F0D8, 0x99999999, 0xAAAAAAAA, 0xBBBBBBBB, height / 16, 0xDDDDDDDD, 0, 0);
			break;
		case EDGE_TOPLEFT:
			RCT2_CALLPROC_X(0x65F63B, 0x99999999, 0xAAAAAAAA, 0xBBBBBBBB, height / 16, 0xDDDDDDDD, 0, 0);
			break;
		case EDGE_TOPRIGHT:
			RCT2_CALLPROC_X(0x65F77D, 0x99999999, 0xAAAAAAAA, 0xBBBBBBBB, height / 16, 0xDDDDDDDD, 0, 0);
			break;
	}

	if (edge != EDGE_BOTTOMLEFT) {
		return;
	}

	rct_map_element * esi = _dword_9E3248;

	registers regs;
	regs.ax = _dword_9E3280;
	regs.cx = _dword_9E3288;

	if (esi == NULL) {
		// ch / ah: neighbour tile corner heights;
		regs.ch = 0;
		regs.ah = 1;
	}

	if (regs.al <= regs.ah && regs.cl <= regs.ch) {
		return;
	}

	regs.ebp = RCT2_GLOBAL(0x009E329C, uint32); // var_00
	if (RCT2_GLOBAL(RCT2_ADDRESS_CURRENT_VIEWPORT_FLAGS, uint16) & VIEWPORT_FLAG_UNDERGROUND_INSIDE) {
		regs.ebp = RCT2_GLOBAL(0x009E32A0, uint32); // var_04
	}

	uint32 base_image_id = regs.ebp;

	regs.dh = regs.ch;
	if (regs.dh != regs.ah) {
		// If bottom part of edge isn't straight, add a filler
		uint32 image_offset = 3;

		if (regs.dh >= regs.ah) {
			regs.dh = regs.ah;
			image_offset = 4;
		}

		if (regs.dh != regs.al
		    && regs.dh != regs.cl) {

			uint32 image_id = base_image_id + image_offset;
			sub_98196C(image_id, 30, 0, 0, 30, 15, regs.dh * 16, get_current_rotation());
		}
	}

	regs.ah = regs.cl;

	while (true) {
		if (regs.dh >= regs.al || regs.dh >= regs.ah) {
			// If top of edge isn't straight, add a filler
			uint32 image_offset = 1;
			if (regs.dh >= regs.al) {
				image_offset = 2;

				if (regs.dh >= regs.ah) {
					return;
				}
			}

			uint32 image_id = base_image_id + image_offset;

			sub_98196C(image_id, 30, 0, 0, 30, 15, regs.dh * 16, get_current_rotation());

			return;
		}

		if (regs.dh != RCT2_GLOBAL(0x9E3138, uint8)) {
			// Normal walls
			while (regs.dh > RCT2_GLOBAL(0x9E3138, uint8)) {
				for (int offset = 0; offset <= 0x7E; offset += 4) {
					RCT2_GLOBAL(0x9E3138 + offset, uint32) = RCT2_GLOBAL(0x9E3138 + 2 + offset, uint32);
				}
			}

			sub_98196C(base_image_id, 30, 0, 0, 30, 15, regs.dh * 16, get_current_rotation());

			regs.dh++;

			continue;
		}

		// Tunnels
		uint32 ebx = RCT2_GLOBAL(0x9E3138 + 1, uint8);
		uint32 saved_edx = regs.edx;
		uint32 saved_eax = regs.eax;
		regs.dl = regs.dh + stru_97B570[ebx][0];

		if (regs.dl > regs.ah) {
			regs.dl -= stru_97B570[ebx][0];
			ebx = byte_97B5B0[ebx];
			RCT2_GLOBAL(0x9E3138, uint8) = ebx;
			regs.dl += stru_97B570[ebx][0];
		}

		regs.dl -= stru_97B570[ebx][0];
		regs.dx <<= 4;
		sint16 imageHeight = regs.dx;
		regs.ah = stru_97B570[ebx][1];
		//save edx

		uint16 boundOffsetZ = regs.dx;
		boundOffsetZ += word_97B590[ebx];
		regs.ah /= 16;
		if (boundOffsetZ < 16) {
			boundOffsetZ += 16;
			regs.ah -= 16;
		}

		uint32 esi = RCT2_GLOBAL(0x009E32AC, uint32); // var_10
		uint32 image_id = RCT2_GLOBAL(esi + ebx * 4, uint32);
		sub_98197C(image_id, 30, 0, 32, 1, regs.ah, imageHeight, 0, 0, boundOffsetZ, get_current_rotation());

		// push edx
		boundOffsetZ = regs.dh * 16;
		ebx = RCT2_GLOBAL(0x9E3138 + 1, uint8);
		regs.ah = stru_97B570[ebx][1] * 16;
		boundOffsetZ += word_97B590[ebx];
		if (boundOffsetZ != word_97B590[ebx]) {
			boundOffsetZ += 16;
			regs.ah -= 16;
		}

		image_id = RCT2_GLOBAL(esi + ebx * 4, uint32) + 1;
		sub_98197C(image_id, 30, 0, 32, 1, regs.ah, regs.dh * 16, 0, 31, boundOffsetZ, get_current_rotation());

		uint8 edi = RCT2_GLOBAL(0x9E3138 + 1, uint8);
		regs.edx = saved_edx;
		regs.eax = saved_eax;
		regs.dh += stru_97B570[edi][0];

		for (int offset = 0; offset <= 0x7E; offset += 4) {
			RCT2_GLOBAL(0x9E3138 + offset, uint32) = RCT2_GLOBAL(0x9E3138 + 2 + offset, uint32);
		}
	}
}

void viewport_surface_draw_water_side(enum edge edge, uint16 height)
{
	switch (edge) {
		case EDGE_BOTTOMLEFT:
			RCT2_CALLPROC_X(0x65F8B9, 0x99999999, 0, 0xBBBBBBBB, height / 16, 0xDDDDDDDD, 0, 0);
			break;
		case EDGE_BOTTOMRIGHT:
			RCT2_CALLPROC_X(0x65FE26, 0x99999999, 0, 0xBBBBBBBB, height / 16, 0xDDDDDDDD, 0, 0);
			break;
		case EDGE_TOPLEFT:
			RCT2_CALLPROC_X(0x66039B, 0x99999999, 0, 0xBBBBBBBB, height / 16, 0xDDDDDDDD, 0, 0);
			break;
		case EDGE_TOPRIGHT:
			RCT2_CALLPROC_X(0x6604F1, 0x99999999, 0, 0xBBBBBBBB, height / 16, 0xDDDDDDDD, 0, 0);
			break;
	}
}

/**
 * rct2: 0x0066062C
 *
 * @param direction (cl)
 * @param height (dx)
 * @param map_element (esi)
 */
void viewport_surface_paint_setup(uint8 direction, uint16 height, rct_map_element * mapElement)
{
	//RCT2_CALLPROC_X(0x66062C, 0, 0, direction, height, (int) mapElement, 0, 0);

	rct_drawpixelinfo * dpi = RCT2_GLOBAL(0x0140E9A8, rct_drawpixelinfo*);
	RCT2_GLOBAL(RCT2_ADDRESS_PAINT_SETUP_CURRENT_TYPE, uint8) = VIEWPORT_INTERACTION_ITEM_TERRAIN;
	RCT2_GLOBAL(0x9DE57C, uint16) |= 1;

	uint16 zoomLevel = dpi->zoom_level;

	uint8 cl = get_current_rotation();

	_dword_9E3250 = mapElement;
	_dword_9E3264 = ((mapElement->type & MAP_ELEMENT_DIRECTION_MASK) << 3) | (mapElement->properties.surface.terrain >> 5);
	uint32 edi = viewport_surface_paint_setup_get_ebx(mapElement, cl);
	_dword_9E3278 = edi;

	rct_xy16 base = {
		.x = RCT2_GLOBAL(0x9DE568, sint16),
		.y = RCT2_GLOBAL(0x9DE56C, sint16)
	};

	// Start loop
	for (int i = 0; i < 4; i++) {
		int index;
		rct_xy16 offset;
		const uint8 * offset_al;
		const uint8 * offset_cl;
		const uint8 * offset_ch;
		const uint8 * offset_ah;

		switch (i) {
			case 0:
				index = 2;
				offset = viewport_surface_paint_data_0[get_current_rotation()];
				offset_al = byte_97B4E4;
				offset_cl = byte_97B504;
				offset_ah = byte_97B4C4;
				offset_ch = byte_97B4A4;
				break;

			case 1:
				index = 1;
				offset = viewport_surface_paint_data_1[get_current_rotation()];
				offset_al = byte_97B4A4;
				offset_cl = byte_97B504;
				offset_ah = byte_97B4C4;
				offset_ch = byte_97B4E4;
				break;

			case 2:
				index = 3;
				offset = viewport_surface_paint_data_2[get_current_rotation()];
				offset_al = byte_97B4C4;
				offset_cl = byte_97B4E4;
				offset_ah = byte_97B4A4;
				offset_ch = byte_97B504;
				break;

			case 3:
				index = 0;
				offset = viewport_surface_paint_data_3[get_current_rotation()];
				offset_al = byte_97B4C4;
				offset_cl = byte_97B4A4;
				offset_ah = byte_97B4E4;
				offset_ch = byte_97B504;
				break;
		}

		rct_xy16 axbp = {.x = base.x + offset.x, .y = base.y + offset.y};
		RCT2_GLOBAL(0x9E3240 + index * 4, rct_map_element *) = NULL;

		if (axbp.x > 0x2000 || axbp.y > 0x2000) {
			continue; // TODO: use continue instead
		}

		rct_map_element * surfaceElement = map_get_surface_element_at(axbp.x / 32, axbp.y / 32);
		if (surfaceElement == NULL) {
			continue; // TODO: use continue instead
		}

		RCT2_GLOBAL(0x9E3240 + index * 4, rct_map_element *) = surfaceElement;
		RCT2_GLOBAL(0x9E3254 + index * 4, uint32) = ((mapElement->type & MAP_ELEMENT_DIRECTION_MASK) << 3) | (mapElement->properties.surface.terrain >> 5);
		uint32 ebx = viewport_surface_paint_setup_get_ebx(surfaceElement, cl);
		RCT2_GLOBAL(0x9E3268 + index * 4, uint32) = ebx;

		uint8 al = height / 16;
		uint8 ah = surfaceElement->base_height / 2;

		assert(edi < countof(byte_97B4C4));
		assert(ebx < countof(byte_97B4C4));
		uint8 cl = al + offset_cl[edi];
		uint8 ch = ah + offset_ch[ebx];
		al += offset_al[edi];
		ah += offset_ah[ebx];

		RCT2_GLOBAL(0x9E327C + index * 2, uint16) = ah << 8 | al;
		RCT2_GLOBAL(0x9E3284 + index * 2, uint16) = ch << 8 | cl;
	}

	// end loop

	if ((RCT2_GLOBAL(RCT2_ADDRESS_CURRENT_VIEWPORT_FLAGS, uint16) & VIEWPORT_FLAG_LAND_HEIGHTS) && (zoomLevel == 0)) {
		sint16 x = RCT2_GLOBAL(0x009DE56A, sint16), y = RCT2_GLOBAL(0x009DE56E, sint16);

		int dx = map_element_height(x + 16, y + 16) & 0xFFFF;
		dx += 3;

		int image_id = (5769 + dx / 16) | 0x20780000;
		image_id += RCT2_GLOBAL(RCT2_ADDRESS_CONFIG_HEIGHT_MARKERS, uint16);
		image_id -= RCT2_GLOBAL(0x01359208, uint16);

		sub_98196C(image_id, 16, 16, 1, 1, 0, height, get_current_rotation());
	}


	//RCT2_CALLPROC_X(0x660AAB, 0, 0, direction, height, (int) mapElement, 0, 0);

	uint32 _ebp = _dword_9E3264;
	uint32 ebx = _dword_9E3278;

	//push ebx + ecx + esi

	bool has_surface = false;
	uint16 di = RCT2_GLOBAL(0x9E323C, uint8);
	if (di * 16 == height) {
		sub_98197C(1575, 0, 0, 1, 30, 39, height, -2, 1, height - 40, get_current_rotation());
		sub_98197C(1576, 0, 0, 30, 1, 0, height, 1, 31, height, get_current_rotation());
		sub_98197C(1577, 0, 0, 1, 30, 0, height, 31, 1, height, get_current_rotation());
		sub_98197C(1578, 0, 0, 30, 1, 39, height, 1, -2, height - 40, get_current_rotation());
	} else {
		registers regs;

		bool showGridlines = (RCT2_GLOBAL(RCT2_ADDRESS_CURRENT_VIEWPORT_FLAGS, uint16) & VIEWPORT_FLAG_GRIDLINES);

		int branch = -1;
		if ((mapElement->properties.surface.terrain & 0xE0) == 0) {
			if ((mapElement->type & 0x3) == 0) {
				if ((zoomLevel == 0)) {
					if ((RCT2_GLOBAL(RCT2_ADDRESS_CURRENT_VIEWPORT_FLAGS, uint16) & 0x1001) == 0) {
						branch = mapElement->properties.surface.grass_length & 0x7;
					}
				}
			}
		}

		assert(ebx < countof(byte_97B444));
		uint8 image_offset = byte_97B444[ebx];
		int image_id;
		uint32 ebp = _ebp;
		switch (branch) {
			case 0:
				// loc_660C90
				image_id = dword_97B898[get_current_rotation()][showGridlines ? 1 : 0] + image_offset;
				break;

			case 1:
			case 2:
			case 3:
			default:
				// loc_660C9F
				if (get_current_rotation() & 1) {
					assert(ebp < countof(byte_97B84A));
					ebp = byte_97B84A[ebp];
				}
				assert(ebp < countof(dword_97B750));
				image_id = dword_97B750[ebp][showGridlines ? 1 : 0] + image_offset;

				if (RCT2_GLOBAL(RCT2_ADDRESS_SCREEN_FLAGS, uint8) & (SCREEN_FLAGS_TRACK_DESIGNER | SCREEN_FLAGS_TRACK_MANAGER)) {
					image_id = 2623;
				}

				if (RCT2_GLOBAL(RCT2_ADDRESS_CURRENT_VIEWPORT_FLAGS, uint16) & (VIEWPORT_FLAG_UNDERGROUND_INSIDE | VIEWPORT_FLAG_HIDE_BASE)) {
					image_id &= 0xDC07FFFF; // remove colour
					image_id |= 0x41880000;
				}
				break;

			case 4:
			case 5:
				// loc_660C44
			case 6:
				// loc_660C6A
			{
				sint16 x = RCT2_GLOBAL(0x009DE56A, sint16) & 0x20;
				sint16 y = RCT2_GLOBAL(0x009DE56E, sint16) & 0x20;
				int index = (y | (x << 1)) >> 5;

				if (branch == 6) {
					image_id = dword_97B878[index][showGridlines ? 1 : 0] + image_offset;
				} else {
					image_id = dword_97B858[index][showGridlines ? 1 : 0] + image_offset;
				}
				break;
			}

		}

		sub_98196C(image_id, 0, 0, 32, 32, 255, height, get_current_rotation());
		has_surface = true;
	}

	// loc_660D02
	if (RCT2_GLOBAL(0x009DEA50, sint16) != -1) {
		sint32 di = RCT2_GLOBAL(0x009DEA50, sint16);
		sint16 x = RCT2_GLOBAL(0x009DE56A, sint16), y = RCT2_GLOBAL(0x009DE56E, sint16);

		uint32 pos = (x & 0x1F80) >> 7 | (y & 0x1F80) >> 1;
		sint32 ebx = di & 0x7FFF;

		uint32 ecx = pos & 0x1f;
		uint32 eax = pos >> 5;
		uint32 ebp = 0x20380000;

		bool do_it = false;
		if (di >= 0) {
			rct_sprite * edi = &g_sprite_list[di];
			if (RCT2_ADDRESS(RCT2_ADDRESS_STAFF_PATROL_AREAS + (edi->peep.staff_id * 512), uint32)[eax] & (1 << ecx)) {
				do_it = true;
			} else {
				ebx = edi->peep.staff_type;
				ebp = 0x20080000;
			}
		} else {
			ebx = (_dword_9E3278 + 200) * 512;
			if (RCT2_ADDRESS(RCT2_ADDRESS_STAFF_PATROL_AREAS + ebx, uint32)[eax] & (1 << ecx)) {
				do_it = true;
			}
		}

		if (do_it) {
			assert(_dword_9E3278 < countof(byte_97B444));
			ebx = 2599 + byte_97B444[_dword_9E3278];
			sub_68818E(ebx | ebp, 0, 0, NULL);
		}
	}

	if (RCT2_GLOBAL(RCT2_ADDRESS_SCREEN_FLAGS, uint8) & SCREEN_FLAGS_SCENARIO_EDITOR
	    && RCT2_GLOBAL(RCT2_ADDRESS_CURRENT_VIEWPORT_FLAGS, uint16) & VIEWPORT_FLAG_LAND_OWNERSHIP) {

		rct2_peep_spawn * spawn = RCT2_ADDRESS(RCT2_ADDRESS_PEEP_SPAWNS, rct2_peep_spawn);
		rct_xy16 pos = {RCT2_GLOBAL(0x009DE56A, sint16), RCT2_GLOBAL(0x009DE56E, sint16)};
		for (int i = 0; i < 2; ++i) {
			if ((spawn->x & 0xFFE0) == pos.x && (spawn->y & 0xFFE0) == pos.y) {
				sub_98196C(2624, 0, 0, 32, 32, 16, spawn->z * 16, get_current_rotation());

				int offset = ((spawn->direction ^ 2) + get_current_rotation()) & 3;
				uint32 image_id = 3111 + offset | 0x20380000;
				sub_98196C(image_id, 0, 0, 32, 32, 19, spawn->z * 16, get_current_rotation());
			}
			spawn++;
		}
	}

	if (RCT2_GLOBAL(RCT2_ADDRESS_CURRENT_VIEWPORT_FLAGS, uint16) & VIEWPORT_FLAG_LAND_OWNERSHIP) {
		// loc_660E9A:
		if (mapElement->properties.surface.ownership & OWNERSHIP_OWNED) {
			assert(ebx < countof(byte_97B444));
			sub_68818E(2625 + byte_97B444[ebx], 0, 0, NULL);
		} else if (mapElement->properties.surface.ownership & OWNERSHIP_AVAILABLE) {
			// TODO: Fix this. Currently not working.
			rct_xy16 pos = {RCT2_GLOBAL(0x009DE56A, sint16), RCT2_GLOBAL(0x009DE56E, sint16)};
			paint_struct * backup = RCT2_GLOBAL(0xF1AD28, paint_struct*);
			int height = (map_element_height(pos.x + 16, pos.y + 16) & 0xFFFF) + 3;
			sub_98196C(22955, 16, 16, 1, 1, 0, height, get_current_rotation());
			RCT2_GLOBAL(0xF1AD28, paint_struct*) = backup;
		}
	}

	if (RCT2_GLOBAL(RCT2_ADDRESS_CURRENT_VIEWPORT_FLAGS, uint16) & VIEWPORT_FLAG_CONSTRUCTION_RIGHTS
	    && !(mapElement->properties.surface.ownership & OWNERSHIP_OWNED)) {
		if (mapElement->properties.surface.ownership & OWNERSHIP_CONSTRUCTION_RIGHTS_OWNED) {
			assert(ebx < countof(byte_97B444));
			sub_68818E(2644 + byte_97B444[ebx], 0, 0, NULL);
		} else if (mapElement->properties.surface.ownership & OWNERSHIP_CONSTRUCTION_RIGHTS_AVAILABLE) {
			paint_struct * backup = RCT2_GLOBAL(0xF1AD28, paint_struct*);
			rct_xy16 pos = {RCT2_GLOBAL(0x009DE56A, sint16), RCT2_GLOBAL(0x009DE56E, sint16)};
			int height = map_element_height(pos.x + 16, pos.y + 16) & 0xFFFF;
			sub_98196C(22956, 16, 16, 1, 1, 0, height + 3, get_current_rotation());
			RCT2_GLOBAL(0xF1AD28, paint_struct*) = backup;
		}
	}

	// ebx[0] = esi;
	// ebp[4] = ebp;
	// ebp[8] = ebx

	if (RCT2_GLOBAL(RCT2_ADDRESS_MAP_SELECTION_FLAGS, uint8) & 1) {
		// loc_660FB8:
		rct_xy16 pos = {RCT2_GLOBAL(0x009DE56A, sint16), RCT2_GLOBAL(0x009DE56E, sint16)};
		if (pos.x >= RCT2_GLOBAL(RCT2_ADDRESS_MAP_SELECTION_A_X, sint16)
		    && pos.x <= RCT2_GLOBAL(RCT2_ADDRESS_MAP_SELECTION_B_X, sint16)
		    && pos.y >= RCT2_GLOBAL(RCT2_ADDRESS_MAP_SELECTION_A_Y, sint16)
		    && pos.y <= RCT2_GLOBAL(RCT2_ADDRESS_MAP_SELECTION_B_Y, sint16)) {

			uint16 mapSelectionType = RCT2_GLOBAL(RCT2_ADDRESS_MAP_SELECTION_TYPE, uint16);
			if (mapSelectionType >= 0xA) {
				// Walls
				// loc_661089:
				uint32 eax = ((((mapSelectionType - 9) + get_current_rotation()) & 3) + 0x21) << 19;
				uint32 image_id = (byte_97B444[ebx] + 0x20000BF6) | eax;
				sub_68818E(image_id, 0, 0, NULL);
			} else if (mapSelectionType >= 6) {
				// loc_661051:(no jump)
				// Selection split into four quarter segments
				uint32 eax = ((((mapSelectionType - 6) + get_current_rotation()) & 3) + 0x27) << 19;
				uint32 image_id = (byte_97B444[ebx] + 0x20000C09) | eax;
				sub_68818E(image_id, 0, 0, NULL);
			} else if (mapSelectionType <= 4) {
				// Corners
				uint32 eax = mapSelectionType;
				if (mapSelectionType == 4) {
					eax = (mapSelectionType + get_current_rotation()) & 3;
				}

				eax = (eax + 0x21) << 19;
				uint32 image_id = (byte_97B444[ebx] + 0x20000BE3) | eax;
				sub_68818E(image_id, 0, 0, NULL);
			} else {
				int local_ebx = ebx;
				int local_height = height;
				// Water tool
				if (mapElement->properties.surface.terrain & 0x1F) {
					int waterHeight = (mapElement->properties.surface.terrain & 0x1F) * 16;
					if (waterHeight > height) {
						local_height += 16;

						if (waterHeight != local_height
						    || local_ebx == 0x10) {
							local_height = waterHeight;
							local_ebx = 0;
						} else {
							registers regs = {};

							regs.bl = (ebx ^ 0xF) << 2;
							regs.bh = regs.bl >> 4;
							local_ebx = (regs.bl & 0xC) | (regs.bh & 0x3); // other way around?
						}
					}
				}

				int image_id = byte_97B444[local_ebx] + 0x21300BE3;

				paint_struct * backup = RCT2_GLOBAL(0xF1AD28, paint_struct*);
				sub_98196C(image_id, 0, 0, 32, 32, 1, local_height, get_current_rotation());
				RCT2_GLOBAL(0xF1AD28, paint_struct*) = backup;
			}
		}
	}

	if (RCT2_GLOBAL(RCT2_ADDRESS_MAP_SELECTION_FLAGS, uint8) & 2) {
		rct_xy16 pos = {RCT2_GLOBAL(0x009DE56A, sint16), RCT2_GLOBAL(0x009DE56E, sint16)};
		uint32 ebp = pos.y << 16 | pos.x;
		uint32 edi = 0;

		while (true) {
			rct_xy16 tile = gMapSelectionTiles[edi];

			if (tile.x == -1) {
				break;
			}

			edi++;
			if (tile.x != pos.x || tile.y != pos.y) {
				continue;
			}

			uint32 eax = 0x1580000;
			if (RCT2_GLOBAL(RCT2_ADDRESS_MAP_SELECTION_FLAGS, uint8) & 8) {
				// Something with path tunnels?
				eax = g_sprite_list[6556].vehicle.var_44;
			}

			uint32 image_id = (0x20000BE3 + byte_97B444[ebx]) | eax;
			sub_68818E(image_id, 0, 0, NULL);
		}
	}

	if (zoomLevel == 0
	    && has_surface
	    && !(RCT2_GLOBAL(RCT2_ADDRESS_CURRENT_VIEWPORT_FLAGS, uint16) & VIEWPORT_FLAG_UNDERGROUND_INSIDE)
	    && !(RCT2_GLOBAL(RCT2_ADDRESS_CURRENT_VIEWPORT_FLAGS, uint16) & VIEWPORT_FLAG_HIDE_BASE)
	    && !(RCT2_GLOBAL(RCT2_ADDRESS_CONFIG_FLAGS, uint8) & CONFIG_FLAG_DISABLE_SMOOTH_LANDSCAPE)) {
		// loc_661194:
		viewport_surface_smooth_top_left();
		viewport_surface_smooth_top_right();
		viewport_surface_smooth_bottom_left();
		viewport_surface_smooth_bottom_right();
	}


	if (RCT2_GLOBAL(RCT2_ADDRESS_CURRENT_VIEWPORT_FLAGS, uint16) & VIEWPORT_FLAG_UNDERGROUND_INSIDE
	    && !(RCT2_GLOBAL(RCT2_ADDRESS_CURRENT_VIEWPORT_FLAGS, uint16) & VIEWPORT_FLAG_HIDE_BASE)
	    && !(RCT2_GLOBAL(RCT2_ADDRESS_SCREEN_FLAGS, uint8) & (SCREEN_FLAGS_TRACK_DESIGNER | SCREEN_FLAGS_TRACK_MANAGER))) {

		uint8 image_offset = byte_97B444[ebx];
		uint32 base_image = _ebp;
		if (get_current_rotation() & 1) {
			base_image = byte_97B84A[base_image];
		}
		uint32 image_id = dword_97B7C8[base_image] + image_offset;
		sub_68818E(image_id, 0, 0, NULL);
	}

	if (!(RCT2_GLOBAL(RCT2_ADDRESS_CURRENT_VIEWPORT_FLAGS, uint16) & VIEWPORT_FLAG_HIDE_VERTICAL)) {
		// loc_66122C:
		uint8 al_edgeStyle = mapElement->properties.surface.slope & 0xE0;
		uint8 di_type = mapElement->type & 0x80;

		uint32 eax = al_edgeStyle + di_type * 2;
		if (eax != 32 && eax != 0 && eax != 96 && eax != 64) {
			log_info("eax: %d", eax);
		}

		viewport_surface_paint_struct_0 from = RCT2_GLOBAL(0x0097B5C0 + eax, viewport_surface_paint_struct_0);
		RCT2_GLOBAL(0x009E329C, uint32) = from.var_00;
		RCT2_GLOBAL(0x009E32A0, uint32) = from.var_04;
		RCT2_GLOBAL(0x009E32A4, uint32) = from.var_08;
		RCT2_GLOBAL(0x009E32A8, uint32) = from.var_0C;
		RCT2_GLOBAL(0x009E32AC, uint32) = from.var_10;

		for (int i = 0; i <= 0x7C; i += 4) {
			RCT2_GLOBAL(0x009E2F30 + i, uint32) = RCT2_GLOBAL(0x009E3138 + i, uint32);
			RCT2_GLOBAL(0x009E2EAE + i, uint32) = RCT2_GLOBAL(0x009E30B6 + i, uint32);
		}

		viewport_surface_draw_land_side(EDGE_TOPLEFT, height);
		viewport_surface_draw_land_side(EDGE_TOPRIGHT, height);
		viewport_surface_draw_land_side(EDGE_BOTTOMLEFT, height);
		viewport_surface_draw_land_side(EDGE_BOTTOMRIGHT, height);
	}

	RCT2_GLOBAL(0x009E3298, uint16) = 0;
	if (mapElement->properties.surface.terrain & 0x1F) {
		// loc_6615A9: (water height)
		RCT2_GLOBAL(RCT2_ADDRESS_PAINT_SETUP_CURRENT_TYPE, uint8) = VIEWPORT_INTERACTION_ITEM_WATER;

		uint16 ax = height + 16;
		uint16 dx = (mapElement->properties.surface.terrain & 0x1F) * 16;

		RCT2_GLOBAL(0x009E3298, uint16) = dx;
		if ((RCT2_GLOBAL(0x9DEA6F, uint8_t) & 1) == 0) {
			RCT2_GLOBAL(0x0141E9DC, uint16) = dx;

			int image_offset = 0;
			if (dx <= ax) {
				image_offset = byte_97B740[ebx & 0xF];
			}

			int image_id = image_offset + 0x610013B8;
			sub_98196C(image_id, 0, 0, 32, 32, -1, dx, get_current_rotation());

			sub_68818E(5053 + image_offset, 0, 0, NULL);

			for (int i = 0; i <= 0x7C; i += 4) {
				RCT2_GLOBAL(0x009E3138 + i, uint32) = RCT2_GLOBAL(0x009E2F30 + i, uint32);
				RCT2_GLOBAL(0x009E30B6 + i, uint32) = RCT2_GLOBAL(0x009E2EAE + i, uint32);
			}

			viewport_surface_draw_water_side(EDGE_TOPLEFT, height);
			viewport_surface_draw_water_side(EDGE_TOPRIGHT, height);
			viewport_surface_draw_water_side(EDGE_BOTTOMLEFT, height);
			viewport_surface_draw_water_side(EDGE_BOTTOMRIGHT, height);
		}
	}

	if (mapElement->properties.surface.ownership & 0x0F
	    && !(RCT2_GLOBAL(0x009DEA6F, uint8) & 1)) {
		// loc_66195F:
		RCT2_GLOBAL(RCT2_ADDRESS_PAINT_SETUP_CURRENT_TYPE, uint8) = VIEWPORT_INTERACTION_ITEM_PARK;

		registers regs = {};
		regs.al = mapElement->properties.surface.ownership & 0x0F;
		regs.ax = regs.ax << get_current_rotation();
		regs.ah = regs.al >> 4;

		uint8 al = regs.al | regs.ah;

		for (int i = 0; i < 4; i++) {
			int bit = al & 1;
			al >>= 1;

			if (bit == 0) {
				continue;
			}


			int bit_1, bit_8, bit_4, bit_2;
			rct_xy16 offset, box_offset, box_size;
			uint32 image_1, image_2, image_3;
			switch (i) {
				case 0:
					// Bottom right
					bit_1 = 1;
					bit_8 = 8;
					bit_4 = 4;
					bit_2 = 2;
					image_1 = 22872;
					image_2 = 22876;
					image_3 = 22874;
					offset = (struct rct_xy16) {1, 0x1F};
					box_size = (struct rct_xy16) {.x=0x1E, .y=1};
					box_offset = (struct rct_xy16) {.x=1, .y=0x1F};
					break;

				case 1:
					// Bottom left
					bit_1 = 1;
					bit_8 = 2;
					bit_4 = 4;
					bit_2 = 8;
					image_1 = 22873;
					image_2 = 22877;
					image_3 = 22875;
					offset = (struct rct_xy16) {0x1F, 0};
					box_size = (struct rct_xy16) {.x=1, .y=0x1E};
					box_offset = (struct rct_xy16) {.x=0x1F, .y=1};
					break;

				case 2:
					// Top left
					bit_1 = 4;
					bit_8 = 2;
					bit_4 = 8;
					bit_2 = 1;
					image_1 = 22872;
					image_2 = 22874;
					image_3 = 22876;
					offset = (struct rct_xy16) {1, 0};
					box_size = (struct rct_xy16) {0x1E, 1};
					box_offset = (struct rct_xy16) {1, 1};
					// TODO: Fences on top tile get clipped after a while
					break;

				case 3:
					// Top right
					bit_1 = 4;
					bit_8 = 8;
					bit_4 = 2;
					bit_2 = 1;
					image_1 = 22873;
					image_2 = 22875;
					image_3 = 22877;
					offset = (struct rct_xy16) {1, 1};
					box_size = (struct rct_xy16) {1, 0x1E};
					box_offset = (struct rct_xy16) {1, 1};
					break;
			}

			uint32 image_4, image_5;
			if (i == 0 || i == 1) {
				image_4 = image_3;
				image_5 = image_2;
			} else {
				image_4 = image_2;
				image_5 = image_3;
			}

			int local_ebx = ebx;
			int local_height = height;
			int image_id = 0;
			if (!(local_ebx & bit_1)) { // first
				if (local_ebx & bit_8) { // second
					image_id = image_3;
				} else {
					image_id = image_1;
				}
			} else if (!(local_ebx & bit_8)) { // loc_6619A2:
				image_id = image_2;
			} else {
				local_height += 16;

				if (!(local_ebx & 0x10)) { // loc_6619B5 (first)
					image_id = image_1;
				} else if (local_ebx & bit_4) { // loc_6619B5 (second)
					image_id = image_4;
				} else if (local_ebx & bit_2) { // loc_6619B5 (third)
					image_id = image_5;
				} else {
					image_id = image_1;
				}
			}

			sub_98197C(image_id, offset.x, offset.y, box_size.x, box_size.y, 9, local_height, box_offset.x, box_offset.y, local_height + 1, get_current_rotation());
		}

	}

	RCT2_GLOBAL(0x0141E9DB, uint8) |= 1;

	switch (ebx) {
		default:
			// loc_661C2C
			//     00
			//   00  00
			// 00  00  00
			//   00  00
			//     00
			paint_setup_set_segment_support_height(
				SEGMENT_B4 | SEGMENT_B8 | SEGMENT_BC | SEGMENT_C0 | SEGMENT_C4 | SEGMENT_C8 | SEGMENT_CC | SEGMENT_D0 | SEGMENT_D4,
				height,
				0
			);
			paint_setup_set_support_height(height, 0);
			break;

		case 1:
			// loc_661CB9
			//     00
			//   00  00
			// 01  01  01
			//   1B  1B
			//     1B
			paint_setup_set_segment_support_height(SEGMENT_B4 | SEGMENT_C8 | SEGMENT_CC, height, 0);
			paint_setup_set_segment_support_height(SEGMENT_B8 | SEGMENT_C4 | SEGMENT_BC, height, 1);
			paint_setup_set_segment_support_height(SEGMENT_D0 | SEGMENT_D4, height + 6, 0x1B);
			paint_setup_set_segment_support_height(SEGMENT_C0, height + 6 + 6, 0x1B);
			paint_setup_set_support_height(height, 1);
			break;

		case 2:
			// loc_661D4E
			//     02
			//   17  00
			// 17  02  00
			//   17  00
			//     02
			paint_setup_set_segment_support_height(SEGMENT_BC | SEGMENT_CC | SEGMENT_D4, height, 0);
			paint_setup_set_segment_support_height(SEGMENT_B4 | SEGMENT_C4 | SEGMENT_C0, height, 2);
			paint_setup_set_segment_support_height(SEGMENT_C8 | SEGMENT_D0, height + 6, 0x17);
			paint_setup_set_segment_support_height(SEGMENT_B8, height + 6 + 6, 0x17);
			paint_setup_set_support_height(height, 2);
			break;

		case 3:
			// loc_661DE3
			//     03
			//   03  03
			// 03  03  03
			//   03  03
			//     03
			paint_setup_set_segment_support_height(SEGMENT_B4 | SEGMENT_CC | SEGMENT_BC, height + 2, 3);
			paint_setup_set_segment_support_height(SEGMENT_C8 | SEGMENT_C4 | SEGMENT_D4, height + 2 + 6, 3);
			paint_setup_set_segment_support_height(SEGMENT_B8 | SEGMENT_D0 | SEGMENT_C0, height + 2 + 6 + 6, 3);
			paint_setup_set_support_height(height, 3);
			break;

		case 4:
			// loc_661E7C
			//     1E
			//   1E  1E
			// 04  04  04
			//   00  00
			//     00
			paint_setup_set_segment_support_height(SEGMENT_C0 | SEGMENT_D0 | SEGMENT_D4, height, 0);
			paint_setup_set_segment_support_height(SEGMENT_B8 | SEGMENT_C4 | SEGMENT_BC, height, 4);
			paint_setup_set_segment_support_height(SEGMENT_C8 | SEGMENT_CC, height + 6, 0x1E);
			paint_setup_set_segment_support_height(SEGMENT_B4, height + 6 + 6, 0x1E);
			paint_setup_set_support_height(height, 4);
			break;

		case 5:
			// loc_661F11
			//     1E          ▓▓
			//   1E  1E      ▒▒  ▒▒
			// 05  05  05  ░░  ░░  ░░
			//   1B  1B      ▒▒  ▒▒
			//     1B          ▓▓
			paint_setup_set_segment_support_height(SEGMENT_B4, height + 6 + 6, 0x1E);
			paint_setup_set_segment_support_height(SEGMENT_C8 | SEGMENT_CC, height + 6, 0x1E);
			paint_setup_set_segment_support_height(SEGMENT_B8 | SEGMENT_C4 | SEGMENT_BC, height, 5);
			paint_setup_set_segment_support_height(SEGMENT_D0 | SEGMENT_D4, height + 6, 0x1B);
			paint_setup_set_segment_support_height(SEGMENT_C0, height + 6 + 6, 0x1B);
			paint_setup_set_support_height(height, 5);
			break;

		case 6:
			// loc_661FA6
			//     06          ▓▓
			//   06  06      ▓▓  ▒▒
			// 06  06  06  ▓▓  ▒▒  ░░
			//   06  06      ▒▒  ░░
			//     06          ░░
			paint_setup_set_segment_support_height(SEGMENT_BC | SEGMENT_D4 | SEGMENT_C0, height + 2, 6);
			paint_setup_set_segment_support_height(SEGMENT_D0 | SEGMENT_C4 | SEGMENT_CC, height + 2 + 6, 6);
			paint_setup_set_segment_support_height(SEGMENT_B8 | SEGMENT_C8 | SEGMENT_B4, height + 2 + 6 + 6, 6);
			paint_setup_set_support_height(height, 6);
			break;

		case 7:
			// loc_66203F
			//     07          ▓▓
			//   00  17      ▓▓  ▒▒
			// 00  07  17  ▓▓  ▓▓  ░░
			//   00  17      ▓▓  ▒▒
			//     07          ▓▓
			paint_setup_set_segment_support_height(SEGMENT_BC, height + 4, 0x17);
			paint_setup_set_segment_support_height(SEGMENT_CC | SEGMENT_D4, height + 4 + 6, 0x17);
			paint_setup_set_segment_support_height(SEGMENT_B4 | SEGMENT_C4 | SEGMENT_C0, height + 4 + 6 + 6, 7);
			paint_setup_set_segment_support_height(SEGMENT_C8 | SEGMENT_D0 | SEGMENT_B8, height + 4 + 6 + 6, 0);
			paint_setup_set_support_height(height, 7);
			break;

		case 8:
			// loc_6620D8
			paint_setup_set_segment_support_height(SEGMENT_B8 | SEGMENT_C8 | SEGMENT_D0, height, 0);
			paint_setup_set_segment_support_height(SEGMENT_B4 | SEGMENT_C4 | SEGMENT_C0, height, 8);
			paint_setup_set_segment_support_height(SEGMENT_CC | SEGMENT_D4, height + 6, 0x1D);
			paint_setup_set_segment_support_height(SEGMENT_BC, height + 6 + 6, 0x1D);
			paint_setup_set_support_height(height, 8);
			break;

		case 9:
			// loc_66216D
			paint_setup_set_support_height(height, 9);
			paint_setup_set_segment_support_height(SEGMENT_B4 | SEGMENT_C8 | SEGMENT_B8, height + 2, 9);
			paint_setup_set_segment_support_height(SEGMENT_D0 | SEGMENT_C4 | SEGMENT_CC, height + 2 + 6, 9);
			paint_setup_set_segment_support_height(SEGMENT_C0 | SEGMENT_D4 | SEGMENT_BC, height + 2 + 6 + 6, 9);
			break;

		case 10:
			// loc_662206
			paint_setup_set_support_height(height, 0xA);
			paint_setup_set_segment_support_height(SEGMENT_B8, height + 6 + 6, 0x17);
			paint_setup_set_segment_support_height(SEGMENT_C8 | SEGMENT_D0, height + 6, 0x17);
			paint_setup_set_segment_support_height(SEGMENT_B4 | SEGMENT_C4 | SEGMENT_C0, height, 0xA);
			paint_setup_set_segment_support_height(SEGMENT_CC | SEGMENT_D4, height + 6, 0x1D);
			paint_setup_set_segment_support_height(SEGMENT_BC, height + 6 + 6, 0x1D);
			break;

		case 11:
			// loc_66229B
			paint_setup_set_support_height(height, 0xB);
			paint_setup_set_segment_support_height(SEGMENT_B4, height + 4, 0x1B);
			paint_setup_set_segment_support_height(SEGMENT_C8 | SEGMENT_CC, height + 4 + 6, 0x1B);
			paint_setup_set_segment_support_height(SEGMENT_B8 | SEGMENT_C4 | SEGMENT_BC, height + 4 + 6 + 6, 0xB);
			paint_setup_set_segment_support_height(SEGMENT_D0 | SEGMENT_D4 | SEGMENT_C0, height + 4 + 6 + 6, 0);
			break;

		case 12:
			// loc_662334
			paint_setup_set_support_height(height, 0xC);
			paint_setup_set_segment_support_height(SEGMENT_B8 | SEGMENT_D0 | SEGMENT_C0, height + 2, 0xC);
			paint_setup_set_segment_support_height(SEGMENT_C8 | SEGMENT_C4 | SEGMENT_D4, height + 2 + 6, 0xC);
			paint_setup_set_segment_support_height(SEGMENT_B4 | SEGMENT_CC | SEGMENT_BC, height + 2 + 6 + 6, 0xC);
			break;

		case 13:
			// loc_6623CD
			paint_setup_set_support_height(height, 0xD);
			paint_setup_set_segment_support_height(SEGMENT_B8, height + 4, 0x1D);
			paint_setup_set_segment_support_height(SEGMENT_C8 | SEGMENT_D0, height + 4 + 6, 0x1D);
			paint_setup_set_segment_support_height(SEGMENT_B4 | SEGMENT_C4 | SEGMENT_C0, height + 4 + 6 + 6, 0xD);
			paint_setup_set_segment_support_height(SEGMENT_CC | SEGMENT_D4 | SEGMENT_BC, height + 4 + 6 + 6, 0);
			break;

		case 14:
			// loc_662466
			paint_setup_set_support_height(height, 0xE);
			paint_setup_set_segment_support_height(SEGMENT_C0, height + 4, 0x1E);
			paint_setup_set_segment_support_height(SEGMENT_D0 | SEGMENT_D4, height + 4 + 6, 0x1E);
			paint_setup_set_segment_support_height(SEGMENT_B8 | SEGMENT_C4 | SEGMENT_BC, height + 4 + 6 + 6, 0xE);
			paint_setup_set_segment_support_height(SEGMENT_C8 | SEGMENT_CC | SEGMENT_B4, height + 4 + 6 + 6, 0);
			break;

		case 23:
			// loc_6624FF
			paint_setup_set_support_height(height, 0x17);
			paint_setup_set_segment_support_height(SEGMENT_BC, height + 4, 0x17);
			paint_setup_set_segment_support_height(SEGMENT_CC | SEGMENT_D4, height + 4 + 6, 0x17);
			paint_setup_set_segment_support_height(SEGMENT_B4 | SEGMENT_C4 | SEGMENT_C0, height + 4 + 6 + 6, 0x17);
			paint_setup_set_segment_support_height(SEGMENT_C8 | SEGMENT_D0, height + 4 + 6 + 6 + 6, 0x17);
			paint_setup_set_segment_support_height(SEGMENT_B8, height + 4 + 6 + 6 + 6 + 6, 0x17);
			break;

		case 27:
			// loc_6625A0
			paint_setup_set_support_height(height, 0x1B);
			paint_setup_set_segment_support_height(SEGMENT_B4, height + 4, 0x1B);
			paint_setup_set_segment_support_height(SEGMENT_C8 | SEGMENT_CC, height + 4 + 6, 0x1B);
			paint_setup_set_segment_support_height(SEGMENT_B8 | SEGMENT_C4 | SEGMENT_BC, height + 4 + 6 + 6, 0x1B);
			paint_setup_set_segment_support_height(SEGMENT_D0 | SEGMENT_D4, height + 4 + 6 + 6 + 6, 0x1B);
			paint_setup_set_segment_support_height(SEGMENT_C0, height + 4 + 6 + 6 + 6 + 6, 0x1B);
			break;

		case 29:
			// loc_662641
			paint_setup_set_support_height(height, 0x1D);
			paint_setup_set_segment_support_height(SEGMENT_B8, height + 4, 0x1D);
			paint_setup_set_segment_support_height(SEGMENT_C8 | SEGMENT_D0, height + 4 + 6, 0x1D);
			paint_setup_set_segment_support_height(SEGMENT_B4 | SEGMENT_C4 | SEGMENT_C0, height + 4 + 6 + 6, 0x1D);
			paint_setup_set_segment_support_height(SEGMENT_CC | SEGMENT_D4, height + 4 + 6 + 6 + 6, 0x1D);
			paint_setup_set_segment_support_height(SEGMENT_BC, height + 4 + 6 + 6 + 6 + 6, 0x1D);
			break;

		case 30:
			// loc_6626E2
			paint_setup_set_support_height(height, 0x1E);
			paint_setup_set_segment_support_height(SEGMENT_C0, height + 4, 0x1E);
			paint_setup_set_segment_support_height(SEGMENT_D0 | SEGMENT_D4, height + 4 + 6, 0x1E);
			paint_setup_set_segment_support_height(SEGMENT_B8 | SEGMENT_C4 | SEGMENT_BC, height + 4 + 6 + 6, 0x1E);
			paint_setup_set_segment_support_height(SEGMENT_C8 | SEGMENT_CC, height + 4 + 6 + 6 + 6, 0x1E);
			paint_setup_set_segment_support_height(SEGMENT_B4, height + 4 + 6 + 6 + 6 + 6, 0x1E);
			break;
	}

}
