/* See LICENSE file for copyright and license details. */

/* Appearance */
static const unsigned int borderpx	= 1;	/* border pixel of windows */
static const Gap default_gap		= {.isgap = 1, .realgap = 20, .gappx = 20};
static const unsigned int snap		= 1;	/* snap pixel */

static const unsigned int systraypinning	= 0;	/* 0: sloppy systray follows selected monitor, >0: pin systray to monitor X */
static const unsigned int systrayonleft		= 1;	/* 0: systray in the right corner, >0: systray on left of status text */
static const unsigned int systrayspacing	= 0;	/* systray spacing */
static const int systraypinningfailfirst	= 1;	/* 1: if pinning fails, display systray on the first monitor, False: display systray on the last monitor*/
static const int showsystray				= 1;	/* 0 means no systray */

static const int showbar	= 1;	/* 0 means no bar */
static const int topbar		= 1;	/* 0 means bottom bar */

static const char *fonts[]		= { "arimo nerd font:size=14" };
static const char dmenufont[]	= "arimo nerd font:size=14";

#include "./includes/colors.h"
#include "./includes/layout.h"
#include "./includes/rule.h"
#include "./includes/tag.h"
#include <X11/XF86keysym.h>
#include "./includes/shift-tools.c"
#include "./includes/spawn.h"
#include "./includes/command.h"
#include "./includes/key.h"
#include "./includes/button.h"
