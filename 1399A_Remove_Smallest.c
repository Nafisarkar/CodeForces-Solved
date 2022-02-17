//1399A_Remove_Smallest.c
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
//#include"inout.h"

int main(){
	//inout();
	int t=0;
	scanf("%d",&t);
	 while(t--){
	 	int size=0;
	 	int array[101]={};
	 	scanf("%d",&size);
	 	for(int i=0;i<size;i++){
	 		scanf("%d",&array[i]);
	 	}	
	 	for(int i=0;i<size;i++){
	 		for(int j=i;j<size;j++){
	 			if(array[i]>array[j]){
	 				int temp = array[i];
	 				array[i] = array[j];
	 				array[j] = temp;
	 			}
	 		}
	 	}
	 	int istrue =1;
	 	for(int i=size-1;i>0;i--){
	 		if(array[i]-array[i-1]>1){
	 			istrue=0;
	 			break;
	 		}
	 	}
	 	if(istrue==1){
	 		printf("YES\n");
	 	}else{
	 		printf("NO\n");
	 	}
	 	printf("\n");
	 }

	return 0;
}