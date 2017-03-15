#include<stdio.h>
#include "colors.h"

/* FOREGROUND COLORS */
#define ANSI_COLOR_FG_BLACK   "\x1b[30m"
#define ANSI_COLOR_FG_RED     "\x1b[31m"
#define ANSI_COLOR_FG_GREEN   "\x1b[32m"
#define ANSI_COLOR_FG_YELLOW  "\x1b[33m"
#define ANSI_COLOR_FG_BLUE    "\x1b[34m"
#define ANSI_COLOR_FG_MAGENTA "\x1b[35m"
#define ANSI_COLOR_FG_CYAN    "\x1b[36m"
#define ANSI_COLOR_FG_WHITE   "\x1b[37m"

/* BACKGROUND COLORS */
#define ANSI_COLOR_BG_BLACK   "\x1b[40m"
#define ANSI_COLOR_BG_RED     "\x1b[41m"
#define ANSI_COLOR_BG_GREEN   "\x1b[42m"
#define ANSI_COLOR_BG_YELLOW  "\x1b[43m"
#define ANSI_COLOR_BG_BLUE    "\x1b[44m"
#define ANSI_COLOR_BG_MAGENTA "\x1b[45m"
#define ANSI_COLOR_BG_CYAN    "\x1b[46m"
#define ANSI_COLOR_BG_WHITE   "\x1b[47m"

#define ANSI_COLOR_RESET   "\x1b[0m"

int print_colors()
{
	printf(ANSI_COLOR_BG_WHITE  ANSI_COLOR_FG_BLACK   "This text is BLACK!"   ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_FG_RED     "This text is RED!"     ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_FG_GREEN   "This text is GREEN!"   ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_FG_YELLOW  "This text is YELLOW!"  ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_FG_BLUE    "This text is BLUE!"    ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_FG_MAGENTA "This text is MAGENTA!" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_FG_CYAN    "This text is CYAN!"    ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_FG_WHITE   "This text is WHITE!"   ANSI_COLOR_RESET "\n");
	return 0;
}
