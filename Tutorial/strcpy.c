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
    char *words;
//подсчет количества слов
    int k = 0;
//выделить первое слово
    char *temp = strtok(buf," ,;.!?-");
//выделение следующих слов
    while (temp!=NULL)
    {
        temp = strtok(NULL," ,;.!?-");
        k++;
    }
    //если строка содержит хотя бы одно слово
    if (k) 
        {
    /*выделить память под строку, которая будет хранить начальные символы слов*/
        words  = (char*)malloc(sizeof(char)*(k+1));
        k = 0;
    //провести выделение слов вновь
        temp = strtok(dest," ,;.!?-");
    /*сохраняя первый символ каждого выделяемого слова в строке words. */
        words[k++] = temp[0];
        while (temp!=NULL)
        {
            temp = strtok(NULL," ,;.!?-");
            if (temp)
            words[k++] = temp[0];
        }
    /*последним символом полученной строки записать нуль-терминатор*/
        words[k] = '\0';
    //вывести строку на экран
        puts(words);
        }
    system("pause");
    return 0;
}
