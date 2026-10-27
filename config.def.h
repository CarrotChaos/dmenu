/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"JetBrains Mono:size=11:style=Bold"};
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char bg_color[] = "#222222";
static const char fg_color[] = "#eeeeee";
static const char sel_color[] = "#b4befe";

static const char *colors[SchemeLast][2] = {
    /*              fg         bg */
    [SchemeNorm] = {fg_color, bg_color},
    [SchemeSel] = {bg_color, sel_color},
    [SchemeOut] = {"#a6adc8", "#313244"},
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* X resources to load at startup */
static const XResPref resources[] = {
    /* name                  type     address */
    {"dmenu.font", STRING, &fonts[0]},
    {"dmenu.prompt", STRING, &prompt},
    {"dmenu.foreground", STRING, &colors[SchemeNorm][ColFg]},
    {"dmenu.background", STRING, &colors[SchemeNorm][ColBg]},
    {"dmenu.foregroundSel", STRING, &colors[SchemeSel][ColFg]},
    {"dmenu.backgroundSel", STRING, &colors[SchemeSel][ColBg]},
    {"dmenu.foregroundOut", STRING, &colors[SchemeOut][ColFg]},
    {"dmenu.backgroundOut", STRING, &colors[SchemeOut][ColBg]},
    {"dmenu.topbar", INTEGER, &topbar},
    {"dmenu.lines", INTEGER, &lines},
};
