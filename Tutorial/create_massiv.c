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
        printf("x[%d] ->",i);
    //чтение элементов с клавиатуры
        scanf("%d",&x[i]);
    }
    //очистка экрана
    system("cls");
    //печать элементов массива
    for(i=0;i<n;i++) printf("%5d",x[i]);
    //освобождение памяти
    free(x);
    printf("\n");
    system("pause");
    return 0;
}
