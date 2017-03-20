#include<stdio.h>
#include "print.h"

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
		if (i != n_cicles) CR;
	}
	printf("\n");
	return 0;
}
