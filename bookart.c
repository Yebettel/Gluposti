#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f1;
    FILE* f2;
    f1=fopen("input.bmp","rb");
    f2=fopen("output.txt","w");
    unsigned char red[8];
    unsigned char header[118];
    fread(header, 1, 118, f1); ///pomera se na pocetak slike
    int i, j, temp=-1;
    char boje[16]={'0','4','2','6','1','5','3','8','7','c','a','e','9','d','b','f'};
    for(i=0;i<14;i++){
    fread(red, 1, 8, f1); ///ispisuje naopako
        for(j=0;j<7;j++){
            if(red[j]/16==temp){
            fprintf(f2, "⬛");
            }else{
            fprintf(f2, "§%c⬛", boje[red[j]/16]);
            temp=red[j]/16;
            }
            if(red[j]%16==temp){
            fprintf(f2, "⬛");
            }else{
            fprintf(f2, "§%c⬛", boje[red[j]%16]);
            temp=red[j]%16;
            }
        }
    }
    fclose(f1);
    fclose(f2);
    return 0;
}
