#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    void srand(); // функция рандомизации ядра датчика случайных чисел
    float **x;
    int n, m, i, j;
    printf("Введите количество строк матрицы: ");
    scanf("%d",&n);
    printf("Введите количество столбцов матрицы: ");
    scanf("%d",&m);
    x = (int**)malloc(sizeof(float*)*n); //массив из указателей
    for(i=0; i<n; i++)
    x[i] = (int)malloc(sizeof(float)*m); //массив из m элементов
        for(i=0; i<n; i++)
        for(j=0; j<m; j++){
    x[i][j] = rand()%200/(rand()%100+1.);
    printf("A[%d][%d]\t",i,j);}
    for (i=n-1; i>=0; i--)
    free(x[i]);
    free(x);
    system("pause");
    return 0;
}
