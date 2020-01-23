#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) 
{
	float a,b,x,y,t;
	printf("¬ведите значение y: ");
	scanf("%f",&y);
	x=3;
	t=1+1/(x+4);
	a=x+y/(x+4);
	b=(1+y);
	a=b*a/t;
	printf("«начение a=%8.3f\n",a);
	system("PAUSE");
	return 0;
}
