#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    void change(int *k, int* m)
        {
        int tmp = *k;
        *k = *m;
        *m = tmp;
        }
int main(void)
{
    void srand(); // функция рандомизации ядра датчика случайных чисел
    int *x, n, i, j, flag;
    printf("Введите размер массива: ");
    scanf("%d",&n);
    //выделение памяти
    x = rand()%300;
    printf("%6.1d\n", x);
    for(i=0; i<n-1; i++) flag=0; //обменов нет
    for(j=0; j<n-i-1; j++) 
    {
        if (x[j]>x[j+1]) 
        {
        change (&x[j],&x[j+1]);
        flag=1;//обмен есть
        }
    }
    //если обменов не было
    if (flag == 0) 
    {
        printf("Выполнение цикла закончено");
        exit(i);
    }
    printf("\n массив из %d элементов отсортирован %2.1d\n",n,x[i]);
    system("pause");
    return 0;
}
