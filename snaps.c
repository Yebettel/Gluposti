#include <stdio.h>
#include <stdlib.h>

void karta(char x){
switch(x){
case 'a':
printf("♥J");
break;
case 'b':
printf("♥Q");
break;
case 'c':
printf("♥K");
break;
case 'd':
printf("♥10");
break;
case 'e':
printf("♥A");
break;
case 'f':
printf("♦J");
break;
case 'g':
printf("♦Q");
break;
case 'h':
printf("♦K");
break;
case 'i':
printf("♦10");
break;
case 'j':
printf("♦A");
break;
case 'k':
printf("♣J");
break;
case 'l':
printf("♣Q");
break;
case 'm':
printf("♣K");
break;
case 'n':
printf("♣10");
break;
case 'o':
printf("♣A");
break;
case 'p':
printf("♠J");
break;
case 'q':
printf("♠Q");
break;
case 'r':
printf("♠K");
break;
case 's':
printf("♠10");
break;
case 't':
printf("♠A");
break;
}
}
void jeadut(char x){

}
char menjaj(char x){

}

int main()
{
    srand(time(0));
    char karte[20]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t'};
    char spil[20];
    int adut;
    char igrac1[5];
    char igrac2[5];
    int poeni1=0;
    int poeni2=0;
    int i;
    int temp;
    for(i=0;i<20;i++){
    temp=rand()%21;
    spil[i]=karte[temp];
    if(karte[temp]=='z'){
    i--;
    }else{
    karte[temp]='z';
    }
    }
    adut=(spil[19]-'a')/5;
    for(i=0;i<5;i++){
    igrac1[i]=spil[i];
    igrac2[i]=spil[i+5];
    }
    temp=10;


    return 0;
}
