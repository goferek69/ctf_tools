/* h263tables.c

   Huffman Tables for h.263 encoding.

   Copyright (c) 2003 Matthias Kramm <kramm@quiss.org>

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA */

#include "h263tables.h"

struct huffcode mcbpc_intra[] = {
{"1",1, 0},		 /*cbpc-00 mb type 3*/
{"001",3, 1},         /*cbpc-01 mb type 3*/
{"010",3, 2},         /*cbpc-10 mb type 3*/
{"011",3, 3},         /*cbpc-11 mb type 3*/
{"0001",4, 4},        /*cbpc-00 mb type 4*/
{"000001",6, 5},      /*cbpc-01 mb type 4*/
{"000010",6, 6},      /*cbpc-10 mb type 4*/
{"000011",6, 7},      /*cbpc-11 mb type 4*/
{"000000001",9, 8},   /* stuffing */
{0,0,0},
};

struct mcbpc_intra_params
    mcbpc_intra_params[] =
{{0, 3, 0}, //00 
 {1, 3, 1}, //01 
 {2, 3, 2}, //10 
 {3, 3, 3}, //11 
 {4, 4, 0}, //00 
 {5, 4, 1}, //01 
 {6, 4, 2}, //10 
 {7, 4, 3}, //11 
 {8 -1, -1}
};

struct huffcode mcbpc_inter[] = {
{"1", 1, 0},
{"0011", 4, 1},
{"0010", 4 ,2},
{"000101", 6, 3},
{"011", 3, 4},
{"0000111", 7, 5},
{"0000110", 7, 6},
{"000000101", 9, 7},
{"010", 3, 8},
{"0000101", 7, 9},
{"0000100", 7, 10},
{"00000101", 8, 11},
{"00011", 5, 12},
{"00000100", 8, 13},
{"00000011", 8, 14},
{"0000011", 7, 15},
{"000100", 6, 16},
{"000000100", 9, 17},
{"000000011", 9, 18},
{"000000010", 9, 19},
{"000000001", 9, 20}, /*stuffing*/

/* h.263+ only
{"00000000010", 11, 21},
{"0000000001100", 13, 22},
{"0000000001110", 13, 23},
{"0000000001111", 13, 24},
*/
{0,0,0}
};

struct mcbpc_inter_params
    mcbpc_inter_params[] =
{ {0, 0, 0},  {1, 0, 1},  {2, 0, 2},  {3, 0, 3}, 
  {4, 1, 0},  {5, 1, 1},  {6, 1, 2},  {7, 1, 3}, 
  {8, 2, 0},  {9, 2, 1}, {10, 2, 2}, {11, 2, 3}, 
 {12, 3, 0}, {13, 3, 1}, {14, 3, 2}, {15, 3, 3}, 
 {16, 4, 0}, {17, 4, 1}, {18, 4, 2}, {19, 4, 3},
 {20, -1, -1}, //stuffing
 //{21, 5, 0}, {22, 5, 1}, {23, 5, 2}, {24, 5, 3}, //h.263+ only
};

struct huffcode cbpy[] = {
{"0011", 4, 0},
{"00101", 5, 1},
{"00100", 5, 2},
{"1001", 4, 3},
{"00011", 5, 4},
{"0111", 4, 5},
{"000010", 6, 6},
{"1011", 4, 7},
{"00010", 5, 8},
{"000011", 6, 9},
{"0101", 4, 10},
{"1010", 4, 11},
{"0100", 4, 12},
{"1000", 4, 13},
{"0110", 4, 14},
{"11", 2, 15},
{0,0,0}
};

