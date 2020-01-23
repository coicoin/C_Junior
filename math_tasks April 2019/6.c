#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) 
{
	float a,x,z,y,t;
	printf("¬ведите значение y: ");
	scanf("%f",&y);
	x=3.4;
	z=33;
	t=x+y-log(z);
	a=x*y*z-3.3*fabs(x+4*sqrt(y));
	a=a/t;
	printf("«начение a=%8.3f\n",a);
	system("PAUSE");
	return 0;
}
