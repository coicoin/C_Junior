#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) 
{
	float b,x,y,t;
	printf("������� �������� y: ");
	scanf("%f",&y);
	x=7;
	t=1+fabs(y-1);
	b=(y-x)/2+fabs(y-x)/3;
	b=t+b;
	printf("�������� b=%8.3f\n",b);
	system("PAUSE");
	return 0;
}
