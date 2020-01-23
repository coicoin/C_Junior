#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) 
{
	float a,b,x,y,t;
	printf("¬ведите значение x: ");
	scanf("%f",&x);
	y=11.2;
	t=2+(fabs(x-2*x/(1+pow(x,2)*pow(y,2))));
	a=1+pow(sin(1),2)*(x+y-M_PI_2);
	b=x;
	a=a/t+b;
	printf("«начение a=%8.3f\n",a);
	system("PAUSE");
	return 0;
}
