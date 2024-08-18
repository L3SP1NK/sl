/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click				event mask	button			function		argument */
	{ ClkRootWin,			0,			Button3,		spawn,			{.v = desktop_appmenu } },
	{ ClkClientWin,			Mod1Mask,	Button1,		movemouse,		{0} },
	{ ClkClientWin,			Mod1Mask,	Button3,		resizemouse,	{0} },
	{ ClkWinTitle,			0,			Button1,		movemouse,		{0} },
	{ ClkWinTitle,			0,			Button2,		killclient,		{0} },
	{ ClkWinTitle,			0,			Button3,		resizemouse,	{0} },
	{ ClkWinTitle,			0,			Button5,		focusstack,		{.i = -1 } },
	{ ClkWinTitle,			0,			Button4,		focusstack,		{.i = +1 } },
	{ ClkLtSymbol,			0,			Button1,		setlayout,		{0} },
	{ ClkLtSymbol,			0,			Button3,		togglefloating,	{0} },
	{ ClkTagBar,			0,			Button1,		view,			{0} },
	{ ClkTagBar,			0,			Button3,		toggleview,		{0} },
	{ ClkTagBar,			MODKEY,		Button1,		tag,			{0} },
	{ ClkTagBar,			MODKEY,		Button3,		toggletag,		{0} },
	{ ClkTagBar,			0,			Button4,		shiftview,		{.i = +1 } },
	{ ClkTagBar,			0,			Button5,		shiftview,		{.i = -1 } },
};

