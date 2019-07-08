#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    /* Функция создания вещественной матрицы по заданной размерности.
    Функция возвращает указатель на матрицу.*/
    // Параметры матрицы - количество строк и столбцов.
    float ** Create(int n, int m)
    {
        int i,j;
        void srand();
        float** x = (int**)malloc(sizeof(float*)*n);
        for(i=0; i<n;i++)
          x[i] = (int)malloc(sizeof(float)*m);
        for(i=0; i<n; i++)
          for(j=0; j<n; j++)
            x[i][j] = rand()%200/(rand()%100+1.)-rand()%50;
        return x;
    }
    // Функция печати матрицы x, с n-строками и m-столбцами.
    void Print(float **x, int n, int m)
    {
        int i, j;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
              printf("%8.3f ",x[i][j]);
            printf("\n");
        }
    }
    // Функция вычисляющая сумму строки с номером k в матрице x,
    // с n-строками m-столбцами.
    float SummK(float **x, int n, int m, int k)
    {
        float S = 0;
        /* Проверка корректности введенных данных, функция заканчивает работу,
        если номер строки k больше n или является отрицательным числом. */
        if (k>=n || k<0)
        {
            printf("Неверные данные");
            return 999;
        }
    // суммирование элементов строки с номером k
    for(int i=0; i<n; i++)
      S+=x[k][i];
    return S;
    }
    // Функция, освобождаюSщая память выделенную под матрицу.
    /* Параметры функции - указатель на матрицу и количество строк n. */
    void Delete(float ** x,int n)
    {
        for(int i=n-1; i>=0; i--)
          free(x[i]);
        free(x);
    }
int main(void)
{
    float **M; //описание матрицы
    int n, m, i;
    void srand();
    printf("Введите количество строк матрицы: ");
    scanf("%d",&n);
    printf("Введите количество столбцов матрицы: ");
    scanf("%d",&m);
    //создание матрицы.
    M = Create(n,m);
    //печать матрицы.
    Print(M,n,m);
    //вычисление суммы каждой из n строк.
    for(i=0; i<n; i++)
        {
          float Summ = SummK(M,n,m,i);
          printf("Сумма элементов в строке %d равна %8.3f ", i, Summ);    
        }
        //освобождение памяти.
        Delete(M, n);
        system("pause");
        return 0;
}
