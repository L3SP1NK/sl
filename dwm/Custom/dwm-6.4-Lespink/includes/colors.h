/* Colors */

static const char col_fg[]		= "Grey";
static const char col_fg_sel[]	= "White";
static const char col_bg[]		= "#0d0d0d";
static const char col_bg_sel[]	= "#1f1f1f";

static const char *colors[][3]	  = {
	 /*				  fg			bg		 	border		*/
	 [SchemeNorm] = { col_fg,		col_bg,		col_bg	},
	 [SchemeSel]  = { col_fg_sel,	col_bg_sel,	col_bg_sel,	},

};
