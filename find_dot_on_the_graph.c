#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	system ("chcp 1251");
	printf("Введите значение x и y: ");
	float x, y;
	scanf("%f%f",&x,&y);
	if (y<=2 && y>=-2 && x>=-2 && x<=0 || y<=1 && y>=-1 && x>=0 && x<=1.5)
	printf("Òî÷êà ïðèíàäëåæèò ôèãóðå \n");
	else if (x>=0 && y<=-x+2 && x<=1.5 && y>=x-2)
	printf("Òî÷êà ïðèíàäëåæèò ôèãóðå \n");
	else printf("Òî÷êà íå ïðèíàäëåæèò ôèãóðå \n");

	system("pause");
	return EXIT_SUCCESS;
}
