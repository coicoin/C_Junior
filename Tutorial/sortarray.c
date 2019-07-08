#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    void srand(); // функция рандомизации ядра датчика случайных чисел
    int *x, n, i;
    printf("Введите размер массива: ");
    scanf("%d",&n);
    x = (int*)malloc(sizeof(int)*n);
    for(i=0; i<n; i++)
    {
    x[i] = rand()%3;
    printf("%d\n", x[i]);
    }
  for(i=1; i<n; i++)
  {
    int buf=x[i];
    int j=i;
    while ((buf<x[j-1])&&(j>0))
    {
        x[j]=x[j-1];
        j=j-1;
    }
    x[j]=buf;

  }    
    printf("\n массив из %d элементов отсортирован %d\n",n,x[i]);
    system("pause");
    return 0;
}
