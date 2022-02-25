#include<stdio.h>
//#include "inout.h"
#include <math.h>

int min(int x, int y){
    if(x < y){
        return x;
    }
    else
       return y;
}

int main(){
    //inout();
    int n,k,l,c,d,p,nl,np;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    // printf("n ->%d\n",n);
    // printf("k ->%d\n",k);
    // printf("l ->%d\n",l);
    // printf("c ->%d\n",c);
    // printf("d ->%d\n",d);
    // printf("p ->%d\n",p);
    // printf("nl ->%d\n",nl);
    // printf("np ->%d\n",np);

    int total_Drinks = (k*l)/nl;
    int total_lime = c*d;
    int total_solt = p/np;

    // printf("%d\n",total_Drinks/nl);
    // printf("%d\n",total_lime/nl);
    // printf("%d\n",total_solt/nl);
    int x = min(total_Drinks,total_lime);
    int y = min(x,total_solt)/n;

    printf("%d\n",y);
    return 0;
}