#include "Pirate_Far.h"
// Data created with Img2CPC - (c) Retroworks - 2007-2017
// Tile enemy3_sp_0: 12x13 pixels, 6x13 bytes.
const u8 enemy3_sp_0[6 * 13] = {
	0xc0, 0xc0, 0xd0, 0xf0, 0xc0, 0xc0,
	0xc0, 0x40, 0xf0, 0xf5, 0xc0, 0xc0,
	0xc0, 0x80, 0x50, 0xa0, 0xc0, 0xc0,
	0xc0, 0x40, 0x3f, 0xfc, 0xc0, 0xc0,
	0xc0, 0xc0, 0xc0, 0x3f, 0xc0, 0xc0,
	0xd5, 0x6c, 0x57, 0xff, 0xc0, 0x95,
	0x6a, 0xc4, 0x9c, 0x3c, 0x9c, 0xea,
	0xc0, 0xc0, 0x57, 0xff, 0xc8, 0xc0,
	0xc0, 0xc0, 0x9c, 0x3c, 0xc0, 0xc0,
	0xc0, 0xc0, 0xc0, 0xe2, 0xc0, 0xc0,
	0x80, 0x40, 0x30, 0x30, 0xc0, 0xc0,
	0xc0, 0x40, 0x30, 0x30, 0x40, 0x40,
	0xc0, 0x90, 0x60, 0xc0, 0x80, 0xc0
};

// Tile enemy3_sp_1: 12x13 pixels, 6x13 bytes.
const u8 enemy3_sp_1[6 * 13] = {
	0xc0, 0xc0, 0xd0, 0xf0, 0xc0, 0xc0,
	0xc0, 0x40, 0xf0, 0xf5, 0xc0, 0xc0,
	0xc0, 0x80, 0x50, 0xa0, 0xc0, 0xc0,
	0xc0, 0x40, 0x3f, 0xfc, 0xc0, 0xc0,
	0xc0, 0xc0, 0xc0, 0x3f, 0xc0, 0xc0,
	0xc0, 0xc4, 0x57, 0xff, 0xc0, 0xc0,
	0xc0, 0x46, 0x9c, 0x3c, 0xc0, 0xc0,
	0xc0, 0xea, 0x57, 0xff, 0x17, 0xc0,
	0xc0, 0x6a, 0x9c, 0x3c, 0xc0, 0xc0,
	0xc0, 0xc0, 0xc0, 0xe2, 0xc0, 0xc0,
	0xc0, 0xc0, 0x30, 0x30, 0x40, 0xc0,
	0xc0, 0x80, 0x10, 0x60, 0x40, 0xc0,
	0xc0, 0x40, 0xc0, 0xc0, 0x80, 0xc0
};

// Tile enemy3_sp_2: 12x13 pixels, 6x13 bytes.
const u8 enemy3_sp_2[6 * 13] = {
	0xc0, 0xd0, 0xf0, 0xf0, 0xc0, 0xc0,
	0x00, 0x50, 0xf0, 0xf5, 0x80, 0xc0,
	0x80, 0x00, 0x50, 0xa0, 0x40, 0xc0,
	0x00, 0x40, 0x3f, 0xfc, 0x00, 0xc0,
	0xc0, 0x00, 0xc0, 0x3f, 0xc0, 0xc0,
	0x2e, 0x46, 0x57, 0xff, 0x98, 0xbf,
	0x06, 0x46, 0x9c, 0x3c, 0xc8, 0x95,
	0x57, 0x57, 0x57, 0xff, 0xea, 0xc0,
	0x3f, 0x3f, 0x9c, 0x3c, 0x3f, 0xc0,
	0x95, 0x95, 0xc0, 0xe2, 0xc0, 0xc0,
	0xc0, 0xfc, 0x30, 0x30, 0x80, 0x40,
	0x80, 0x80, 0x80, 0x60, 0x00, 0xc0,
	0xc0, 0x80, 0x80, 0x40, 0x00, 0xc0
};

// Tile enemy3_sp_3: 12x13 pixels, 6x13 bytes.
const u8 enemy3_sp_3[6 * 13] = {
	0xc0, 0xd0, 0xf0, 0xf0, 0xe0, 0xc0,
	0xc0, 0xd5, 0xfa, 0xf0, 0xa0, 0x80,
	0xc0, 0x80, 0x50, 0xa0, 0x00, 0x40,
	0xc0, 0x80, 0xfc, 0x3f, 0x80, 0x00,
	0xc0, 0x95, 0x3f, 0xc0, 0x00, 0xc0,
	0x6a, 0x7f, 0xff, 0xab, 0x9c, 0xba,
	0xff, 0x6c, 0x3c, 0x6c, 0x8c, 0x1d,
	0x95, 0x4c, 0xff, 0xab, 0xab, 0xc0,
	0xc0, 0x90, 0x3c, 0x6c, 0x24, 0xc0,
	0xc0, 0xc0, 0xd1, 0xc0, 0xc0, 0xc0,
	0xc0, 0x54, 0x30, 0x30, 0x80, 0x00,
	0x80, 0x80, 0x30, 0x30, 0x80, 0x80,
	0xc0, 0x40, 0x40, 0xb8, 0x74, 0xe8
};

// Tile enemy3_sp_4: 12x13 pixels, 6x13 bytes.
const u8 enemy3_sp_4[6 * 13] = {
	0xc0, 0xf0, 0xf0, 0xe0, 0xc0, 0xc0,
	0xc0, 0xfa, 0xfa, 0xf0, 0x80, 0xc0,
	0xc0, 0x50, 0x50, 0xa0, 0x40, 0xc0,
	0xc0, 0x00, 0xfc, 0x3f, 0x80, 0xc0,
	0xc0, 0x3f, 0x3f, 0xc0, 0xc0, 0xc0,
	0xea, 0xff, 0xff, 0xab, 0xc8, 0xc0,
	0x95, 0x30, 0x3c, 0x6c, 0x89, 0xc0,
	0x2b, 0x2b, 0xff, 0xab, 0xd5, 0xc0,
	0xc0, 0x30, 0x3c, 0x6c, 0x95, 0xc0,
	0xc0, 0xc1, 0xd1, 0xc0, 0xc0, 0xc0,
	0x00, 0xa8, 0x30, 0x30, 0xc0, 0xc0,
	0x80, 0x80, 0x90, 0x20, 0x40, 0xc0,
	0x40, 0x40, 0xc0, 0x80, 0x80, 0xc0
};

// Tile enemy3_sp_5: 12x13 pixels, 6x13 bytes.
const u8 enemy3_sp_5[6 * 13] = {
	0xc0, 0xc0, 0xf0, 0xe0, 0xc0, 0xc0,
	0xc0, 0xc0, 0xfa, 0xf0, 0x80, 0xc0,
	0xc0, 0xc0, 0x50, 0xa0, 0x40, 0xc0,
	0xc0, 0xc0, 0xfc, 0x3f, 0x80, 0xc0,
	0xc0, 0xc0, 0x3f, 0xc0, 0xc0, 0xc0,
	0xc0, 0xc4, 0xff, 0xab, 0xc8, 0xc0,
	0xc0, 0xc4, 0x3c, 0x6c, 0x89, 0xc0,
	0xc0, 0x81, 0xff, 0xab, 0xab, 0xc0,
	0xc0, 0x3f, 0x3c, 0x6c, 0x3f, 0xc0,
	0xc0, 0xc0, 0xd1, 0xc0, 0x6a, 0xc0,
	0xc0, 0xc0, 0x30, 0x30, 0xc0, 0xc0,
	0xc0, 0x80, 0x90, 0x40, 0xc0, 0xc0,
	0xc0, 0x00, 0x80, 0x40, 0xc0, 0xc0
};

// Tile enemy3_sp_6: 12x13 pixels, 6x13 bytes.
const u8 enemy3_sp_6[6 * 13] = {
	0xc0, 0xc0, 0xd0, 0xe0, 0xc0, 0xc0,
	0xc0, 0x80, 0xf5, 0xfa, 0xc0, 0xc0,
	0xc0, 0xc0, 0x50, 0xa0, 0xc0, 0xc0,
	0xc0, 0x80, 0x7e, 0xbd, 0xc0, 0xc0,
	0xc0, 0xc0, 0x95, 0x6a, 0xc0, 0xc0,
	0xc0, 0xc4, 0xff, 0xff, 0xc8, 0xc0,
	0xc0, 0x89, 0x3c, 0x94, 0xea, 0xc0,
	0xc0, 0xea, 0xff, 0x6e, 0xc8, 0xc0,
	0xc0, 0x6a, 0x3c, 0x3c, 0xc0, 0xc0,
	0xc0, 0xc0, 0xd1, 0xe2, 0xc0, 0xc0,
	0xc0, 0xc0, 0x30, 0x30, 0xc0, 0xc0,
	0xc0, 0xc0, 0x40, 0x80, 0xc0, 0xc0,
	0xc0, 0x80, 0x40, 0x80, 0x40, 0xc0
};

// Tile enemy3_sp_7: 12x13 pixels, 6x13 bytes.
const u8 enemy3_sp_7[6 * 13] = {
	0xc0, 0xc0, 0xd0, 0xe0, 0xc0, 0xc0,
	0xc0, 0x80, 0xf5, 0xfa, 0xc0, 0xc0,
	0xc0, 0xc0, 0x50, 0xa0, 0xc0, 0xc0,
	0xc0, 0x80, 0x7e, 0xbd, 0xc0, 0xc0,
	0x95, 0xc0, 0x95, 0x6a, 0xc0, 0x6a,
	0x81, 0xbe, 0x55, 0xff, 0x7d, 0x42,
	0xc0, 0x89, 0x28, 0x28, 0x46, 0xc0,
	0xc0, 0xc0, 0xaa, 0x55, 0x48, 0xc0,
	0xc0, 0xc0, 0x28, 0x3c, 0xc0, 0xc0,
	0xc0, 0xc0, 0xd1, 0xe2, 0xc0, 0xc0,
	0xc0, 0x40, 0x30, 0x30, 0x80, 0xc0,
	0xc0, 0x80, 0x40, 0x80, 0x40, 0xc0,
	0xc0, 0x80, 0x40, 0x80, 0x40, 0xc0
};

// Tile enemy3_sp_8: 12x13 pixels, 6x13 bytes.
const u8 enemy3_sp_8[6 * 13] = {
	0xc0, 0xc0, 0xc0, 0xf0, 0xc0, 0xc0,
	0xc0, 0xc0, 0x40, 0xc0, 0xe0, 0xc0,
	0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
	0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
	0xc0, 0x6a, 0xc0, 0xc0, 0xc0, 0x95,
	0xc0, 0x42, 0xc0, 0xc0, 0x90, 0xea,
	0xc0, 0x84, 0x12, 0xc0, 0x81, 0x48,
	0xc0, 0xc0, 0xd5, 0x03, 0xea, 0xc0,
	0xc0, 0xc0, 0xc4, 0x57, 0xc8, 0xc0,
	0xc0, 0x80, 0xf0, 0x44, 0x00, 0xc0,
	0xc0, 0xd0, 0x50, 0xaa, 0x20, 0xc0,
	0xc0, 0xd0, 0x50, 0xaa, 0x40, 0xc0,
	0xc0, 0x80, 0xf0, 0x44, 0x00, 0xc0
};

