#include<stdio.h>
int main(){
    int k,n,w;
    int total_sum = 0;
    scanf("%d %d %d",&k,&n,&w);
    for(int i=1;i<=w;i++){
        total_sum += k*i;
    }
    if(total_sum-n<0){
        printf("0\n");
    }
    else
        printf("%d\n",total_sum-n);
    return 0;
}