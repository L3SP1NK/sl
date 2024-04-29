/* Layout */
static const float mfact		= 0.50; /* factor of master area size [0.05..0.95] */
static const int nmaster		= 1;	/* number of clients in master area */
static const int resizehints	= 1;	/* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 0;	/* 1 will force focus on the fullscreen window */

#include "../fibonacci.c"

// Nerd Font Icons.
//static const Layout layouts[] = {
//	{ "  ",	tile	},	/* first entry is default */
//	{ "  ",	NULL	},	/* no layout function means floating behavior */
//	{ "  ",	monocle	},
//	{ "  ",	spiral	},
//	{ "  ",	dwindle	},
//};


// Emoji Icons.
static const Layout layouts[] = {
	{ "[æ]",	tile	},	/* first entry is default */
	{ "[ø]",	NULL	},	/* no layout function means floating behavior */
	{ "[¤]",	monocle	},
	{ "[þ]",	spiral	},
	{ "[¶]",	dwindle	},
};
