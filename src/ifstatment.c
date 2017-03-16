#include "print.h"
#include "ifstatment.h"

void ifstatment()
{
	int x,y=1,z;

	if(y!=0) x=5;
	PRINT1(d,x);

	if(y==0) x=3;
	else x=5;
	PRINT1(d,x);

	x=1;
	if(y<0) if(y>0) x=3;
	PRINT1(d,x);

	if(z=y<0) x=3;
	else if(y==0) x=5;
	else x=7;
	PRINT2(d,x,z);

	if(z=(y==0)) x=5; x=3;
	PRINT2(d,x,z);

	if(x=z=y) x=3;
	PRINT2(d,x,z);
}
