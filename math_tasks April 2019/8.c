#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) 
{
	float a,b,c,z,t,m;
	printf("������� �������� b: ");
	scanf("%f",&b);
	a=10;
	c=7.3;
	z=(b+sqrt(pow(b,2)+4*a*c))/2*b;
	t=pow(a,3)*c+pow(b,-2);
	m=z-t;
	printf("�������� m=%8.3f\n",m);
	system("PAUSE");
	return 0;
}
