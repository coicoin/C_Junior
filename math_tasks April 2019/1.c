#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) 
{
	float a,x,y,t;
	printf("������� �������� y: ");
	scanf("%f",&y);
	x=12.1;
	t=1+x/2-y/4;
	a=fabs(x-1)-fabs(y);
	a=a/t;
	printf("�������� a=%8.3f\n",a);
	system("PAUSE");
	return 0;
}
