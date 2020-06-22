// Joakim Hentula

#include QMK_KEYBOARD_H
#include "config.h"

#define	ALPH 0
#define	NUMS 1
#define	CURS 2
#define	SYMB 3
#define	NUM 4
#define	GUI 5
#define	MOUS 6
#define	GAME 7

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[ALPH] = {
  {KC_Q,	    KC_W,		   KC_E,		  KC_R,		    KC_T,	   KC_TRNS,		KC_TRNS, 	KC_Y,		KC_U,		 KC_I,		 KC_O,		   KC_P},	
  {KC_A,	    KC_S,		   KC_D,		  KC_F,		    KC_G,	   KC_TRNS,		KC_TRNS, 	KC_H,		KC_J,		 KC_K,		 KC_L,		   KC_SCLN},	
  {KC_Z,	    KC_X,		   KC_C,		  KC_V,		    KC_B,	   KC_GRV, 		KC_BSLS,	KC_N,		KC_M,		 KC_COMM,	 KC_DOT,	   KC_SLSH},	
  {MO(GUI), 	 MO(MOUS),		   KC_LGUI,	       	  LT(NUM, KC_TAB),  SFT_T(KC_BSPC),RCTL_T(KC_ENT),   LALT_T(KC_ESC),    LT(SYMB, KC_SPC),LT(NUM, KC_QUOT),KC_MINS,	 KC_TRNS,	   MO(GUI)}
},
[CURS] = {
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	KC_TRNS, 	 KC_DEL,		KC_HOME,	 KC_END,	 KC_TRNS,	 KC_TRNS},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	KC_TRNS, 	 KC_LEFT,		KC_DOWN,	 KC_UP,		 KC_RGHT,	 KC_TRNS},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	KC_TRNS,	 KC_TRNS,		KC_PGDN,	 KC_PGUP,	 KC_TRNS,	 KC_TRNS},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	KC_TRNS,	 KC_TRNS,		KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS}
},
[SYMB] = {
  {KC_EXLM,	 KC_AT,			    KC_TRNS,		    KC_LCBR,	 KC_RCBR,	KC_TRNS,	 KC_TRNS, 	KC_TRNS,		KC_F7,		 KC_F8,		KC_F9,		 KC_F10},	
  {KC_HASH,	 KC_PERC,		    KC_CIRC,		    KC_EQL,	 KC_DLR,	KC_TRNS,	 KC_TRNS,	KC_TRNS,		KC_F4,		 KC_F5,		KC_F6,		 KC_F11},	
  {KC_LBRC,	 KC_RBRC,		    KC_LPRN,		    KC_RPRN,	 KC_AMPR,	 KC_TRNS,	 KC_TRNS,	KC_TRNS,		KC_F1,		 KC_F2,		KC_F3,		 KC_F12},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,	KC_TRNS,		KC_TRNS, 	KC_TRNS,	KC_TRNS, 	KC_TRNS}
},
[NUM] = {
  {KC_TRNS,	 KC_HOME,		    KC_UP,		    KC_END,	 KC_PGUP,	KC_TRNS,	 KC_TRNS,	 KC_TRNS,		KC_7,	 	KC_8,		KC_9,	 	KC_ASTR},	
  {KC_TRNS,	 KC_LEFT,		    KC_DOWN,		    KC_RGHT,	 KC_PGDN,	KC_TRNS,	 KC_TRNS,	 KC_TRNS,		KC_4,	 	KC_5,		KC_6,	 	KC_PLUS},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,		KC_1,	 	KC_2,		KC_3,	 	KC_BSLS},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_0,			KC_TRNS,	 KC_TRNS,	KC_TRNS,	 KC_EQL}
},
[GUI] =	{
  {LGUI(KC_1),	 LGUI(KC_2),		    LGUI(KC_3),		    LGUI(KC_4),	 LGUI(KC_5),	 KC_TRNS,	 KC_TRNS,	 LGUI(KC_6),		LGUI(KC_7),	 LGUI(KC_8),	LGUI(KC_9),	 LGUI(KC_0)},	
  {LCTL(KC_1),	 LCTL(KC_2),		    LCTL(KC_3),		    LCTL(KC_4),	 LCTL(KC_5),	 KC_TRNS,	 KC_TRNS,	 LCTL(KC_6),		LCTL(KC_7),	 LCTL(KC_8),	LCTL(KC_9),	 LCTL(KC_0)},	
  {LCTL(S(KC_TAB)), LCTL(KC_TAB),	    LALT(S(KC_TAB)),	    LALT(KC_TAB),LCTL(S(KC_ESC)),KC_TRNS,	 KC_TRNS,	 RESET,			KC_TRNS,	 KC_TRNS,	KC_TRNS,	 TG(GAME)},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,	 KC_TRNS,		KC_TRNS,	 KC_TRNS,	KC_TRNS,	 KC_TRNS}
},
[MOUS] = {
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	KC_TRNS,	 KC_TRNS,	 KC_TRNS,		KC_TRNS,	 KC_MS_U,	KC_TRNS,	 KC_TRNS},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	KC_TRNS,	 KC_TRNS,	 KC_TRNS,		KC_MS_L,	 KC_MS_D,	KC_MS_R,	 KC_TRNS},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	KC_TRNS,	 KC_TRNS,		KC_TRNS,	 KC_TRNS,	KC_TRNS,	 KC_TRNS},	
  {KC_TRNS,	 KC_TRNS,		    KC_TRNS,		    KC_TRNS,	 KC_TRNS,	 KC_TRNS,	KC_TRNS,	 KC_BTN1,		KC_BTN2,	 KC_TRNS,	KC_TRNS,	 KC_TRNS}
},
[GAME] = {
  {KC_TAB,	KC_Q,	    KC_W,		   KC_E,		  KC_R,		    KC_TRNS,	 KC_TRNS,  KC_T,	       KC_Y,		KC_U,		 KC_I,		 KC_O},	
  {KC_LCTL,	KC_A,	    KC_S,		   KC_D,		  KC_F,		    KC_TRNS,	 KC_TRNS,  KC_G,	       KC_H,		KC_J,		 KC_K,		 KC_L},	
  {KC_LSFT,	KC_Z,	    KC_X,		   KC_C,		  KC_V,		     KC_SCLN,	 KC_P,	   KC_B,	       KC_M,		KC_COMM,	 KC_DOT,	 KC_SLSH},	
  {KC_CAPS,	KC_TRNS,    KC_TRNS,		   KC_LALT,		  KC_SPC,	     KC_TRNS,	 KC_TRNS,  KC_SPC,             KC_SPC,		KC_QUOT,	 KC_TRNS,	 TG(GAME)}
}
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case KC_Q:
			if (record->event.pressed){
				if (get_mods() & MOD_BIT(KC_LALT)){
					register_code(KC_TAB);
				} 
			} else {
				unregister_code(KC_TAB);
			}
			return true;;
		default:
			return true;
	}
}

