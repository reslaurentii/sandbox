#ifndef PRINT_H_
#define PRINT_H_

#include <stdio.h>

typedef enum {FALSE, TRUE} BOOLEAN;

#define lowbyte(w) ((w) & 0377)
#define highbyte(w) lowbyte((w) >> 24)
#define lowword(w) ((w) & 0177777)
#define highword(w) lowword((w) >> 16)

#define PR(format, value) printf(#value "= %" #format "\t", (value))
#define NL putchar('\n')
#define CR putchar('\r')


#define PRINT1(f,x1) PR(f,x1), NL;
#define PRINT2(f,x1,x2) PR(f,x1), PRINT1(f,x2);
#define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3);
#define PRINT4(f,x1,x2,x3,x4) PR(f,x1), PRINT3(f,x2,x3,x4);

#define N_CICLES 10
#define S_SLEEP 1

int print_on_same_line(int argc, char **argv);

#endif
