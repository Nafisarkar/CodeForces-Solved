//1433A_BORING_APARTMENT_C
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
//#include"inout.h"

void solve(){
    int k,d=0;
        scanf("%d",&k);
        int total_sum = 0;
        for(int i=1;i<=9;i++){
            int sum = 0;
            for(int j=1;j<=4;j++){
                sum =sum*10 +i;
                total_sum += j;
                if(sum==k){
                    printf("%d\n",total_sum);
                    return 0;
            }
        }
    }
}

int main(){
    //inout();
    int x;
    scanf("%d",&x);
    while(x--){
        solve();
    }
}
