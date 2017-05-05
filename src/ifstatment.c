#include "print.h"
#include "ifstatment.h"

/* Bad indented code */
int ifstatment()
{
	printf("----- START %s\n",__FUNCTION__);
	int x,y=1,z;
	int a;

	if(y!=0) x=5;
	PRINT1(d,x);
	printf("** look at %s:%d **\n",__FILE__, __LINE__);

	if(y==0) x=3;
	else x=5;
	PRINT1(d,x);
	printf("** look at %s:%d **\n",__FILE__, __LINE__);

	x=1;
	if(y<0) if(y>0) x=3;
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

	if(x=z=y) x=3;
	PRINT2(d,x,z);
	printf("** look at %s:%d **\n",__FILE__, __LINE__);

	if(a=a==a) z=5;
	else z=10;
	PRINT2(d,a,z);
	printf("** look at %s:%d **\n",__FILE__, __LINE__);

	if(a=a!=a) z=5;
	else z=10;
	PRINT2(d,a,z);
	printf("** look at %s:%d **\n",__FILE__, __LINE__);

	printf("----- END %s\n",__FUNCTION__);
	return 0;
}
