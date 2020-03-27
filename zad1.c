#include <stdio.h>
#include <stdlib.h>

int ponavljanje(char *str, char c){


}

int main()
{
    char str[20];
    char *p=&str;
    char ch;
    int i=0;
    do{
    scanf("%c", (p+i));
    i++;
    }while(*(p+i-1)!='\0');
    scanf("%c", &ch);
    printf("", ponavljanje(p,ch));
    return 0;
}
