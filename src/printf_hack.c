#include<stdio.h>

union carattere {

   char t;
   struct 
   { char low:4;
     char hi: 4;
    };
};




int f1()
{  
    union carattere p;
    p.t = 16;

   if (p.low) printf ("ciao\n");
   else printf("bye\n"); 
   
   return 0;

}

int f2()
{
   char p[] = "%d\n";
   char a = 65;
   
   p[1] = 'c';
   printf(p,a);
 

   printf("\n");

   return 0;
}


int f3()
{
   printf( 5 + "good good");
   printf( "\n");
   return 0;
}

int f4()
{
  char str[] = "ciao", str1[]="ciao"; 
  printf((str == str1)?"Giorno":"Notte");
  printf("\n"); 

  return 0;
}



int main()
{
     printf("Primo esercizio\n");
     f1();
     printf("****************\n");

     printf("Secondo esercizio\n");
     f2();
     printf("****************\n");

     printf("Terzo esercizio\n");
     f3();
     printf("****************\n");

     printf("Quarto esercizio\n");
     f4();
     printf("****************\n");

     return 0;

}
