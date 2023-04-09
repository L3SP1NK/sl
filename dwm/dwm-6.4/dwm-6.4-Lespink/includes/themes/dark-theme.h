static const char col_gray1[]       = "black";      /* background */
static const char col_gray2[]       = "#0d0d0d";    /* border (unfocused )*/
static const char col_gray5[]       = "grey";      /* border (focused) */
static const char col_gray3[]       = "white";      /* foreground */
static const char col_gray4[]       = "white";      /* foreground (selected) */
static const char col_cyan[]        = "#1f1f1f";    /* accent color */
static const char *colors[][3]      = {
 /*               fg         bg         border   */
 [SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
 [SchemeSel]  = { col_gray4, col_cyan,  col_gray5,  },
};



