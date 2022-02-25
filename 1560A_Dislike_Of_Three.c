//1560A_DISLIKE_OF_THREE_C
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
//#include"inout.h"
int main(){
//inout();
    int x;
    scanf("%d", &x);
    int array[1001];
    for(int i = 0; i <x; ++i){
        int k;
        scanf("%d",&k);
        int y = 0;
        while (k != 0)
        {
            y++;
            if (y % 3 != 0 && y % 10 != 3)
            {
                k--;
            }
        }
        printf("%d\n", y);
    }

    
    return 0;
}