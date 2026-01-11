/* Colors */

static const char fg_color[]		= "darkgrey";
static const char fg_color_sel[]	= "white";

static const char bg_color[]		= "black";
static const char bg_color_sel[]	= "black";

static const char br_color[]		= "black";
static const char br_color_sel[]	= "white";

static const char *colors[][3]	  = {
	 /*				  fg			bg		 		border		*/
	 [SchemeNorm] = { fg_color,		bg_color,		br_color		},
	 [SchemeSel]  = { fg_color_sel,	bg_color_sel,	br_color_sel,	},

};
