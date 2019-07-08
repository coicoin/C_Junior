#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int change(float *x, int n, float k)
{
    int i=0; 
    for(i=0; i<n-1; i++)
        //записать текущее значение i по адресу i1
    int flag=0;
    for(j=0; j<n-1; i++)
    if (x[j]>x[j+1])
    void change(int *x[j], *x[j-1])
    {
        int tmp = *x[j];
        *x[j] = *x[j-1];
        *x [j-1] = tmp;
        flag=1;
    }
}
int main(void)
{
    void srand(); // функция рандомизации ядра датчика случайных чисел
    float *x;
    int n;
    printf("Введите размер массива: ");
    scanf("%d",&n);
    //выделение памяти
    x = (float*)malloc(sizeof(float)*n);
    //формирование элементов массива случайным образом
    for(int i=0; i<n; i++) 
    {
        //вычисление значения элементов массива
        y[i] = rand()%50;
        //печать элементов массива
        printf("%6.3f", y[i]);
    }
    if (flag==n) break;
    
    int rezult = search12(y,n,0,&index1,&index2);
    float Summ;
    //анализ выполнения поиска
    switch (rezult)
    {
        case 0: printf("\nВ массиве нет нулевых элементов."); break;
        case -1: printf("\nВ массиве один нулевой элемент."); break;
        case 1: Summ = sum(y,n,index1,index2);
        printf("\nСумма элементов между %d-м и %d-м равна %8.3f",index1,index2,Summ); break;
    }
    free(y);
    system("pause");
    return 0;
}
