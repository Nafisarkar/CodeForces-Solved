#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
//#include"inout.h"

int main(){
	//inout();
	int n,m;
	scanf("%d %d",&n,&m);
	int max =0;
	if(n>m){
		max = n;
	}else{
		max = m;
	}

	max = (6-max)+1;
	if(max%2==1){
		if(max==3){
			printf("1/2\n");
		}else{
			printf("%d/6\n",max);
		}
	}else{
		if(max==4){
			printf("2/3\n");
		}else{
			printf("1/%d\n",6/max);
		}
	}

	return 0;
}