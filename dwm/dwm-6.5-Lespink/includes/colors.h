/* Colors */

static const char fg_color[]		= "Grey";
static const char fg_color_sel[]	= "white";
static const char bg_color[]		= "black";
static const char bg_color_sel[]	= "black";

static const char *colors[][3]	  = {
	 /*				  fg			bg		 		border		*/
	 [SchemeNorm] = { fg_color,		bg_color,		bg_color		},
	 [SchemeSel]  = { fg_color_sel,	bg_color_sel,	bg_color_sel,	},

};
