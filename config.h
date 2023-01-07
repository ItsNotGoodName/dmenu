/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

// Gruvbox colors
static const char col_bg0[]       = "#3c3836";
static const char col_bg1[]       = "#262626";
static const char col_orange[]    = "#fe8019";
static const char col_gray[]      = "#a89984";
static const char col_white[]     = "#000000";

static const char *colors[SchemeLast][2] = {
	/*     				fg        	bg       */
	[SchemeNorm] =	{ 	col_gray,	col_bg1		},
	[SchemeSel] = 	{ 	col_orange, col_bg0 	},
	[SchemeOut] = 	{ 	"#000000",	"#00ffff" 	},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
