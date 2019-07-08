#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    /* Создание квадратной матрицы размерности n*/
    int ** Create(int n, int m)
    {
        int i,j;
        void srand();
        int** x = (int**)malloc(sizeof(int)*n);
        for(i=0; i<n;i++)
          x[i] = (int*)malloc(sizeof(int)*m);
        for(i=0; i<n; i++)
          for(j=0; j<m; j++)
            x[i][j] = rand()%10; // элементы матрицы задаются случайным образом
        return x; //функция возвращает указатель на матрицу
    // Функция печати элементов матрицы.
    void Print(int **x, int n, int m)
    {
        int i, j;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
              printf("%6d ",x[i][j]);
            printf("\n");
        }
    }
    // Функция сортировки столбцов матрицы.
    int **Sort(int **x, int n, int m)
    {
        int flag;
        int i, j, k;
        for(i=0; i<m-1; j++)
        {
            //обменов не было
            flag = 0;
            for(j=0; j<m-1; j++)
            {
                //Сравнение двух рядом стоящих элементов первой строки.
                //Если первый элемент пары больше второго
                if (x[0][j]>x[0][j+1])
                {
                    //зафиксируем обмен.
                    flag = 1;
                    //выполним обмен столбцов.
                    for (int k=0; k<n; k++)
                    {
                        int temp = x[k][j];
                        x[k][j] = x[k][j+1];
                        x[k][j+1] = temp;
                    }
                }
            }  
        //Если обменов не было, то закончить сортировку.
        if (!flag) break;
        }
        return x;
    }
    void Delete(int **x, int n)
    {
        int i;
        for(i=n-1; i>=0; i--)
          free (x[i]);
        free(x);
    }
int main(int argc, char *argv[])
{
    int **I;
    int n, m;
    void srand();
    printf("Введите количество строк матрицы: ");
    scanf("%d",&n);
    printf("Введите количество столбцов матрицы: ");
    scanf("%d",&m);
    I = Create(n,m);
    printf("Исходная матрица: \n ");
    Print(I,n,m); //печать матрицы.
    printf("Преобразованная матрица: \n ");
    I = Sort(I,n,m); //Вызов функции сортировки.
    printf("I,n,m");
    //освобождение памяти.
    Delete(I,n);
    system("pause");
    return 0;
}
