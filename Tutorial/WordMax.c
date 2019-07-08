#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void)
{
//строка для ввода с клавиатуры
    char dest[200];
    printf("Введите строку символов: ");
//ввод строки
    gets(dest);
//используем для работы вспомогательную строку buf.
//выделение памяти под вспомогательную строку
    char *buf = (char*)malloc(sizeof(char*)*(strlen(dest)+1));
//копируем строку dest в строку buf
    strcpy(buf,dest);
//выделить первое слово строки
    char *temp = strtok(buf," ,;.!?-");
//принять это слово за слово с максимальной длиной
    int max = strlen(temp);
    char *strmax = (char*)malloc(sizeof(char)*(max+1));
    strcpy(strmax,temp);
//выделение следующих слов и сравнение их со словом с максимальной длиной
    while (temp!=NULL)
    {
        temp = strtok(NULL," ,;.!?-");
        if (!temp)break;
        if (max<strlen(temp))
        {
            free(strmax);
            max = strlen(temp);
            strmax = (char*)malloc(sizeof(char)*(max+1));
            strcpy(strmax,temp);
        }
    }
    printf("В строке %s\n слово с максимальной длиной %s", dest, strmax);
    printf("\n Его длина - %d", max);
    free (strmax);
    free (buf);
    system("pause");
    return 0;
}
