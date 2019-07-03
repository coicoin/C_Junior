#include <stdio.h>
#include <conio.h>

int main(void)
{
	float x,y; char op;
	printf("Expr = "); scanf("%f%c%f",&x,&op,&y);
	switch(op)
	{
		case('+'): printf("res = %f",x+y); break;
		case('-'): printf("res = %f",x-y); break;
		case('*'): printf("res = %f",x*y); break;
		case('/'): printf("res = %f",x/y); break;
		default: printf("ERROR");
	}
  
	getch();
}
