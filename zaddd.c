#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f12;
    FILE* f3;
    f12=fopen("C:\\Users\\Laptop\\Documents\\CodeBlocks\\zaddd\\bin\\Debug\\1.txt", "r");
    f3=fopen("C:\\Users\\Laptop\\Documents\\CodeBlocks\\zaddd\\bin\\Debug\\3.txt", "w");
    while(f12!=-1){
    fputc(fgetc(f12),f3);
    }
    fclose(f12);
    f12=fopen("C:\\Users\\Laptop\\Documents\\CodeBlocks\\zaddd\\bin\\Debug\\2.txt", "r");
    while(f12!=EOF){
    fputc(fgetc(f12),f3);
    }
    fclose(f12);
    fclose(f3);
    return 0;
}
