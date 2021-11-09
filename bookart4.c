#include <stdio.h>
int main(){
    FILE* f=fopen("i.bmp","rb");fseek(f,118,1);int i,j,t,x=16,e;
    unsigned char m[14][8],c[]="042615387cae9dbf";
    while(i<14)fread(m[i++],1,8,f);fclose(f);f=fopen("o.txt","w");
    for(i=13;i>=0;i--)
        for(j=0;j<7;j++){
            e=m[i][j];
            if(e/x!=t)fprintf(f,"§%c",c[t=e/x]);fprintf(f,"⬛");
            if(e%x!=t)fprintf(f,"§%c",c[t=e%x]);fprintf(f,"⬛");
}}
