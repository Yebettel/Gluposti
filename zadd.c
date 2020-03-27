#include <stdio.h>


main() {

FILE *a;
FILE *b;
    int n=0;
    int max=0;
    int s=1;
    char x=fgetc(a);
    a = fopen("C:\\Users\\Laptop\\Documents\\CodeBlocks\\zadd\\bin\\Debug\\PRIMER.txt", "r");
    while(x=fgetc(a) != EOF)
    {
    while(x!=' ')
    {
    n++;
    }
    if(n>max)
    max=n;

    s++;
    }
    fclose(a);
    b = fopen("C:\\Users\\Laptop\\Documents\\CodeBlocks\\zadd\\bin\\Debug\\OUTPUT.txt", "w");
    fprintf("max:%i, w:%i", max, s);
    fclose(b);
    return 0;
}