struct huffcode mvd[] = 
{
{"0000000000101", 13, 0},
{"0000000000111", 13, 1},
{"000000000101", 12, 2},
{"000000000111", 12, 3},
{"000000001001", 12, 4},
{"000000001011", 12, 5},
{"000000001101", 12, 6},
{"000000001111", 12, 7},
{"00000001001", 11, 8},
{"00000001011", 11, 9},
{"00000001101", 11, 10},
{"00000001111", 11, 11},
{"00000010001", 11, 12},
{"00000010011", 11, 13},
{"00000010101", 11, 14},
{"00000010111", 11, 15},
{"00000011001", 11, 16},
{"00000011011", 11, 17},
{"00000011101", 11, 18},
{"00000011111", 11, 19},
{"00000100001", 11, 20},
{"00000100011", 11, 21},
{"0000010011", 10, 22},
{"0000010101", 10, 23},
{"0000010111", 10, 24},
{"00000111", 8, 25},
{"00001001", 8, 26},
{"00001011", 8, 27},
{"0000111", 7, 28},
{"00011", 5, 29},
{"0011", 4, 30},
{"011", 3, 31},
{"1", 1, 32},
{"010", 3, 33},
{"0010", 4, 34},
{"00010", 5, 35},
{"0000110", 7, 36},
{"00001010", 8, 37},
{"00001000", 8, 38},
{"00000110", 8, 39},
{"0000010110", 10, 40},
{"0000010100", 10, 41},
{"0000010010", 10, 42},
{"00000100010", 11, 43},
{"00000100000", 11, 44},
{"00000011110", 11, 45},
{"00000011100", 11, 46},
{"00000011010", 11, 47},
{"00000011000", 11, 48},
{"00000010110", 11, 49},
{"00000010100", 11, 50},
{"00000010010", 11, 51},
{"00000010000", 11, 52},
{"00000001110", 11, 53},
{"00000001100", 11, 54},
{"00000001010", 11, 55},
{"00000001000", 11, 56},
{"000000001110", 12, 57},
{"000000001100", 12, 58},
{"000000001010", 12, 59},
{"000000001000", 12, 60},
{"000000000110", 12, 61},
{"000000000100", 12, 62},
{"0000000000110", 13, 63},
{0,0,0}};

struct huffcode rle[] = 
{
{"10", 2, 0},
{"1111", 4, 1},
{"010101", 6, 2},
{"0010111", 7, 3},
{"00011111", 8, 4},
{"000100101", 9, 5},
{"000100100", 9, 6},
{"0000100001", 10, 7},
{"0000100000", 10, 8},
{"00000000111", 11, 9},
{"00000000110", 11, 10},
{"00000100000", 11, 11},
{"110", 3, 12},
{"010100", 6, 13},
{"00011110", 8, 14},
{"0000001111", 10, 15},
{"00000100001", 11, 16},
{"000001010000", 12, 17},
{"1110", 4, 18},
{"00011101", 8, 19},
{"0000001110", 10, 20},
{"000001010001", 12, 21},
{"01101", 5, 22},
{"000100011", 9, 23},
{"0000001101", 10, 24},
{"01100", 5, 25},
{"000100010", 9, 26},
{"000001010010", 12, 27},
{"01011", 5, 28},
{"0000001100", 10, 29},
{"000001010011", 12, 30},
{"010011", 6, 31},
{"0000001011", 10, 32},
{"000001010100", 12, 33},
{"010010", 6, 34},
{"0000001010", 10, 35},
{"010001", 6, 36},
{"0000001001", 10, 37},
{"010000", 6, 38},
{"0000001000", 10, 39},
{"0010110", 7, 40},
{"000001010101", 12, 41},
{"0010101", 7, 42},
{"0010100", 7, 43},
{"00011100", 8, 44},
{"00011011", 8, 45},
{"000100001", 9, 46},
{"000100000", 9, 47},
{"000011111", 9, 48},
{"000011110", 9, 49},
{"000011101", 9, 50},
{"000011100", 9, 51},
{"000011011", 9, 52},
{"000011010", 9, 53},
{"00000100010", 11, 54},
{"00000100011", 11, 55},
{"000001010110", 12, 56},
{"000001010111", 12, 57},
{"0111", 4, 58},
{"000011001", 9, 59},
{"00000000101", 11, 60},
{"001111", 6, 61},
{"00000000100", 11, 62},
{"001110", 6, 63},
{"001101", 6, 64}, /* ?? */
{"001100", 6, 65},
{"0010011", 7, 66},
{"0010010", 7, 67},
{"0010001", 7, 68},
{"0010000", 7, 69},
{"00011010", 8, 70},
{"00011001", 8, 71},
{"00011000", 8, 72},
{"00010111", 8, 73},
{"00010110", 8, 74},
{"00010101", 8, 75},
{"00010100", 8, 76},
{"00010011", 8, 77},
{"000011000", 9, 78},
{"000010111", 9, 79},
{"000010110", 9, 80},
{"000010101", 9, 81},
{"000010100", 9, 82},
{"000010011", 9, 83},
{"000010010", 9, 84},
{"000010001", 9, 85},
{"0000000111", 10, 86},
{"0000000110", 10, 87},
{"0000000101", 10, 88},
{"0000000100", 10, 89},
{"00000100100", 11, 90},
{"00000100101", 11, 91},
{"00000100110", 11, 92},
{"00000100111", 11, 93},
{"000001011000", 12, 94},
{"000001011001", 12, 95},
{"000001011010", 12, 96},
{"000001011011", 12, 97},
{"000001011100", 12, 98},
{"000001011101", 12, 99},
{"000001011110", 12, 100},
{"000001011111", 12, 101},
{"0000011", 7, 102}, /*ESCAPE*/
{0,0,0}
};

