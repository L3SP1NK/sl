/* key definitions */
#define MODKEY Mod4Mask

#define TAGKEYS(KEY,TAG) \
 { MODKEY,                         KEY,      view,           {.ui = 1 << TAG} }, \
 { MODKEY|ControlMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
 { MODKEY|ControlMask|ShiftMask,   KEY,      toggletag,      {.ui = 1 << TAG} },

static Key keys[] = {
    /* modifier                     key        function        argument */

    { ControlMask|Mod1Mask,         XK_q,      spawn,           {.v = killcmd } },
    { ControlMask,                  XK_Escape, spawn,           {.v = dmenucmd } },
    { ControlMask|Mod1Mask,         XK_t,      spawn,           {.v = termcmd } },
    { MODKEY|ShiftMask,             XK_b,      togglebar,       {0} },
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
    { MODKEY|ShiftMask,                       XK_t,      setlayout,       {.v = &layouts[0]} },
    { MODKEY|ShiftMask,                       XK_f,      setlayout,       {.v = &layouts[1]} },
    { MODKEY|ShiftMask,                       XK_m,      setlayout,       {.v = &layouts[2]} },
    { MODKEY|ShiftMask,                       XK_s,      setlayout,       {.v = &layouts[3]} },
    { MODKEY|ShiftMask,                       XK_d,      setlayout,       {.v = &layouts[4]} },
    { MODKEY,                                 XK_Down,   setlayout,       {0} },
    { MODKEY,                                 XK_Up,     togglefloating,  {0} },
    { MODKEY,                                 XK_Prior,  incnmaster,      {.i = -1 } },
    { MODKEY,                                 XK_Next,   incnmaster,      {.i = +1 } },

    /* tags */
    { MODKEY,                       XK_agrave,  view,           {.ui = ~0 } },
    { MODKEY|ShiftMask,             XK_agrave,  tag,            {.ui = ~0 } },
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
    { MODKEY|ShiftMask,             XK_Escape,      quit,           {0} },
};
