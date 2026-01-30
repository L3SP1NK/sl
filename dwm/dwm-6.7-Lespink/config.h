/* See LICENSE file for copyright and license details. */

static const int refreshrate = 60;

/* Appearance */
static const int showbar			= 1;	/* 0 means no bar */
static const int topbar				= 2;	/* 0 means bottom bar */
static const unsigned int borderpx	= 0;	/* border pixel of windows */
static const unsigned int snap		= 1;	/* snap pixel */
static const Gap default_gap		= {.isgap = 1, .realgap = 24, .gappx = 24};

static const unsigned int systraypinning	= 0;	/* 0: sloppy systray follows selected monitor, >0: pin systray to monitor X */
static const unsigned int systrayonleft		= 1;	/* 0: systray in the right corner, >0: systray on left of status text */
static const unsigned int systrayspacing	= 0;	/* systray spacing */
static const int systraypinningfailfirst	= 0;	/* 1: if pinning fails, systray on the first monitor, False: systray on the last monitor*/
static const int showsystray				= 1;	/* 0 means no systray */


static const char dmenufont[]	= "fixed";

static const char *fonts[] = { "Google Sans 17pt:size=13:style:Medium:antialias=true:autohint=true" };


#include <X11/XF86keysym.h>
#include "./includes/colors.h"
#include "./includes/layout.h"
#include "./includes/rule.h"
#include "./includes/tag.h"
#include "./includes/shift-tools.c"
#include "./includes/spawn.h"
#include "./includes/command.h"
#include "./includes/key.h"
#include "./includes/button.h"
