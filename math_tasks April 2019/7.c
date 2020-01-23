#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) 
{
	float a,x,z,y,t;
	printf("¬ведите значение y: ");
	scanf("%f",&y);
	x=3.9;
	z=(1+y);
	t=y+1/(pow(x,2)-4);
	a=2*x+sqrt(y)-(x+y);
	a=z*(a/t);
	printf("«начение a=%8.3f\n",a);
	system("PAUSE");
	return 0;
}
