//1358A_Park_Lighting.c 
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
		int n,m;
		scanf("%d %d",&n,&m);
		double l,c;
		l=n,c=m;
		int res = 0;
		res = ceil((l*c)/2);
		printf("%d\n",res);
	}
	return 0;
}