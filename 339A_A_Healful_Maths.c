#include<stdio.h>
//#include"inout.h"
#include<string.h>


int main(){
	//inout();
	char string[100];
	scanf("%[^\n]s",string);

	int string_size = strlen(string);
	int array[1000]={};
	int counter=0;
	for(int i=0;i<string_size;i++){
		if(string[i]!='+'){
			array[counter] = string[i]-'0';
			counter++;
		}
	}
	//printf("counter:%d\n",string_size-counter);
	int size = string_size-counter;
	for(int i=0;i<size+1;i++){
		for(int j=0;j<size;j++){
			if(array[i]<array[j]){
				int temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}


	for(int i=0;i<counter;i++){
		printf("%d",array[i]);

		if(counter-1!=i)
			printf("+");
	}

	return 0;
}
