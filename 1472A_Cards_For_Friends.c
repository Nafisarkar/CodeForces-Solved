//1472A_Cards_For_Friends.c 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
//#include"inout.h"

int main(){
	//inout();
	int t;
	scanf("%d",&t);
	while(t--){
		long long ans =1,w=0,h=0,n=0;
		scanf("%lld %lld %lld",&w,&h,&n);
		if(n==1){
			printf("YES\n");
			continue;
		}
		while(w%2==0){
			ans*=2;
			w=w/2;
		}
		while(h%2==0){
			ans*=2;
			h=h/2;
		}
		if(n<=ans){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}