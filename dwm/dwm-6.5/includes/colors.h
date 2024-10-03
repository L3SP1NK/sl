/* Colors */

static const char fg_color[]		= "Gray";
static const char fg_color_sel[]	= "White";

static const char bg_color[]		= "Black";
static const char bg_color_sel[]	= "Black";

static const char br_color[]		= "#0d0d0d";
static const char br_color_sel[]	= "Gray";

static const char *colors[][3]	  = {
	 /*				  fg			bg		 		border		*/
	 [SchemeNorm] = { fg_color,		bg_color,		br_color		},
	 [SchemeSel]  = { fg_color_sel,	bg_color_sel,	br_color_sel,	},

};
