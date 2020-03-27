#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/// system("color __");

int main()
{
    int i;
    int a;
    char string[255];
    system("color 2");
    /*
    printf("98%");
    fflush(stdout);
    Sleep(1000);
    printf("\b\b\b99%");
    fflush(stdout);
    */
    for(i=0;string[i]!='\0';i++)
    {
        scanf("%c", &string[i]);
    }
    for(i=0;string[i]!='\0';i++)
    {
        printf("%c", string[i]);
    }
    return 0;
}
