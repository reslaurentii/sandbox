#include <stdio.h>
#include "colors.h"

int print_colors()
{
	printf(ANSI_COLOR_BG_WHITE ANSI_COLOR_FG_BLACK   "This text is BLACK!"   ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_FG_RED     "This text is RED!"     ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_FG_GREEN   "This text is GREEN!"   ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_FG_YELLOW  "This text is YELLOW!"  ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_FG_BLUE    "This text is BLUE!"    ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_FG_MAGENTA "This text is MAGENTA!" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_FG_CYAN    "This text is CYAN!"    ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_FG_WHITE   "This text is WHITE!"   ANSI_COLOR_RESET "\n");
	return 0;
}
