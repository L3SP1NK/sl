/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",	 /* after initialization */
	[INPUT] =  "slateblue",   /* during input */
	[FAILED] = "darkred",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
