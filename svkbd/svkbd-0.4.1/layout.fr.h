#define KEYS 66
static Key keys_fr[KEYS] = {
	{ "²","", XK_dead_circumflex, 1},
	{ "&","1", XK_1, 1 },
	{ "é","2", XK_2, 1 },
	{ "\"","3", XK_3, 1 },
	{ "'","4", XK_4, 1 },
	{ "(","5", XK_5, 1 },
	{ "-","6", XK_6, 1 },
	{ "è","7", XK_7, 1 },
	{ "_","8", XK_8, 1 },
	{ "ç","9", XK_9, 1 },
	{ "à","0", XK_0, 1 },
	{ ")","", XK_ssharp, 1 },
	{ "=","", XK_dead_acute, 1 },
	{ "←", 0, XK_BackSpace, 2 },
	{ "Del.", 0, XK_Delete, 1},
	{ 0 }, /* New row */
	{ "→", 0, XK_Tab, 1 },
	{ "a","", XK_q, 1 },
	{ "z","", XK_w, 1 },
	{ "e","", XK_e, 1 },
	{ "r","", XK_r, 1 },
	{ "t","", XK_t, 1 },
	{ "y","", XK_z, 1 },
	{ "u","", XK_u, 1 },
	{ "i","", XK_i, 1 },
	{ "o","", XK_o, 1 },
	{ "p","", XK_p, 1 },
	{ "^","", 0xfc, 1 },
	{ "$","", XK_plus, 1 },
	{ "Enter", 0, XK_Return, 3 },
	{ 0 }, /* New row */
	{ 0, 0, XK_Caps_Lock, 2 },
	{ "q","", XK_a, 1 },
	{ "s","", XK_s, 1 },
	{ "d","", XK_d, 1 },
	{ "f","", XK_f, 1 },
	{ "g","", XK_g, 1 },
	{ "h","", XK_h, 1 },
	{ "j","", XK_j, 1 },
	{ "k","", XK_k, 1 },
	{ "l","", XK_l, 1 },
	{ "m","", 0xf6, 1 },
	{ "ù","%", 0xe4, 1 },
	{ "*","µ", XK_numbersign, 1 },
	{ 0 }, /* New row */
	{ 0, 0, XK_Shift_L, 2 },
	{ "<",">", XK_less, 1 },
	{ "w","", XK_y, 1 },
	{ "x","", XK_x, 1 },
	{ "c","", XK_c, 1 },
	{ "v","", XK_v, 1 },
	{ "b","", XK_b, 1 },
	{ "n","", XK_n, 1 },
	{ ",","?", XK_m, 1 },
	{ ";",".", XK_comma, 1 },
	{ ":","/", XK_period, 1 },
	{ "!","§", XK_minus, 1 },
	{ 0, 0, XK_Shift_R, 2 },
	{ 0 }, /* New row */
	{ "Ctrl", 0, XK_Control_L, 2 },
	{ "Win",  0, XK_Super_L, 2 },
	{ "Alt", 0, XK_Alt_L, 2 },
	{ "", 0, XK_space, 5 },
	{ "Alt Gr", 0, XK_ISO_Level3_Shift, 2 },
	{ "Menu", 0, XK_Menu, 2 },
	{ "Ctrl", 0, XK_Control_R, 2 },
};

Buttonmod buttonmods[] = {
	{ XK_Shift_L, Button2 },
	{ XK_Alt_L, Button3 },
};

#define OVERLAYS 1
static Key overlay[OVERLAYS] = {
	{ 0, 0, XK_Cancel },
};

#define LAYERS 1
static char* layer_names[LAYERS] = {
	"fr",
};

static Key* available_layers[LAYERS] = {
	keys_fr,
};
