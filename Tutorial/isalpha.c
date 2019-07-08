#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main (void)
{
//строка для ввода с клавиатуры
    char dest[200];
    printf("Введите строку символов: ");
//ввод строки
    gets(dest);
    int k = 0, i;
    for (i=0; i<strlen(dest); i++)
    {
        if(!isalpha(dest[i])) k++;
    }
    printf("Количество символов строки не являющихся буквами %d\n", k);
    system("pause");
    return 0;
}