struct rle_params
    rle_params[] =
{{0,0,0,1}, {1,0,0,2}, {2,0,0,3}, {3,0,0,4}, {4,0,0,5}, {5,0,0,6}, {6,0,0,7},
{7,0,0,8}, {8,0,0,9}, {9,0,0,10}, {10,0,0,11}, {11,0,0,12}, {12,0,1,1}, {13,0,1,2},
{14,0,1,3}, {15,0,1,4}, {16,0,1,5}, {17,0,1,6}, {18,0,2,1}, {19,0,2,2}, {20,0,2,3}, {21,0,2,4},
{22,0,3,1}, {23,0,3,2}, {24,0,3,3}, {25,0,4,1}, {26,0,4,2}, {27,0,4,3}, {28,0,5,1},
{29,0,5,2}, {30,0,5,3}, {31,0,6,1}, {32,0,6,2}, {33,0,6,3},
{34,0,7,1}, {35,0,7,2}, {36,0,8,1}, {37,0,8,2}, {38,0,9,1}, {39,0,9,2}, {40,0,10,1}, 
{41,0,10,2}, {42,0,11,1}, {43,0,12,1}, {44,0,13,1}, {45,0,14,1}, {46,0,15,1}, 
{47,0,16,1}, {48,0,17,1}, {49,0,18,1}, {50,0,19,1}, {51,0,20,1}, {52,0,21,1}, 
{53,0,22,1}, {54,0,23,1}, {55,0,24,1}, {56,0,25,1}, {57,0,26,1}, 
{58,1,0,1}, {59,1,0,2}, {60,1,0,3}, {61,1,1,1}, {62,1,1,2}, {63,1,2,1}, {64,1,3,1}, {65, 1,4,1}, 
{66,1,5,1}, {67,1,6,1}, {68,1,7,1}, {69,1,8,1}, {70,1,9,1}, {71,1,10,1}, 
{72,1,11,1}, {73,1,12,1}, {74,1,13,1}, {75,1,14,1}, {76,1,15,1}, {77,1,16,1}, 
{78,1,17,1}, {79,1,18,1}, {80,1,19,1}, {81,1,20,1}, {82,1,21,1}, {83,1,22,1}, 
{84,1,23,1}, {85,1,24,1}, {86,1,25,1}, {87,1,26,1}, {88,1,27,1}, {89,1,28,1}, 
{90,1,29,1}, {91,1,30,1}, {92,1,31,1}, {93,1,32,1}, {94,1,33,1}, {95,1,34,1}, 
{96,1,35,1}, {97,1,36,1}, {98,1,37,1}, {99,1,38,1}, {100,1,39,1}, {101,1,40,1}, 
{102,-1, -1, -1}
};

