/*
 * File: patterns.h
 *
 * Kaossilator-style gate arpeggiator patterns
 *
 * 2020 (c) Oleg Burdaev
 * mailto: dukesrg@gmail.com
 *
 */

#define PATTERN_QUANTIZE 16 //pattern beat quantization
#define PATTERN_SIZE 64 //pattern maximum size in quantization units
#define PATTERN_COUNT 50 //number of patterns

//Patterns data - RLE endocded and zero-terminated
const uint8_t patterns[] = {
0x31, 0x31, 0x31, 0x31, 0x00,
0x62, 0x62, 0x00,
0xA2, 0x00,
0xD3, 0x00,
0xF0, 0x54, 0x00,
0xF0, 0xD4, 0x00,
0xF0, 0xF0, 0xF0, 0xF4, 0x00,
0x31, 0x35, 0x00,
0x84, 0x00,
0x44, 0x31, 0x00,

0x13, 0x53, 0x00,
0x71, 0x31, 0x31, 0x00,
0x31, 0x31, 0x71, 0x00,
0x31, 0x35, 0x31, 0x00,
0x13, 0x62, 0x13, 0x00,
0x17, 0x71, 0x00,
0x35, 0x31, 0x31, 0x00,
0x13, 0x13, 0x62, 0x00,
0x32, 0x12, 0x41, 0x12, 0x00,
0x35, 0x41, 0x12, 0x00,

0x23, 0x12, 0x41, 0x21, 0x00,
0x71, 0x53, 0x13, 0x00,
0x84, 0x44, 0x00,
0x35, 0x35, 0x31, 0x00,
0x71, 0x31, 0x31, 0x31, 0x00,
0x31, 0x31, 0x71, 0x71, 0x00,
0x48, 0x84, 0x00,
0x41, 0x26, 0x21, 0x41, 0x21, 0x00,
0x31, 0x35, 0x31, 0x35, 0x31, 0x31, 0x00,
0x31, 0x31, 0x71, 0x13, 0x31, 0x31, 0x31, 0x00,

0x71, 0x71, 0x13, 0x71, 0x31, 0x00,
0x48, 0xF0, 0x14, 0x00,
0x2A, 0x2A, 0x26, 0x00,
0x31, 0x31, 0x13, 0x53, 0x13, 0x53, 0x00,
0x71, 0x13, 0x71, 0x71, 0x13, 0x00,
0x13, 0x53, 0x53, 0x13, 0x53, 0x00,
0x17, 0x62, 0x13, 0x66, 0x00,
0x17, 0x13, 0x62, 0x13, 0x62, 0x00,
0xA2, 0x48, 0x31, 0x31, 0x00,
0x41, 0x21, 0x14, 0x44, 0x13, 0x62, 0x00,

0x14, 0x12, 0x41, 0x71, 0x12, 0x44, 0x00,
0x85, 0x83, 0x53, 0x00,
0xC4, 0xC4, 0x84, 0x53, 0x53, 0x22, 0x00,
0x84, 0x84, 0x84, 0x84, 0x71, 0x62, 0x00,
0x97, 0x84, 0x84, 0x84, 0x84, 0x00,
0x26, 0x2A, 0x2A, 0x2A, 0x2A, 0x26, 0x00,
0x44, 0x84, 0x44, 0x44, 0x84, 0x44, 0x44, 0x00,
0x31, 0x22, 0x22, 0x22, 0x35, 0x31, 0x35, 0x31, 0x35, 0x31, 0x22, 0x35, 0x00,
0xC4, 0x13, 0x44, 0x44, 0x75, 0x44, 0x44, 0x00,
0xF0, 0x45, 0x22, 0x22, 0x22, 0x22, 0x22, 0x62, 0x22, 0x62, 0x00
};
