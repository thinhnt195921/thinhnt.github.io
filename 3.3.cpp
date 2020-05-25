#include <stdio.h>
#include <conio.h>
#include <math.h>
 main()
 {float X,Y,F;
scanf("%f",&X);
scanf("%f",&Y);
  if(X==Y) F=7*pow(X,6);
  else F=(pow(X,7)-pow(Y,7))/(X-Y);
  printf("%f",F);
  getch();
 }
