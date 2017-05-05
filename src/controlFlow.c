#include "print.h"
#define ENUF 3
#define EOS '\0'
#define NEXT(i) input1[i++]
#define TRUE 1
#define FALSE 0

int flow1(void)
{
	printf("----- START %s\n",__FUNCTION__);
	int x, y=1, z;

	if(y!=0) x=5;
	PRINT1(d,x);
	printf("** look at %s:%d **\n",__FILE__, __LINE__);

	if(y==0) x=3;
	PRINT1(d,x);
	printf("** look at %s:%d **\n",__FILE__, __LINE__);
	x=1;
	if(y<0) if(y>0) x=3;
		else x=5;
	PRINT1(d,x);
	printf("** look at %s:%d **\n",__FILE__, __LINE__);
	if(z=y<0) x=3;
	else if(y==0) x=5;
	else x=7;
	PRINT2(d,x,z);
	printf("** look at %s:%d **\n",__FILE__, __LINE__);
	if(z=(y==0)) x=5; x=3;
	PRINT2(d,x,z);
	printf("** look at %s:%d **\n",__FILE__, __LINE__);
	if(x=z=y) ; x=3;
	PRINT2(d,x,z);
	printf("** look at %s:%d **\n",__FILE__, __LINE__);
	printf("----- END %s\n",__FUNCTION__);
	return 0;
}

int flow2(void)
{
	printf("----- START %s\n",__FUNCTION__);
	int x,y,z;
	x=y=0;
	while(y<10) ++y; x += y;
	PRINT2(d,x,y);
	printf("** look at %s:%d **\n",__FILE__, __LINE__);

	x=y=0;
	while(y<10) x += ++y;
	PRINT2(d,x,y);
	printf("** look at %s:%d **\n",__FILE__, __LINE__);

	y=1;
	while (y<10) {
		x = y++;
		z = ++y;
	}
	PRINT3(d,x,y,z);
	printf("** look at %s:%d **\n",__FILE__, __LINE__);

	for(y=1; y<10; y++) x=y;
	PRINT2(d,x,y);
	printf("** look at %s:%d **\n",__FILE__, __LINE__);

	for(y=1; (x=y)<10; y++) ;
	PRINT2(d,x,y);
	printf("** look at %s:%d **\n",__FILE__, __LINE__);

	for(x=0,y=1000; y>1; x++,y/=10)
		PRINT2(d,x,y);
	printf("** look at %s:%d **\n",__FILE__, __LINE__);
	printf("----- END %s\n",__FUNCTION__);
	return 0;
}

char input1[]="PI=3.14159, approximately";

int flow3(void)
{
	printf("----- START %s\n",__FUNCTION__);
	char c;
	int done, high, i, in, low;

	i=low=in=high=0;
	while(c=NEXT(i) !=EOS)
		if(c<'0') low++;
		else if(c>'9') high++;
		else in++;
	PRINT3(d,low,in,high);

	i=low=in=high=0; done=FALSE;
	while((c=NEXT(i))!=EOS && !done)
		if(c<'0') low++;
		else if(c>'9') high++;
		else in++;
	if(low>=ENUF || high>=ENUF || in>=ENUF)
		done = TRUE;
	PRINT3(d,low,in,high);
	printf("----- END %s\n",__FUNCTION__);
	return 0;

}

char input2[] = "SSSWILTECH1\1\11w\1WALLMP1";

int flow4(void)
{
	printf("----- START %s\n",__FUNCTION__);
	int i, c;
	for(i=2; (c=input2[i])!='\0'; i++) {
		switch(c) {
		case 'a': putchar('i'); continue;
		case '1': break;
		case 1: while((c = input2[++i])!='\1' && c!='\0') ;
		case 9: putchar('S');
		case 'E': case 'L': continue;
		default: putchar(c); continue;
		}
		putchar(' ');
	}
	putchar('\n');
	printf("----- END %s\n",__FUNCTION__);
	return 0;
}
