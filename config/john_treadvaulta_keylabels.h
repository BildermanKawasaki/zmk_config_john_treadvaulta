/*                              36 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────────────────────────────╮ ╭────────────────────────────────────────────╮
  │  0   1   2   3   4   5   6   7   8   9  10 │ │ LT4 LT3 LT2 LT1 LT0 CT RT0 RT1 RT2 RT3 RT4 │
  │   11  12  13  14  15   16  17  18  19  20  │ │  LM4 LM3 LM2 LM1 LM0  RM0 RM1 RM2 RM3 RM4 │
  │ 21  22  23  24  25  26  27  28  29  30  31 │ │ LB4 LB3 LB2 LB1 LB0 CB RB0 RB1 RB2 RB3 RB4 │
  ╰─────╮ 32       33        34       35 ╭─────╯ ╰─────╮ LH1      LH0      RH0      RH1 ╭─────╯
        ╰────────────────────────────────╯             ╰────────────────────────────────╯             */

#pragma once

#define LT0  4  // left-top row
#define LT1  3
#define LT2  2
#define LT3  1
#define LT4  0

#define CT   5   // center-top rowo

#define RT0  6  // right-top row
#define RT1  7
#define RT2  8
#define RT3  9
#define RT4  10

#define LM0 15  // left-middle row
#define LM1 14
#define LM2 13
#define LM3 12
#define LM4 11

#define RM0 16  // right-middle row
#define RM1 17
#define RM2 18
#define RM3 19
#define RM4 20

#define LB0 25  // left-bottom row
#define LB1 24
#define LB2 23
#define LB3 22
#define LB4 21

#define CB 26   // center-bottom row

#define RB0 27  // right-bottom row
#define RB1 28
#define RB2 29
#define RB3 30
#define RB4 31

#define LH0 33  // left thumb keys
#define LH1 32

#define RH0 34  // right thumb keys
#define RH1 35

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4 
#define KEYS_C CT CB
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4
#define THUMBS_L LH0 LH1 
#define THUMBS_R RH0 RH1 
#define THUMBS THUMBS_L THUMBS_R
