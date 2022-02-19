#include<stdio.h>
//#include"inout.h"
int main(){
	//inout();
	int a;
	scanf("%d",&a);
	if(a%2==0){
		printf("%d 4",a-4);
	}else{
		printf("%d 9",a-9);
	}
	return 0;
}