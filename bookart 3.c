#include <stdio.h>
int main(){
    FILE* f=fopen("input.bmp","rb");
    fseek(f,118,1);
    int i, j, t=0;
    unsigned char mat[14][8];
    char col[16]="042615387cae9dbf";
    for(i=0;i<=13;i++)
    fread(mat[i], 1, 8, f);
    fclose(f);
    f=fopen("output.txt","w");
    for(i=13;i>=0;i--){
        for(j=0;j<7;j++){
            if(mat[i][j]/16!=t)
            fprintf(f, "§%c", col[t=mat[i][j]/16]);
            fprintf(f, "⬛");
            if(mat[i][j]%16!=t)
            fprintf(f, "§%c", col[t=mat[i][j]%16]);
            fprintf(f, "⬛");
}   }   }
