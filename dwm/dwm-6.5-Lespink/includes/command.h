/* legacy functions */
static char dmenumon[2]	= "0";
static char *dmenucmd[]	= { "rofi", "-show", "drun", NULL };
//static char *termcmd[]	= { "x-terminal-emulator", NULL };

/* Commands */
static const char *launcher_menu[]		= { "rofi", "-show", "drun", NULL };
static const char *default_terminal[]	= { "x-terminal-emulator", NULL };
static const char *select_kill[]		= { "xkill", NULL };
static const char *stopx[]				= { "kill" "-9" "$(pidof Xorg)", NULL };

/* Special Functions */
static const char *calendar[]			= { "xterm" "-e" "calcurse", NULL } ;
static const char *calculator[]  		= { "mate-calc", NULL };
static const char *default_mail[]		= { "exo-open" "--launch" "MailReader" "%u", NULL };
static const char *default_browser[]	= { "x-www-browser", NULL };
static const char *desktop_appmenu[]	= { "xrootmenu", NULL };

/* Brightness Control */
static const char *brightness_up[]		= { "brightnessctl", "set", "5%+", NULL };
static const char *brightness_down[]	= { "brightnessctl", "set", "5%-", NULL };


/* Volume Control */
static const char *volume_up[]			= { "pactl", "set-sink-volume", "@DEFAULT_SINK@", "+5%", NULL };
static const char *volume_down[]		= { "pactl", "set-sink-volume", "@DEFAULT_SINK@", "-5%", NULL };
static const char *volume_mute[]		= { "pactl", "set-sink-mute",   "@DEFAULT_SINK@", "toggle", NULL };
