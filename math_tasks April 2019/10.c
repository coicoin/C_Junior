#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) 
{
	float x,b,t,y;
	printf("������� �������� y: ");
	scanf("%f",&y);
	x=7;
	b=1+(y-1)/4;
	t=fabs(y-x)+fabs(y-x)/3;
	b=b+t;
	printf("�������� b=%8.3f\n",b);
	system("PAUSE");
	return 0;
}
