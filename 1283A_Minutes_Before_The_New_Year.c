//1283A_MINUTES_BEFORE_THE_NEW_YEAR_C
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
//#include"inout.h"
int main(){
    //inout();
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int h, m;
        scanf("%d %d", &h, &m);
        //covert h to minutes
        h = h * 60;
        int minutes = h + m;
        printf("%d\n",1440-minutes);
    }
    
    return 0;
}