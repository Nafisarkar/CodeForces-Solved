#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int res=n/5;
    int rem = n%5;
    if(rem>0){
        res++;
    }
    printf("%d\n",res);
    return 0;
}