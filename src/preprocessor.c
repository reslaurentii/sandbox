#include <stdio.h>

#define FUDGE(k) k+3.14159
#define PR(a) printf("a= %d\t",(int)(a))
#define PRINT(a) PR(a); putchar('\n')
#define PRINT2(a,b) PR(a); PRINT(b)
#define PRINT3(a,b,c) PR(a); PRINT2(b,c)
#define MAX(a,b) (a<b ? b : a)

int preprocessor1(void)
{
printf("----- START %s\n",__FUNCTION__);
	{
		int x=2;
		PRINT(x*FUDGE(2));
	}

	{
		int ce1;
		for(ce1=0; ce1<=100; ce1+=50)
			PRINT2(ce1, 9./5*ce1+32);
	}

	{
		int x=1,y =2;
		PRINT3(MAX(x++,y),x,y);
		PRINT3(MAX(x++,y),x,y);
	}
	printf("----- END %s\n",__FUNCTION__);
}


#define NEG(a)-a
#define weeks(mins) (days(mins)/7)
#define days(mins) (hours(mins)/24)
#define hours(mins) (mins/60)
#define mins(secs) (secs/60)
#define TAB(c,i,oi,t) if(c=='\t') \
		for(t=8-(i-oi-1)%8,oi=i; t; t--) \
			putchar(' ')

#define PRINT(a) PR(a); putchar('\n')


int preprocessor2(void)
{
	printf("----- START %s\n",__FUNCTION__);
	{
		int x=1;
		PRINT( -NEG(x) );
	}

	{
		PRINT(weeks(10080));
		PRINT(days(mins(86400)));
	}

	{
		static char input[]="\twihch\tif?";
		char c;
		int i, oldi, temp;

		for(oldi=-1,i=0; (c=input[i])!='\0'; i++)
			if (c<' ')
				TAB(c,i,oldi,temp);
			else
				putchar(c);
		putchar('\n');
	}
	printf("----- END %s\n",__FUNCTION__);
}
