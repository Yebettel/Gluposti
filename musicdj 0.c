#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f1;
    FILE* f2;
    FILE* f3;
    int i, j;
    int arr[10];
    for(i=1;i<=4;i++){
    f1=fopen(i,"r");
        for(j=0;j<10;j++)
        fscanf(f1,"%i",arr[j]);
    fclose(f1);

    for(j=0;j<10;j++){
        fscanf(f1,"%i",arr[j]);
        f1=fopen(i*arr[j],"r");
    }

    f3=("musicdj.mid","w");

    printf("Hello world!\n");
    return 0;
}
