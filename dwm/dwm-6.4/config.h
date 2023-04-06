/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx  = 2;    /* border pixel of windows */
static const Gap default_gap        = {.isgap = 1, .realgap = 15, .gappx = 15};
static const unsigned int snap      = 0;    /* snap pixel */

static const unsigned int systraypinning    = 0;    /* 0: sloppy systray follows selected monitor, >0: pin systray to monitor X */
static const unsigned int systrayonleft     = 1;    /* 0: systray in the right corner, >0: systray on left of status text */
static const unsigned int systrayspacing    = 0;    /* systray spacing */
static const int systraypinningfailfirst    = 1;    /* 1: if pinning fails, display systray on the first monitor, False: display systray on the last monitor*/
static const int showsystray                = 1;    /* 0 means no systray */

static const int showbar    = 1;    /* 0 means no bar */
static const int topbar     = 1;    /* 0 means bottom bar */

static const char *fonts[]                  = { "roboto:size=14" };
static const char dmenufont[]               = "roboto:size=14";

static const char col_gray1[]       = "black";      /* background */
static const char col_gray2[]       = "#0d0d0d";    /* border (unfocused )*/
static const char col_gray5[]       = "grey";      /* border (focused) */
static const char col_gray3[]       = "white";      /* foreground */
static const char col_gray4[]       = "white";      /* foreground (selected) */
static const char col_cyan[]        = "#1f1f1f";    /* accent color */
static const char *colors[][3]      = {
 /*               fg         bg         border   */
 [SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
 [SchemeSel]  = { col_gray4, col_cyan,  col_gray5,  },
};



/* tagging */
static const char *tags[] = { "1", "2", "3", "4", "5", "6", };

static const Rule rules[] = {
 /* xprop(1):
  * WM_CLASS(STRING) = instance, class
  * WM_NAME(STRING) = title
  */
 /* class      instance    title       tags mask     isfloating   monitor */
 { "Onboard",  NULL,       NULL,       0,            1,           -1 },
};

/* layout(s) */
static const float mfact        = 0.50; /* factor of master area size [0.05..0.95] */
static const int nmaster        = 1;    /* number of clients in master area */
static const int resizehints    = 1;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 0;    /* 1 will force focus on the fullscreen window */

static const Layout layouts[] = {
 /* symbol     arrange function */
 { "==",  tile },    /* first entry is default */
 { "<>",  NULL },    /* no layout function means floating behavior */
 { "[0]",  monocle },
};

#include <X11/XF86keysym.h>
#include "./includes/shift-tools.c"

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* key definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
 { MODKEY,                         KEY,      view,           {.ui = 1 << TAG} }, \
 { MODKEY|ShiftMask,               KEY,      toggletag,      {.ui = 1 << TAG} }, \
 { MODKEY|ControlMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
 { MODKEY|ControlMask|ShiftMask,   KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static const char *dmenucmd[] = { "rofi", "-show", "drun", NULL };
static const char *termcmd[]  = { "st", NULL };
static const char *calendarcmd[]  = { "st", "-e", "calendar", NULL };
static const char *killcmd[]  = { "xkill", NULL };
static const char *clockcmd[]  = { "xclock", NULL };
static const char *loadcmd[]  = { "xload", NULL };
static const char *deskmenucmd[]  = { "xrootmenu", NULL };

static const char *brighter[] = { "brightnessctl", "set", "10%+", NULL };
static const char *dimmer[]   = { "brightnessctl", "set", "10%-", NULL };
static const char *up_vol[]   = { "pactl", "set-sink-volume", "@DEFAULT_SINK@", "+10%",   NULL };
static const char *down_vol[] = { "pactl", "set-sink-volume", "@DEFAULT_SINK@", "-10%",   NULL };
static const char *mute_vol[] = { "pactl", "set-sink-mute",   "@DEFAULT_SINK@", "toggle", NULL };

static Key keys[] = {
    /* modifier                     key        function        argument */

    { ControlMask|Mod1Mask,         XK_q,      spawn,           {.v = killcmd } },
    { ControlMask,                  XK_Escape, spawn,           {.v = dmenucmd } },
    { ControlMask|Mod1Mask,         XK_t,      spawn,           {.v = termcmd } },
    { MODKEY,                       XK_b,      togglebar,       {0} },
    { ControlMask,                  XK_q,      killclient,      {0} },

    /* audio */
    { 0,                            XF86XK_AudioMute,           spawn, {.v = mute_vol } },
    { 0,                            XF86XK_AudioLowerVolume,    spawn, {.v = down_vol } },
    { 0,                            XF86XK_AudioRaiseVolume,    spawn, {.v = up_vol } },

    /* brightness */
    { 0,                            XF86XK_MonBrightnessDown,   spawn, {.v = dimmer } },
    { 0,                            XF86XK_MonBrightnessUp,     spawn, {.v = brighter } },

    /* gaps */
    { MODKEY,                       XK_minus,  setgaps,        {.i = -5 } },
    { MODKEY,                       XK_equal,  setgaps,        {.i = +5 } },
    { MODKEY|ShiftMask,             XK_minus,  setgaps,        {.i = GAP_RESET } },
    { MODKEY|ShiftMask,             XK_equal,  setgaps,        {.i = GAP_TOGGLE} },

    /* focus */
    { MODKEY,                       XK_Return, zoom,            {0} },

    { Mod1Mask,                     XK_Tab,    focusstack,      {.i = +1 } },
    { Mod1Mask|ShiftMask,           XK_Tab,    focusstack,      {.i = -1 } },
    { MODKEY,                       XK_End,    focusmon,        {.i = -1 } },
    { MODKEY,                       XK_Home,   focusmon,        {.i = +1 } },

    { MODKEY,                       XK_Left,   setmfact,        {.f = -0.05} },
    { MODKEY,                       XK_Right,  setmfact,        {.f = +0.05} },

    { ControlMask|Mod1Mask,         XK_Left,   shiftview,       {.i = -1 } },
    { ControlMask|Mod1Mask,         XK_Right,  shiftview,       {.i = +1 } },
    { ControlMask|Mod1Mask,         XK_Home,   shiftboth,       {.i = -1 } },
    { ControlMask|Mod1Mask,         XK_End,    shiftboth,       {.i = +1 } },

    /* layout */
    { MODKEY,                       XK_t,      setlayout,       {.v = &layouts[0]} },
    { MODKEY,                       XK_f,      setlayout,       {.v = &layouts[1]} },
    { MODKEY,                       XK_m,      setlayout,       {.v = &layouts[2]} },
    { MODKEY,                       XK_Down,   setlayout,       {0} },
    { MODKEY,                       XK_Up,     togglefloating,  {0} },
    { MODKEY,                       XK_Prior,  incnmaster,      {.i = -1 } },
    { MODKEY,                       XK_Next,   incnmaster,      {.i = +1 } },

    /* tags */
    { MODKEY,                       XK_agrave,  view,           {.ui = ~0 } },
    { MODKEY|ShiftMask,             XK_agrave,  tag,            {.ui = ~0 } },
    { MODKEY|ShiftMask,             XK_End,     tagmon,         {.i = -1 } },
    { MODKEY|ShiftMask,             XK_Home,    tagmon,         {.i = +1 } },
    TAGKEYS(                        XK_ampersand,              0)
    TAGKEYS(                        XK_eacute,                 1)
    TAGKEYS(                        XK_quotedbl,               2)
    TAGKEYS(                        XK_apostrophe,             3)
    TAGKEYS(                        XK_parenleft,              4)
    TAGKEYS(                        XK_minus,                  5)
    TAGKEYS(                        XK_egrave,                 6)
    TAGKEYS(                        XK_underscore,             7)
    TAGKEYS(                        XK_ccedilla,               8)
    { MODKEY|ShiftMask,             XK_q,      quit,           {0} },
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
    /* click                event mask      button          function        argument */
    { ClkRootWin,           0,              Button3,        spawn,          {.v = deskmenucmd } },

    { ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
    { ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },

    { ClkStatusText,        0,              Button1,        spawn,          {.v = loadcmd } },
    { ClkStatusText,        0,              Button2,        spawn,          {.v = calendarcmd } },
    { ClkStatusText,        0,              Button3,        spawn,          {.v = clockcmd } },

    { ClkWinTitle,          0,              Button1,        movemouse,      {0} },
    { ClkWinTitle,          0,              Button2,        killclient,     {0} },
    { ClkWinTitle,          0,              Button3,        resizemouse,    {0} },
    { ClkWinTitle,          0,              Button5,        focusstack,     {.i = -1 } },
    { ClkWinTitle,          0,              Button4,        focusstack,     {.i = +1 } },

    { ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
    { ClkLtSymbol,          0,              Button4,        setlayout,      {0} },
    { ClkLtSymbol,          0,              Button5,        togglefloating, {0} },

    { ClkTagBar,            0,              Button1,        view,           {0} },
    { ClkTagBar,            0,              Button3,        toggleview,     {0} },

    { ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
    { ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },

    { ClkTagBar,            0,              Button4,        shiftview,  {.i = +1 } },
    { ClkTagBar,            0,              Button5,        shiftview,  {.i = -1 } },
};

