//1343A_B_Balance_Array.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inout.h"

int main(){
	//inout();
	long int n;
	scanf("%ld",&n);
	while(n--){
		long int temp;
		scanf("%ld",&temp);
		if((temp/2)%2!=0){
			printf("NO\n");
		}else{
			printf("YES\n");
			long int j=2;
			for(long int i=1;i<=temp/2;i++){
				printf("%ld ",j);
				j=j+2;
			}
			long int val = j-2;

			j=1;
			for(long int i=1;i<temp/2;i++){
				printf("%ld ",j);
				j=j+2;
			}
			printf("%ld\n",val+temp/2-1);
		}
	}
	return 0;
}