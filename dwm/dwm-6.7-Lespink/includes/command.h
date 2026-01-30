/* legacy functions */
static char dmenumon[2]	= "0";
static char *dmenucmd[]	= { "rofi", "-show", "drun", NULL };
//static char *termcmd[]	= { "x-terminal-emulator", NULL };

/* Special Functions */
static const char *launcher_menu[]		= { "rofi", "-show", "drun", NULL };
static const char *calculator[]  		= { "mate-calc", NULL };
//static const char *calendar[]			= { "xterm" "-e" "calcurse", NULL } ;

//static const char *default_mail[]		= { "exo-open" "--launch" "MailReader" "%u", NULL };
static const char *default_mail[]		= { "thunderbird", NULL };

//static const char *default_filemgr[]	= { "exo-open" "--launch" "FileManager" "%u", NULL };
static const char *default_filemgr[]	= { "thunar", NULL };

static const char *default_terminal[]	= { "x-terminal-emulator", NULL };
//static const char *default_terminal[]	= { "exo-open" "--launch" "TerminalEmulator" "%u", NULL };

static const char *default_browser[]	= { "x-www-browser", NULL };
//static const char *default_browser[]	= { "exo-open" "--launch" "WebBrowser" "%u", NULL };

static const char *desktop_appmenu[]	= { "xrootmenu", NULL };

static const char *ocr[]	= { "ocr", NULL };
static const char *talk[]	= { "talk", NULL };
static const char *sotw[]	= { "sotw", NULL };
static const char *list_window[]	= { "rofi" "-show" "window", NULL };
static const char *clipv[]		= { "xfce4-popup-clipman", NULL };
static const char *select_kill[]		= { "xkill", NULL };
static const char *prompt_translate[]	= { "prompt_translate", NULL };
static const char *toggle_compositor[]	= { "compokill", NULL };
static const char *emoji_select[]		= { "emoji_select", NULL };
static const char *toggle_fullscreen[]	= { "fullscreen", NULL };
static const char *change_background[]	= { "randombg", NULL };
static const char *screenshot[]	= { "compokill;" "xfce4-screenshooter" "-r" "-c", NULL };

/* Brightness Control */
static const char *brightness_up[]		= { "brightnessctl", "set", "10%+", NULL };
static const char *brightness_down[]	= { "brightnessctl", "set", "10%-", NULL };


/* Volume Control */
static const char *volume_up[]			= { "pactl", "set-sink-volume", "@DEFAULT_SINK@", "+5%", NULL };
static const char *volume_down[]		= { "pactl", "set-sink-volume", "@DEFAULT_SINK@", "-5%", NULL };
static const char *volume_mute[]		= { "pactl", "set-sink-mute",   "@DEFAULT_SINK@", "toggle", NULL };

//TODO NOTIFIER
//static const char *notif[] = { "", NULL };

