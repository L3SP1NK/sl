/* layout(s) */
static const float mfact        = 0.50; /* factor of master area size [0.05..0.95] */
static const int nmaster        = 2;    /* number of clients in master area */
static const int resizehints    = 0;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1;    /* 1 will force focus on the fullscreen window */

#include "../fibonacci.c"

static const Layout layouts[] = {
    { "🦎",	tile	},    /* first entry is default */
    { "✖️",	NULL	},    /* nof layout function means floating behavior */
    { "◻",	monocle	},
    { "♻",	spiral	},
    { "▶",	dwindle	},
};

//static const Layout layouts[] = {
//    { "",	tile	},	/* first entry is default */
//    { "",	NULL	},	/* no layout function means floating behavior */
//    { "",	monocle	},
//    { "",	spiral	},
//    { "",	dwindle	},
//};
