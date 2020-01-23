#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) 
{
	float a,t,x,y;
	printf("¬ведите значение y: ");
	scanf("%f",&y);
	x=12.1;
	t=1+x/3-y/5;
	a=fabs(x-2)-fabs(y);
	a=a/t;
	printf("«начение a=%8.3f\n",a);
	system("PAUSE");
	return 0;
}
