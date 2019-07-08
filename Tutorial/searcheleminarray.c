#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Search(int *x, int k, int n) 
{
    for(int i=0; i<n; i++)
    {
        /*цикл закончит свою работу после того, как будет найдено нужное значение */
        if (x[i]==k) return i;
    }
    //или будут просмотрены все элементы массива
    return -1;
}
int main(void)
{
    // функция рандомизации ядра датчика случайных чисел
    void srand();
    int *x;
    int n,i;
    printf("Введите размер массива: ");
    scanf("%d",&n);
    //выделение памяти
    x = (int*)malloc(sizeof(int)*n);
    for(i=0; i<n; i++) 
    {
        //вычисление значения элементов массива
        x[i] = rand()%300;
        //печать элементов массива
        printf("%d", x[i]);
    }
    int y;
    printf("\nВведите значение для поиска: ");
    scanf("%d",&y);
    int ind = Search(x,y,n);
    if ("ind == -1")
    printf ("В массиве нет элемента со значением %d\n",y);
    else
    printf("Элемент %d с индексом %d\n",y,ind);
    //освобождение памяти
    free(x);
    printf("\n");
    system("pause");
    return 0;
}
