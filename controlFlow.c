#include "defs.h"

int main(void)
{
    int x, y=1, z,d;

    if(y!=0) x=5;
    PRINT1(d,x);

    if(y==0) x=3;
    PRINT1(d,x);

    x=1;
    if(y<0) if(y>0) x=3;
    else x=5;
    PRINT1(d,x);

    if(z=y<0) x=3;
    else if(y==0) x=5;
    else x=7;
    PRINT2(d,x,z);

    if(z=(y==0)) x=5; x=3;
    PRINT2(d,x,z);

    if(x=z=y); x=3;
    PRINT2(d,x,z);
}

#include "defs.h"

int main(void)
{
    int x,y,z;
    x=y=0;
    while(y<10) ++y; x += y;
    PRINT2(d,x,y);

    x=y=0;
    while(y<10) x += ++y;
        PRINT2(d,x,y);

    y=1;
    while (y<10) {
        x = y++;
        z = ++y;
    }
    PRINT3(d,x,y,z);

    for(y=1; y<10; y++) x=y;
    PRINT2(d,x,y);

    for(y=1; (x=y)<10; y++) ;
    PRINT2(d,x,y);

    for(x=0,y=1000;y>1; x++,y/=10)
        PRINT2(d,x,y);
}

#include "defs.h"

#define ENUF 3
#define EOS '\0'
#define NEXT(i) input[i++]
#define TRUE 1
#define FALSE 0

char input[]="PI=3.14159, approximately";

int main(void)
{
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

    i=low=in=high=0; done=FALSE;
    while((c=NEXT(i))!=EOS && !done)
        if(c<'0') d

}

#include "defs.h"

char input[] = "SSSWILTECH1\1\11w\1WALLMP1";

int main(void)
{
    int i, c;
    for(i=2; (c=input[i])!='\0';i++) {
            switch(c) {
            case 'a' : putchar('i'); continue;
            case '1' : break;
            case 1 : while((c = input[++i])!='\1' && c!='\0') ;
            case 9 : putchar('S');
            case 'E': case 'L': continue;
            default: putchar(c); continue;
            }
            putchar(' ');
        }
        putchar('\n');
}
