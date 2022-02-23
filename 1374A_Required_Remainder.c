//1374A_Required_Remainder.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inout.h"

int main(){
	//inout();
	int n=0;
	scanf("%d",&n);
	while(n--){
		long int x,y,z;
		scanf("%ld %ld %ld",&x,&y,&z);
		long int res =0;
		res = z/x;
		long int ans =0;
		ans = (x*res)+y;

		if(ans>z){
			ans-=x;
		}
		printf("%ld\n",ans);

	}
	return 0;
}