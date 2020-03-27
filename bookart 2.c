#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f1;
    FILE* f2;
    f1=fopen("input.bmp","rb");
    f2=fopen("output.txt","w");
    unsigned char matrix[14][8];
    unsigned char header[118];
    fread(header, 1, 118, f1);
    int i, j, temp=-1;
    char boje[16]={'0','4','2','6','1','5','3','8','7','c','a','e','9','d','b','f'};
    for(i=0;i<=13;i++){
    fread(matrix[i], 1, 8, f1);
    }
    for(i=13;i>=0;i--){
        for(j=0;j<7;j++){
            if(matrix[i][j]/16==temp){
            fprintf(f2, "⬛");
            }else{
            fprintf(f2, "§%c⬛", boje[matrix[i][j]/16]);
            temp=matrix[i][j]/16;
            }
            if(matrix[i][j]%16==temp){
            fprintf(f2, "⬛");
            }else{
            fprintf(f2, "§%c⬛", boje[matrix[i][j]%16]);
            temp=matrix[i][j]%16;
            }
        }
    }
    fclose(f1);
    fclose(f2);
    return 0;
}
