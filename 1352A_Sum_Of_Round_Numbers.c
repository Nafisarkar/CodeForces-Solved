#include<stdio.h>
#include<string.h>
//#include "inout.h"

int main(){
	//inout();
	int t;
	scanf("%d",&t);
	while(t--){
		char array[100]={};
		scanf("%s",array);
		int size = strlen(array);
		//printf("size %d\n",size);
		int nonzero=0;
		for(int i=0;i<size;i++){
			if(array[i]!='0'){
				nonzero++;
			}
		}
		printf("%d\n",nonzero);
		for(int i=0;i<size;i++){
			if(array[i]!='0'){
				printf("%c",array[i]);
				nonzero++;
				//printf("i: %d\n",i);
				//printf("%c",array[i]);
				for(int j=i;j<size-1;j++){
					printf("0");
				}
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}