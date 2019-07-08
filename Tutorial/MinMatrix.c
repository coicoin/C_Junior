#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    /* Создание квадратной матрицы размерности n*/
    int ** Create(int n)
    {
        int i,j;
        void srand();
        int** x = (int**)malloc(sizeof(int*)*n);
        for(i=0; i<n;i++)
          x[i] = new int[n];
        for(i=0; i<n; i++)
          for(j=0; j<n; j++)
            x[i][j] = rand()%10; // элементы матрицы задаются случайным образом
        return x; //функция возвращает указатель на матрицу
    // Функция печати элементов матрицы.
    }
    void Print(int **x, int n)
    {
        int i, j;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
              printf("%6d ",x[i][j]);
            printf("\n");
        }
    }
    // Функция поиска минимального элемента в целочисленной матрице x размерности n
    int min(int **x, int n)
    {
        int i, j;
        int minimum = x[0][1];
        for (i=0; i<n-1; i++) 
          for (j=i+1; j<n; j++)
            if (x[i][j]<minimum) minimum = x[i][j];
        return minimum; // функция возвращает найденное минимальное значение.
    }
    // Функция, освобождающая память
    void Delete(int **x, int n)
    {
        int i;
        for(i=n-1; i>=0; i--)
          free (x[i]);
        free(x);
    }
int main(void)
{
    int **I;
    int i, j, n, m;
    void srand();
    printf("Введите размерность матрицы: ");
    scanf("%d",&n);
    I = Create(n); // Создание матрицы I размерности n.
    Print(I,n); //печать матрицы.
    m = min(I,n); //Нахождение минимального элемента.
    // Поиск позиций найденного минимального элемента.
    printf ("Минимальные элементы находятся на позициях: ");
    for(i=0; i<n-1; i++){
      for(j=i+1; j<n; j++)
        if(m==I[i][j])
            printf("[%d][%d] \n", i, j);}
        //освобождение памяти.
        Delete(I,n);
        system("pause");
        return 0;
}
