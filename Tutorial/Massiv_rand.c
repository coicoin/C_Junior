#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    //Описание указателя на целое число
    int *x;
    int n,i;
    printf("Введите размерность массива: ");
    scanf("%d",&n);
    //выделение памяти
    x = (int*)malloc(sizeof(int)*n);
    for(i=0; i<n; i++) 
    {
    //вычисление значения элементов массива rand x[i] = rand()%31+20;  x[i] = rand()%31-rand()%31;
        x[i] = rand()%101/(rand()%31+1.);
    //печать элементов массива
        printf("%d", x[i]);
    }
    //печать элементов массива
    for(i=0;i<n;i++) printf("%5d",x[i]);
    //освобождение памяти
    free(x);
    printf("\n");
    system("pause");
    return 0;
}
