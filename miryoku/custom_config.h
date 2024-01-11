// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
#define MIRYOKU_BASE_LAYER \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp M,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP


#define MIRYOKU_LAYER_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &bt BT_CLR,         U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_EP_TOG,          &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP
