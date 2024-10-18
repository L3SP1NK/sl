/* Rules */
static const Rule rules[] = {

/* xprop(1):
* WM_CLASS(STRING) = instance, class
* WM_NAME(STRING) = title
*/

	/* class		instance	title	   tags mask	 isfloating   monitor */
	{ "Onboard",	NULL,	   NULL,	   0,			1,		   -1 },
	{ "Xmessage",	NULL,	   NULL,	   0,			1,		   -1 },
	{ "Xload",		NULL,	   NULL,	   0,			1,		   -1 },
	{ "xclock",		NULL,	   "xclock",   -1, 			1,		   -1 },
	{ "Xfce4-notes",	NULL,	   NULL,	-1,  		1,		   -1 },
	{ "Xzoom",		NULL,	   "xzoom x4", 0,			1,		   -1 },
	{ "Telegram",	NULL,	   "Telegram", 0,			1,		   -1 },
	{ "Zenity",		NULL,	   NULL,	   0,			1,		   -1 },

};

