#include<stdio.h>
//#include"inout.h"
int main(){
	//inout();
	int maxValue =0;
	int minValue =1000;
	int maxIndex =0;
	int minIndex =0;
	int n=0;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		int x;
		scanf("%d",&x);
		if(x>maxValue){
			maxIndex=i;
			maxValue=x;
		}
		if(x<=minValue){
			minIndex=i;
			minValue=x;
		}
	}
	if(maxIndex>minIndex){
		int res=(maxIndex-1)+(n-minIndex)-1;
		printf("%d\n",res);
	}
	else{
		int res =(maxIndex-1)+(n-minIndex);
		printf("%d\n",res);
	}
	return 0;
}