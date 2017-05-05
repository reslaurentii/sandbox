#include <stdio.h>

union character {
	char t;
	struct
	{ char low : 4;
	  char hi : 4;};
};

int end()
{
	return 1;
}

int union_test()
{
	printf("----- START %s\n",__FUNCTION__);
	union character p;
	p.t = 16;

	/*Hello or Bye?*/
	if (p.low) printf ("hello\n");
	else printf("bye\n");
	printf("** look at %s:%d **\n",__FILE__, __LINE__);
	printf("----- END %s\n",__FUNCTION__);
	return 0;

}

int pointer_joke1()
{
	char p[] = "%d\n";
	char a = 65;
	printf("----- START %s\n",__FUNCTION__);
	p[1] = 'c';
	printf(p,a);
	printf("\n");
	printf("** look at %s:%d **\n",__FILE__, __LINE__);
	printf("----- END %s\n",__FUNCTION__);

	return 0;
}


int pointer_joke2()
{
	printf("----- START %s\n",__FUNCTION__);
	printf( 5 + "good good");
	printf( "\n");
	printf("** look at %s:%d **\n",__FILE__, __LINE__);
	printf("----- END %s\n",__FUNCTION__);
	return 0;

}

int string_cmp()
{
	printf("----- START %s\n",__FUNCTION__);
	char str[] = "ciao", str1[] = "ciao";
	printf((str == str1) ? "Day" : "Night");
	printf("\n");
	printf("** look at %s:%d **\n",__FILE__, __LINE__);
	printf("----- END %s\n",__FUNCTION__);
	return 0;
}

typedef int (*intFunc)(void);
static intFunc f[] = {
	union_test,pointer_joke1,pointer_joke2,string_cmp, end
};

int printf_jokes()
{
	intFunc *p = f;
	while (!(*p++)()) {}
	return 0;
}
