/*********************************************************************
 * ibm_1394312.h - Keymap for DE IBM 1394312 keyboard layout         *
 *********************************************************************
 * rump is copyright (C) 2008 Chris Lee <clee@mg8.org>                *
 * based on c64key, copyright (C) 2006-2007 Mikkel Holm Olsen         *
 * based on HID-Test by Christian Starkjohann, Objective Development  *
 **********************************************************************
 * rump (Real USB Model-M PCB) is Free Software; you can redistribute *
 * and/or modify it under the terms of the OBDEV lice,nse, as found   *
 * in the license.txt file.                                           *
 *                                                                    *
 * rump is distributed in the hope that it will be useful, but        *
 * WITHOUT ANY WARRANTY; without even the implied warranty of         *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the      *
 * OBDEV license for further details.                                 *
 *********************************************************************/

#ifndef KEYMAP_1394312_H
#define KEYMAP_1394312_H
#include <avr/pgmspace.h>

/* Number of rows in IBM keyboard matrix */
#define NUMROWS 20

#include "usbcodes.h"


/*            n8 n7 o7 n6 n5 o5 n4 n3 o3 n2 n1 o1                                   */
/*            o8 p8 p7 o6 p6 p5 o4 p4 p3 o2 p2 p1                                   */

/* r5 s5   i5 i6 j6 k6 l6 l5 m5 m6 h6 g6 f6 f5 h5 e5      d5 c5 d6     e6 c6 b6 q6  */
/* r6 r4   s4  i4 j4 k4 l4 l3 m3 m4 h4 g4 f4 f3 h3 e2     d7 d3 d4     e4 c4 b4 q4  */
/* r3 s3   s2   i7 j7 k7 l7 l8 m8 m7 h7 g7 f7 f8 f2          d8        e7 c7 b7 q7  */
/* r7 s7   t1 i1 i2 j2 k2 l2 l1 m1 m2 h2 g2 f1 t2         q2 a8 a7     r2 c2 b2 a1  */
/* s8 r8   q8     q1          r1           t8    s1          e8          c1  b1     */

const unsigned char keymap[NUMROWS][8] PROGMEM = { // IBM Model M keymap
//column 1       column 2      column 3      column 4      column 5      column 6      column 7      column 8
  {KEY_KPenter,  0,            0,            0,            0,            0,            KEY_rarr,     KEY_Select    },  // row A
  {KEY_KPcomma,  KEY_KP3,      0,            KEY_KP9,      0,            KEY_KPast,    KEY_KP6,      0             },  // row B
  {KEY_KP0,      KEY_KP2,      0,            KEY_KP8,      KEY_home,     KEY_KPslash,  KEY_KP5,      0             },  // row C
  {0,            0,            KEY_end,      KEY_pgdn,     KEY_ins,      KEY_pgup,     KEY_del,      KEY_uarr      },  // row D
  {0,            KEY_enter,    0,            KEY_KP7,      KEY_bckspc,   KEY_numlock,  KEY_KP4,      KEY_darr      },  // row E
  {KEY_slash,    KEY_hash,     KEY_lbr,      KEY_P,        KEY_minus,    KEY_0,        KEY_smcol,    KEY_ping      },  // row F
  {0,            KEY_dot,      0,            KEY_O,        0,            KEY_9,        KEY_L,        0             },  // row G
  {0,            KEY_comma,    KEY_rbr,      KEY_I,        KEY_equal,    KEY_8,        KEY_K,        0             },  // row H
  {KEY_Euro2,    KEY_Z,        0,            KEY_Q,        KEY_grave,    KEY_1,        KEY_A,        0             },  // row I
  {0,            KEY_X,        0,            KEY_W,        0,            KEY_2,        KEY_S,        0             },  // row J
  {0,            KEY_C,        0,            KEY_E,        0,            KEY_3,        KEY_D,        0             },  // row K
  {KEY_B,        KEY_V,        KEY_T,        KEY_R,        KEY_5,        KEY_4,        KEY_F,        KEY_G,        },  // row L
  {KEY_N,        KEY_M,        KEY_Y,        KEY_U,        KEY_6,        KEY_7,        KEY_J,        KEY_H,        },  // row M
  {KEY_F23,      KEY_F22,      KEY_F20,      KEY_F19,      KEY_F17,      KEY_F16,      KEY_F14,      KEY_F13       },  // row N
  {KEY_F24,      KEY_F10,      KEY_F21,      KEY_F7,       KEY_F18,      KEY_F4,       KEY_F15,      KEY_F1,       },  // row O
  {KEY_F12,      KEY_F11,      KEY_F9,       KEY_F8,       KEY_F6,       KEY_F5,       KEY_F3,       KEY_F2,       },  // row P
  {MOD_LALT,     KEY_larr,     0,            KEY_KPplus,   0,            KEY_KPminus,  KEY_Execute,  MOD_LCTRL     },  // row Q
  {KEY_spc,      KEY_KP1,      KEY_PrtScr,   KEY_Again,    KEY_break,    KEY_scrlck,   KEY_Stop,     MOD_LGUI,     },  // row R
  {MOD_RCTRL,    KEY_cpslck,   KEY_Help,     KEY_tab,      KEY_esc,      0,            KEY_Menu,     KEY_Application}, // row S
  {MOD_LSHIFT,   MOD_RSHIFT,   0,            0,            0,            0,            0,            MOD_RALT      }   // row T
};



#endif
