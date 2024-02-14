/* Colors */

static const char col_gray1[]		= "black";		/*	background			*/
static const char col_gray2[]		= "#1f1f1f";	/*	border				*/
static const char col_gray5[]		= "#1f1f1f";	/*	border (focus) 		*/
static const char col_gray3[]		= "snow3";	  	/*	foreground			*/
static const char col_gray4[]		= "white";		/*	foreground (focus) 	*/
static const char col_cyan[]		= "cyan";		/*	accent color 		*/
static const char *colors[][3]	  = {

	 /*			   fg		 bg		 border   */
	 [SchemeNorm] = { col_gray3, col_gray1,	col_gray2  },
	 [SchemeSel]  = { col_gray4, col_gray2, col_gray5, },

};
