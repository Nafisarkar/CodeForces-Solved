#include<stdio.h>
#include<string.h>
//#include"inout.h"

int main()
{
	//inout();
	char word[101]={};
	scanf("%s",word);
	int size = 101;
	char array2[101]={};
	int counter=0;
	for(int i=0;i<size;i++){
		int found=0;
		char src_l = word[i];
		for(int j=0;j<size;j++){
			if(array2[j]==src_l){
				found=1;
				break;	
			}
		}
		if(found==0){
			array2[counter]=word[i];
			counter++;
		}
	}
	int res = strlen(array2);

	if(res%2==0){
		printf("CHAT WITH HER!\n");
	}
	if(res%2!=0){
		printf("IGNORE HIM!\n");
	}

	return 0;
}
