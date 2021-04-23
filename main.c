  
#include <stdio.h>
#include <math.h>
int main(void) {
int x,y;
float a;
printf ("a=(x*y+2x-pow(y,x))/(sin(x)+x*y-2x+y)");

printf ("\n\nedit x-");
scanf ("%d",&x);

printf ("\nedit y-");
scanf ("%d",&y);

if((sin(x)+x*y-(2*x)+y)==0)
printf("can`t /0");

a=(x*y+(2*x)-pow(y,x))/(sin(x)+x*y-(2*x)+y);

printf ("\n\na=%f",a);
return 0;
}