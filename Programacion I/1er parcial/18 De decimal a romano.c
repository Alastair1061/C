#include <stdio.h>
#include <stdlib.h>
main ()
{
int n, a, b, c, d;
printf("\nBienvenido al programa que convierte tu numero decimal (entre 1 y 1000) a romano\nQue numero quieres convertir?:");
scanf("%d",&n);
printf ("\nTu numero en romano es:\t");
d = n%10;
n = n/10;
c = n%10;
n = n/10;
b = n%10;
a = n/10;
switch (a)
{
case 1: printf ("M");break;
case 2: printf ("MM");break;
case 3: printf ("MMM");break;
}
switch (b)
{
case 1: printf ("C"); break;
case 2: printf ("CC"); break;
case 3: printf ("CCC"); break;
case 4: printf ("CD"); break;
case 5: printf ("D"); break;
case 6: printf ("DC"); break;
case 7: printf ("DCC"); break;
case 8: printf ("DCCC"); break;
case 9: printf ("CM"); break;
}
 
switch (c)
{
case 1: printf ("X"); break;
case 2: printf ("XX"); break;
case 3: printf ("XXX"); break;
case 4: printf ("XL"); break;
case 5: printf ("L"); break;
case 6: printf ("LX"); break;
case 7: printf ("LXX"); break;
case 8: printf ("LXXX"); break;
case 9: printf ("XC"); break;
}
switch (d) 
{
case 1: printf ("I"); break;
case 2: printf ("II"); break;
case 3: printf ("III"); break;
case 4: printf ("IV"); break;
case 5: printf ("V"); break;
case 6: printf ("VI"); break;
case 7: printf ("VII"); break;
case 8: printf ("VIII"); break;
case 9: printf ("IX"); break;
}
system("pause=>NULL");
return 0;
}
