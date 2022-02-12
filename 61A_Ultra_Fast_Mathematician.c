// File:61A_Ultra_Fast_Mathematician.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include"inout.h"

int main(){
	//inout();
	char number1[200]={};
	char number2[200]={};

	scanf("%s",number1);
	scanf("%s",number2);
	int size = strlen(number1);
	for (int i = 0; i < size;i++)
	{
		if(number1[i]==number2[i]){
			printf("%d",0);
		}
		else{
			printf("%d",1);
		}
	}
	printf("\n");
	return 0;
}