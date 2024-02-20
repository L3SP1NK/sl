/* Commands */
static const char *dmenu_cmd[]		= { "rofi", "-show", "drun", NULL };
static const char *term_cmd[]		= { "st", NULL };
static const char *xkill_cmd[]  	= { "xkill", NULL };
static const char *calc_cmd[]  		= { "mate-calc", NULL };
static const char *deskmenu_cmd[]	= { "xrootmenu", NULL };
static const char *brighter[]		= { "brightnessctl", "set", "10%+", NULL };
static const char *dimmer[]			= { "brightnessctl", "set", "10%-", NULL };
static const char *up_vol[]			= { "pactl", "set-sink-volume", "@DEFAULT_SINK@", "+10%", NULL };
static const char *down_vol[]		= { "pactl", "set-sink-volume", "@DEFAULT_SINK@", "-10%", NULL };
static const char *mute_vol[]		= { "pactl", "set-sink-mute",   "@DEFAULT_SINK@", "toggle", NULL };
