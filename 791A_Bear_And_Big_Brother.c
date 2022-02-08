#include<stdio.h>
//#include"inout.h"

int main()
{	
	//inout();
	int a,b;
	scanf("%d %d",&a,&b);

	int aw=0,bw=0;

	for(int i=0;i<100;i++){
		if(aw>bw){
			printf("%d",i-1);
			break;
		}
		if(i==0){
			aw=a,bw=b;
		}
		else{
			aw=aw*3;
			bw=bw*2;
		}
	}
	return 0;
}