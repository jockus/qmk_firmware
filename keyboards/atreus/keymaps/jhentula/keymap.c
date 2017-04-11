// Joakim Hentula

#include "atreus.h"
#include "action_layer.h"

#define	ALPH 0
#define	NUMS 1
#define	CURS 2
#define	SYMB 3
#define	FKEY 4
#define	GUI 5
#define	MOUS 6
#define	GAME 7
#define	GAMO 8
#define	MSFNC 9

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[ALPH] = {
  {KC_Q,	    KC_W,		   KC_E,		  KC_R,		    KC_T,	    KC_TRNS,	    KC_Y,		KC_U,		 KC_I,		 KC_O,		   KC_P},	
  {KC_A,	    LT(FKEY, KC_S),	   LT(NUMS, KC_D),	  LT(CURS,KC_F),    KC_G,	    KC_TRNS,	    KC_H,		KC_J,		 KC_K,		 KC_L,		   KC_SCLN},	
  {KC_Z,	    KC_X,		   KC_C,		  KC_V,		    KC_B,	    KC_LCTL,	    KC_N,		KC_M,		 KC_COMM,	 KC_DOT,	   KC_SLSH},	
  {LT(GUI,KC_ESC),  TG(MOUS),		   KC_LGUI,	      LT(SYMB,KC_TAB),	  SFT_T(KC_BSPC),   KC_LALT,	    RSFT_T(KC_SPC),	LT(SYMB,KC_QUOT),TG(GAME),	 TG(MSFNC),	   KC_ENT}
},
[NUMS] = {
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_ASTR,	 KC_SLSH,	 KC_TRNS,	 KC_TRNS,		KC_7,		 KC_8,		 KC_9,		 KC_MINS},	
  {KC_TRNS,	 KC_TRNS,		    KC_EQL,		    KC_PLUS,	 KC_MINS,	 KC_TRNS,	 KC_LPRN,		KC_4,		 KC_5,		 KC_6,		 KC_PLUS},	
  {KC_TRNS,	 KC_TRNS,		    KC_DOT,		    KC_COMM,	 KC_TRNS,	 KC_TRNS,	 KC_RPRN,		KC_1,		 KC_2,		 KC_3,		 KC_SLSH},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_0,			KC_TRNS,	 KC_DOT,	 KC_EQL,	 KC_TRNS}
},
[CURS] = {
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_DEL,		KC_PGUP,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_LEFT,		KC_DOWN,	 KC_UP,		 KC_RGHT,	 KC_TRNS},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,		KC_PGDN,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,		KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS}
},
[SYMB] = {
  {KC_EXLM,	 KC_AT,			    KC_HASH,		    KC_DLR,	 KC_PERC,	 KC_TRNS,	 KC_CIRC,		KC_AMPR,	 KC_ASTR,	KC_MINS,	 KC_PLUS},	
  {KC_AT,	 KC_LBRC,		    KC_LCBR,		    KC_LPRN,	 KC_TRNS,	 KC_TRNS,	 KC_EQL,		KC_RPRN,	 KC_RCBR,	KC_RBRC,	 KC_GRV},	
  {KC_HASH,	 KC_PIPE,		    KC_LCBR,		    KC_RCBR,	 KC_SLSH,	 KC_TRNS,	 KC_UNDS,		KC_RPRN,	 KC_RCBR,	KC_RBRC,	 KC_BSLS},	
  {KC_TRNS,	 KC_TRNS,		    KC_LBRC,		    KC_RBRC,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,		KC_TRNS,	 KC_TRNS,	KC_TRNS,	 KC_TRNS}
},
[FKEY] = {
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,		KC_F7,		 KC_F8,		KC_F9,		 KC_F10},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,		KC_F4,		 KC_F5,		KC_F6,		 KC_F11},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,		KC_F1,		 KC_F2,		KC_F3,		 KC_F12},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,		KC_TRNS,	 KC_TRNS,	KC_TRNS,	 KC_TRNS}
},
[GUI] =	{
  {RESET,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,		LGUI(KC_7),	 LGUI(KC_8),	LGUI(KC_9),	 KC_TRNS},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,		LGUI(KC_4),	 LGUI(KC_5),	LGUI(KC_6),	 KC_TRNS},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,		LGUI(KC_1),	 LGUI(KC_2),	LGUI(KC_3),	 KC_TRNS},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 LGUI(KC_0),		KC_TRNS,	 KC_TRNS,	KC_TRNS,	 KC_TRNS}
},
[MOUS] = {
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,		KC_TRNS,	 KC_MS_U,	KC_TRNS,	 KC_TRNS},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,		KC_MS_L,	 KC_MS_D,	KC_MS_R,	 KC_TRNS},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,		KC_TRNS,	 KC_TRNS,	KC_TRNS,	 KC_TRNS},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_BTN1,		KC_BTN2,	 KC_TRNS,	KC_TRNS,	 KC_TRNS}
},
[MSFNC]	= {
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,		KC_TRNS,	 KC_FN0,	KC_TRNS,	 KC_TRNS},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,		KC_FN2,		 KC_FN1,	KC_FN3,		 KC_TRNS},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,		KC_TRNS,	 KC_TRNS,	KC_TRNS,	 KC_TRNS},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_FN8,		KC_FN9,		KC_TRNS,	KC_TRNS,	 KC_TRNS}
},
[GAME] = {
  {KC_Q,	    KC_W,		   KC_E,		  KC_R,		    KC_T,	    KC_TRNS,	    KC_Y,		KC_U,		 KC_I,		 KC_O,		   KC_P},	
  {KC_A,	    KC_S,		   KC_D,		  KC_F,		    KC_G,	    KC_TRNS,	    KC_H,		KC_J,		 KC_K,		 KC_L,		   KC_SCLN},	
  {KC_Z,	    KC_X,		   KC_C,		  KC_V,		    KC_B,	    KC_LCTL,	    KC_N,		KC_M,		 KC_COMM,	 KC_DOT,	   KC_SLSH},	
  {KC_TRNS,	    KC_TRNS,		   TG(GAMO),		  KC_TAB,	    KC_SPC,	    KC_LALT,	    KC_SPC,		KC_QUOT,	 KC_TRNS,	 KC_ESC,	   KC_ENT}
},
[GAMO] = {
  {KC_Q,	    KC_W,		   KC_E,		  KC_R,		    KC_T,	    KC_TRNS,	    KC_Y,		KC_U,		 KC_FN0,	 KC_O,		   KC_P},	
  {KC_A,	    KC_S,		   KC_D,		  KC_F,		    KC_G,	    KC_TRNS,	    KC_H,		KC_FN2,		 KC_FN1,	 KC_FN3,	   KC_SCLN},	
  {KC_Z,	    KC_X,		   KC_C,		  KC_V,		    KC_B,	    KC_LCTL,	    KC_N,		KC_M,		 KC_COMM,	 KC_DOT,	   KC_SLSH},	
  {KC_TRNS,	    KC_TRNS,		   KC_TRNS,		  KC_TAB,	    KC_SPC,	    KC_LALT,	    KC_FN8,		KC_FN9,		 KC_TRNS,	 KC_ESC,	   KC_ENT}
}
};

const uint16_t PROGMEM fn_actions[] = {
    [0]	= ACTION_MOUSEKEY(KC_MS_U), // mouse movement
    [1]	= ACTION_MOUSEKEY(KC_MS_D),
    [2]	= ACTION_MOUSEKEY(KC_MS_L),
    [3]	= ACTION_MOUSEKEY(KC_MS_R),
    [4]	= ACTION_MOUSEKEY(KC_WH_U), // wheel
    [5]	= ACTION_MOUSEKEY(KC_WH_D),
    [6]	= ACTION_MOUSEKEY(KC_WH_L),
    [7]	= ACTION_MOUSEKEY(KC_WH_R),
    [8]	= ACTION_MOUSEKEY(KC_BTN1), // clicks
    [9]	= ACTION_MOUSEKEY(KC_BTN2)
};
