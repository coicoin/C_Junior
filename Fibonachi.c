#include <stdio.h>
#include <stdlib.h>
int func(int n)
{
    if (n==0) return 1;
    if (n==1) return 1;
    return (func(n-1)+func(n-2));
}
int main(void)
{
    system("chcp 1251");
    int n;
    printf("Введите целое n: ");
    scanf("%d",&n);
    int x = func(n);
    printf(" x (%d) = %d\n",n,x);
    system("pause");
    return 0;
}
