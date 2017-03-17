#include "print.h"

int struct1(void)
{
	static struct s1 {
		char c[4], *s;
	} s1 = {"abc","def"};

	static struct s2 {
		char *cp;
		struct s1 ss1;
	} s2 = {"ghi", {"jkl","mno"}};

	PRINT2(c,s1.c[0],*s1.s);
	PRINT2(s,s1.c,s1.s);

	PRINT2(s,s2.cp,s2.ss1.s);
	PRINT2(s,++s2.cp,++s2.ss1.s);
}


struct s1 {
	char *s;
	int i;
	struct s1 *s1p;
};

int struct2(void)
{
	static struct s1 a[] = {
		{ "abcd", 1, a+1},
		{ "efgh", 2, a+2},
		{ "ijkl", 3, a}
	};

	struct s1 *p = a;
	int i;

	PRINT3(s,a[0].s,p->s,a[2].s1p->s);

	for(i=0; i<2; i++) {
		PR(d,--a[i].i);
		PR(c,++a[i].s[3]);
		NL;
	}

	PRINT3(s,++(p->s),a[(++p)->i].s,a[--(p->s1p->i)].s);
}

/*
int struct3(void)
{
	static struct s1 a[] = {
		{"abcd", a+1},
		{"efgh",a+2},
		{"ijkl",a}
	};

	struct s1 *p[3];
	int i;

	for (i=0; i<3; i++ )
		p[i] = a[i].s1p;
	PRINT3(s,p[0]->s,(*p)->s,(**p).s);

	swap(*p,a);
	PRINT3(s,p[0]->s,(*p)->s,(*p)->s1p->s);

	swap(p[0],p[0]->s1p);
	PRINT3(s,p[0]->s,(*++p[0]).s,++(*++(*p)->s1p).s);

} */

swap(p1,p2)
struct s1 *p1,*p2;
{ char *temp;
  temp = p1->s;
  p1->s = p2->s;
  p2->s =temp;}

//Array of Pointer to Structures
