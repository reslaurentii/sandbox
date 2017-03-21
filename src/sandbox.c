#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "colors.h"
#include "print.h"
#include "operators.h"
#include "ifstatment.h"
#include "pointers.h"
#include "preprocessor.h"
#include "structs.h"
#include "controlFlow.h"

static int last_func(void) {
	printf("----- DONE!!! ----- %s\n",__FUNCTION__);
	printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	return 1;
}

typedef int (*intFunc)(void);
static intFunc f[] =  {
	basic_operator,
	ifstatment,
	pointer1,
	pointer2,
	pointer3,
	pointer4,
	preprocessor1,
	preprocessor2,
	flow1,
	flow2,
	flow3,
	flow4,
	struct1,
	struct2,
	struct3,
	last_func
};

int main(int argc, char **argv){

	print_on_same_line(argc,argv);
	print_colors();

	intFunc *p = f;
	while (!(*p++)()) {}

	return 0;
}
