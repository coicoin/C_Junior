#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) 
{
	float a,b,x,y,t;
	printf("¬ведите значение y: ");
	scanf("%f",&y);
	x=3.4;
	t=fabs(x)/fabs(y+x/3)+y;
	a=x;
	b=y;
	a=b+a/t;
	printf("«начение a=%8.3f\n",a);
	system("PAUSE");
	return 0;
}
