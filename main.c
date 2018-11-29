#include <stdio.h>
#include <conio.h>
int main(void)
{
	int m;
	printf("Mark = "); scanf("%d", &m);
	if ((m>=2)&&(m<=5))
	{
		if (m!=2) 	printf(":-) \n");
		else		printf(":-( \n");
	}
	else
	{
		printf("ERROR");
		printf("\a");
	}
	getch();
}
