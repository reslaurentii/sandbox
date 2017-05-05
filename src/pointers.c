#include "print.h"

static int a[]={0,1,2,3,4};
static int *p[]={a,a+1,a+2,a+3,a+4};
static int **pp=p;

int pointer1(void)
{
	printf("----- START %s\n",__FUNCTION__);
	int i,*p;
	for(i=0; i<=4; i++)
		PR(d,a[i]);
	NL;
	printf("** look at %s:%d **\n",__FILE__, __LINE__);

	for(p=&a[0]; p<=&a[4]; p++)
		PR(d,*p);
	NL; NL;
	printf("** look at %s:%d **\n",__FILE__, __LINE__);

	for(p=&a[0],i=1; i<=5; i++)
		PR(d,p[i]);
	NL;
	printf("** look at %s:%d **\n",__FILE__, __LINE__);

	for(p=a,i=0; p+i<=a+4; p++,i++)
		PR(d,*(p+i));
	NL; NL;
	printf("** look at %s:%d **\n",__FILE__, __LINE__);

	for(p=a+4; p>=a; p--)
		PR(d,*p);
	NL;
	printf("** look at %s:%d **\n",__FILE__, __LINE__);
	for(p=a+4,i=0; i<=4; i++)
		PR(d,p[-i]);
	NL;
	printf("** look at %s:%d **\n",__FILE__, __LINE__);

	for(p=a+4; p>=a; p--)
		PR(d,a[p-a]);
	NL;
	printf("** look at %s:%d **\n",__FILE__, __LINE__);
	printf("----- END %s\n",__FUNCTION__);
	return 0;
}
//Simple array and pointer

int pointer2(void)
{
	printf("----- START %s\n",__FUNCTION__);
	PRINT2(d,a,*a);
	PRINT3(d,p,*p,**p);
	PRINT3(d,pp,*pp,**pp);
	NL;

	pp++;  PRINT3(d,pp-p,*pp-a,**pp);
	*pp++; PRINT3(d,pp-p,*pp-a,**pp);
	*++pp; PRINT3(d,pp-p,*pp-a,**pp);
	++*pp; PRINT3(d,pp-p,*pp-a,**pp);
	NL;

	pp=p;
	**pp++; PRINT3(d,pp-p,*pp-a,**pp);
	*++*pp; PRINT3(d,pp-p,*pp-a,**pp);
	++**pp; PRINT3(d,pp-p,*pp-a,**pp);
	printf("----- END %s\n",__FUNCTION__);
	return 0;
}
//Array of pointers


static int b[3][3] ={
	{1,2,3},
	{4,5,6},
	{7,8,9}
};

static int *pb[3] ={ b[0],b[1],b[2]};

static int *l=b[1];

int pointer3(void)
{
	printf("----- START %s\n",__FUNCTION__);
	int i;
	for(i=0; i<3; i++)
		PRINT3(d,b[i][2-i],*b[i],*(*(b+i)+i));
	NL;

	for(i=0; i<3; i++)
		PRINT2(d,*pb[i],l[i]);
	printf("----- END %s\n",__FUNCTION__);
	return 0;
}

static char *c[] = {
	"ENTER", "NEW","POINT","FIRST"
};
char **cp[]={c+3,c+2,c+1,c};
char ***cpp=cp;

int pointer4(void)
{
	printf("----- START %s\n",__FUNCTION__);
	printf("%s",**++cpp);
	printf("%s",*--*++cpp+3);
	printf("%s",*cpp[-2]+3);
	printf("%s\n",cpp[-1][-1]+1);
	printf("----- END %s\n",__FUNCTION__);
	return 0;
}
