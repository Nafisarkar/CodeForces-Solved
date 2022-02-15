//141A_Amusing_Joke.c
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
/*#include"inout.h"*/

int main(){
/*	inout();*/
	char array1[120]={};
	char array2[120]={};
	char array3[120]={};

	scanf("%s",array1);
/*	printf("%s\n",array1);*/
	scanf("%s",array2);
/*	printf("%s\n",array2);*/
	scanf("%s",array3);
/*	printf("%s\n",array3);*/

	int string1_size = strlen(array1);
	int string2_size = strlen(array2);
	int string3_size = strlen(array3);
	for (int i = 0; i < string1_size; ++i)
	{
		char temp=array1[i];
		for(int j=0;j<string3_size;j++){
			if(temp==array3[j]){
				array3[j]='0';
				array1[i]='0';
				break;
			}
		}
	}
	for (int i = 0; i < string2_size; ++i)
	{
		char temp=array2[i];
		for(int j=0;j<string3_size;j++){
			if(temp==array3[j]){
				array3[j]='0';
				array2[i]='0';
				break;
			}
		}
	}
	// printf("%s\n",array1);
	// printf("%s\n",array2);
	// printf("%s\n",array3);
	int found=0;
	for(int i =0;i<string3_size;i++){
		if(array3[i]!='0'){
			found++;
			// printf("index = %d",i);
		}
	}
	for(int i =0;i<string2_size;i++){
		if(array2[i]!='0'){
			found++;
			// printf("index = %d",i);
		}
	}
	for(int i =0;i<string1_size;i++){
		if(array1[i]!='0'){
			found++;
			// printf("index = %d",i);
		}
	}
	// printf("\nfound  %d\n",found);
	if(found>0){
		printf("NO\n");
	}
	else{
		printf("YES\n");
	}

	return 0;
}