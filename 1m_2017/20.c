#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
FILE *X;
FILE *C;
void XOR(char *str,char *key )
{
    int i,n;
    for(i=0;i<strlen(str);++i)
    {
        if(str[i]!=EOF)
        {
            n=i%strlen(key);
            str[i]^=key[n];
            fputc(str[i],X);
        }
    }

}
int main()
{
    setlocale(0, "russian");
    char stroka[10000],m,s,key[100],fail[100];
    int i=0,j;
    printf("Введите ключ: ");
    gets(key);
    printf("Введите путь к вашему файлу (Например:C:\\Users\\Desktop\\file.txt) ");
    gets(fail);
    C=fopen(fail,"r");
    while(!feof(C))
    {
        stroka[i]=fgetc(C);
        i++;
    }
    fclose(C);
    X=fopen(fail,"w");
    XOR(stroka,key);
    printf(" Текст закодирован");
    return 0;
}
