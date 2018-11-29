#include <stdio.h>
#include <conio.h>
int main(void)
{
	int m;
	printf("Mark = "); scanf("%d", &m);
	switch(m)
	{
		case(5):
		case(4):
		case(3): printf(":-)"); break;
		case(2): printf(":-("); break;
		default: printf("ERROR");
	}
	getch();
}
