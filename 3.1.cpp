#include<stdio.h>
#include<math.h>
int main()
{
	double x,y,z,F;
	scanf("%lf",&x);
	scanf("%lf",&y);
	scanf("%lf",&z);
	F=(x+y+z)/(x*x+y*y+1)-fabs(x-z*cos(y));
	printf("%f",F);
	return 0;
}
