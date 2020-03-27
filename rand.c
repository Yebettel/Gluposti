#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    srand(time(0));
    int i, g, m, arr[10]={}, max, min, gmax=0, gmin=200000, gdif=0, mmax=0, mmin=100000;
    for(m=0;m<10;m++){
    gmax=0;
    gmin=200000;
    gdif=0;
    for(g=0;g<100;g++){
    for(i=0;i<10;i++)
        arr[i]=0;
    for(i=0;i<1000000;i++){
    arr[rand()%10]++;
    }
    max=arr[0];
    min=arr[0];
    for(i=1;i<10;i++){
    if(arr[i]>max)
        max=arr[i];
    if(arr[i]<min)
        min=arr[i];
    }
    printf("max: %i\nmin: %i\ndif: %i\n\n", max, min, max-min);
    if(max>gmax)
        gmax=max;
    if(min<gmin)
        gmin=min;
    if(max-min>gdif)
        gdif=max-min;
    }
    printf("gmax: %i\ngmin: %i\ngdif: %i\ngmax-gmin: %i\nE: %i\n", gmax, gmin, gdif, gmax-gmin, gmax-gmin-gdif);
    if(gmax-gmin-gdif>mmax)
        mmax=gmax-gmin-gdif;
    if(gmax-gmin-gdif<mmin)
        mmin=gmax-gmin-gdif;
    }
    printf("\n\n\n\n\n\n\n\n\n\nmmax=%i\nmmin=%i\n", mmax, mmin);
}
