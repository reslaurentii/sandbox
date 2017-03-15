#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "colors.h"

#define N_CICLES 10
#define S_SLEEP 1

int print_on_same_line(int argc, char **argv)
{
	int i = 0;
	int n_cicles = N_CICLES;
	int s_sleep = S_SLEEP;
	switch (argc) {
	case 0:
	case 1:
		break;
	case 2:
		n_cicles = atoi(argv[1]);
		break;
	case 3:
		n_cicles = atoi(argv[1]);
		s_sleep = atoi(argv[2]);
		break;
	default:
		return -1;
	}
	for (i =  0; i <= n_cicles; i++) {
		printf("Hello, world! --> %d", i);
		fflush(stdout);
		sleep(s_sleep);
		if (i != n_cicles)
			printf("\r");
	}
	printf("\n");
	return 0;
}

int main(int argc, char **argv){
	print_on_same_line(argc,argv);
	print_colors();
	return 0;
}