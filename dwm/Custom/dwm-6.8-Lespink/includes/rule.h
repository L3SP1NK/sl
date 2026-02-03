/* Rules */
static const Rule rules[] = {

/* xprop(1):
* WM_CLASS(STRING) = instance, class
* WM_NAME(STRING) = title
*/

	/* class			instance	title   tags mask	isfloating	monitor */
	{ "Onboard",		NULL,		NULL,	0,			1,			-1 },
//	{ "mpv",			NULL,		NULL,	-1, 		1,		   	-1 },
//	{ "Telegram",		NULL,		NULL,	0,			1,		   	-1 },
	{ "Zenity",			NULL,		NULL,	0,			1,		   	-1 },
	{ "Xfce4-notes",	NULL,		NULL,	-1,			1,		   	-1 },
	{ "scrcpy",			NULL,		NULL,	-1,			1,		   	-1 },
	// Firefox PiP
	{ "Toolkit",		NULL,		NULL,	-1,			1,		   	-1 },

};

