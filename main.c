#include <stdio.h>
#include <math.h>
int main(void) {
int x,y;
float a;
printf ("a=(x*y+2x-pow(y,x))/(sin(x)+x*y-2x+y)");

printf ("\n\nedit x-");
scanf ("%d",&x);

printf ("\n\nedit y-");
scanf ("%d",&y);

a=(x*y+(2*x)-pow(y,x))/(sin(x)+x*y-(2*x)+y);

printf ("a=%f",a);
return 0;
}