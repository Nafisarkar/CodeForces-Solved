#include <stdio.h>
//#include "inout.h"

int main(){
	//inout();
	int array[4]={};
	scanf("%d %d %d %d",&array[0],&array[1],&array[2],&array[3]);
	for(int i=0;i<=3;i++){
		for(int j=i;j<=3;j++){
			if(array[i]>array[j]){
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	int x = array[3]-array[0];
	int y = array[3]-array[2];
	int z = array[3]-array[1];
	printf("%d %d %d\n",x,y,z);
	return 0;
}