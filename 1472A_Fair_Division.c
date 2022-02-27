//1472A_Fair_Division.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inout.h"

int main(){
	//inout();
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int one=0;
		int two=0;
		for (int i = 0; i < n; ++i)
		{
			int x =0;
			scanf("%d",&x);
			if(x==1){
				one++;
			}else{
				two++;
			}
		}
		int a1=0;
		if(two%2==1){
			a1+=2;
		}
		if(a1==0){
			if(one%2==0){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}else{
			if(one>=2){
				if((one-2)%2==0){
					printf("YES\n");
				}else{
					printf("NO\n");
				}
			}else{
				printf("NO\n");
			}
		}
		
	}
	return 0;
}