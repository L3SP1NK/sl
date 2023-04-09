/* theme */
static const char col_gray1[]       = "midnightblue";   /* background */
static const char col_gray2[]       = "slate4";         /* border (unfocused )*/
static const char col_gray5[]       = "slate1";         /* border (focused) */
static const char col_gray3[]       = "lavender";       /* foreground */
static const char col_gray4[]       = "lavender";       /* foreground (selected) */
static const char col_cyan[]        = "lightslate1";    /* accent color */
static const char *colors[][3]      = {
 /*               fg         bg         border   */
 [SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
 [SchemeSel]  = { col_gray4, col_cyan,  col_gray5,  },
};



