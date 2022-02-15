//520A_Pangram.c
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
//#include"inout.h"

int main(){
	//inout();
	int n=0;
	scanf("%d ",&n);
	//printf("%d\n",n);

	char letter[30]={};
	int counter =0;
	for (int i=0;i<n;++i)
	{
		int found=0;
		char temp;
		scanf("%c",&temp);
		if(i==0){
			letter[counter]=tolower(temp);
			counter++;
		}
		else{	
			for(int j=0;j<counter;j++){
				if(tolower(temp)==letter[j]){
					found=1;
				}
			}
			if(found==0){
				letter[counter]=tolower(temp);
				counter++;
			}
		}
	}

	// for(int i= 0;i<strlen(letter);i++){
	// 	for(int j=i;j<strlen(letter);j++){
	// 		if(letter[i]>letter[j]){
	// 			char temp = letter[i];
	// 			letter[i] = letter[j];
	// 			letter[j] = temp;
	// 		}
	// 	}
	// }

	// for(int i=0;i<strlen(letter);i++){
	// 	printf("%c in index of %d\n",letter[i],i);
	// }

	// printf("%d\n",strlen(letter));
 // 	printf("%s\n",letter);
	if(strlen(letter)>=26){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}