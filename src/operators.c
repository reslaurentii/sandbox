#include <stdio.h>

int basic_operator(void)
{
	int x;
	x  =  -3 +  4 * 5  - 6;
	printf("%d\n",x);
	x  = 3 + 4    % 5 - 6;
	printf("%d\n",x);
	x  = -3 * 4 % -6 / 5;
	printf("%d\n",x);
	x  = ( 7 +  6 ) % 5 / 2;
	printf("%d\n",x);
	return 0;
}
