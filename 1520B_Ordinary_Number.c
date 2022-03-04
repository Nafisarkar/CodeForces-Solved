//1520B_ORDINARY_NUMBER_C
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
//#include"inout.h"
int main(){
//inout();
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        long long n;
        scanf("%lld",&n);
        long long ans=0;
        for (long long i = 1; i <=9; i++)
        {
            for (long long j = i;j<=n;)
            {
                ans++;
                j=(j*10)+i;
            }
            
        }
        printf("%lld\n",ans);
    }
    return 0;
}
