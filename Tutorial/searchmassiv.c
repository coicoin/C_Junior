#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int search12(float *x, int n, float k, int* i1, int* i2)
{
    int i=0; 
        //пока не просмотрены все элементы массива и текущее значение не равно k, 
        //переходить к следующему элементу
    while(i<n && x[i]!=k)
    i++;
        //записать текущее значение i по адресу i1
    *i1=i;
        //если цикл закончил свою работу из-за невыполнения первого условия,
        //то в массиве нет нулевых элементов
    if (i==n) return 0;
    i=*i1+1;
        //пока не просмотрены все оставшиеся элементы массива и текущее значение
        //не равно k, переходить к следующему элементу
    while(i<n && x[i]!=k)
    i++;
        //записать текущее значение i по адресу i2
    *i2=i;
        //если в массиве один нулевой элемент, то закончить выполнение функции
    if (i==n) return -1;
    return 1; //решение найдено
}
    float sum(float *x, int n, int i1, int i2)
    {
        if(i1>=i2 || i1<0 || i2>n-1)
        {
            printf ("Некорректные данные");
            return 999;
        }
        float S = 0;
        for(int i=i1+1; i<i2-1; i++)
        S+=x[i];
        return S;
    }
int main(void)
{
    void srand(); // функция рандомизации ядра датчика случайных чисел
    float *y;
    int n;
    printf("Введите размер массива: ");
    scanf("%d",&n);
    //выделение памяти
    y = (float*)malloc(sizeof(float)*n);
    //формирование элементов массива случайным образом
    for(int i=0; i<n; i++) 
    {
        //вычисление значения элементов массива
        y[i] = rand()%50/(rand()%50+1.);
        //печать элементов массива
        printf("%6.3f", y[i]);
    }
    int index1 = 0, index2 = 0;
    //поиск нулевых элементов
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
