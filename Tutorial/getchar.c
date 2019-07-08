#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void) 
{
	unsigned char ch;
	for (ch='+'; ch!=27; ch=getchar())
	{
		printf("%c %d\n",ch, (int) ch);
    }
    system("pause");
    return 0;
}
