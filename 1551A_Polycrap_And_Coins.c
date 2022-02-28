#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//#include"inout.h"
int main(){
	//inout();
	int t;
	scanf("%d",&t);
	while(t--){
		int temp=0;
		scanf("%d",&temp);
		int a,b;
		if(temp%3==1){
			a=temp/3;
			a++;
			b=temp/3;
		}
		else if( temp%3==2){
			a=temp/3;
			b=temp/3;
			b++;
		}
		else{
			a=temp/3;
			b=temp/3;
		}
		printf("%d %d\n",a,b);
	}
	return 0;
}