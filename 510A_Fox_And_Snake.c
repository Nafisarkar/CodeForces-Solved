//510A_Fox_And_Snake.c
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
//#include"inout.h"

int main(){
	//inout();
	int a,b;
	scanf("%d %d",&a,&b);
	int counter =0;
	for(int i =1;i<=a;i++){
		if(i%2){
			for(int j=1;j<=b;j++){
				printf("#");
			}
		}
		else{
			if(counter%2==0){
				for(int j=1;j<b;j++){
					printf(".");
				}
					printf("#");
				counter++;
			}
			else{
				printf("#");
				for(int j=1;j<b;j++){
					printf(".");
				}
			counter++;
			}
		}
		printf("\n");
	}

	return 0;
}