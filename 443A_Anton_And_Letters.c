#include<stdio.h>
#include<ctype.h>
//#include"inout.h"

int main(){
	//inout();
	char array[1000]={};
	char temp;
	int counter=0;
	while(1){
		scanf("%c",&temp);
		if(temp=='}'){
			break;
		}
		if(temp!=' ' && temp!='{' && temp!=',' && isalpha(temp)){
				int exit =0;
				if(counter>0){
					for(int i=0;i<counter;i++){
						if(array[i]==temp){
							exit=1;
						}
					}
				}
				if(exit==0){
					array[counter]=temp;
					counter++;	
				}
		}
	}
	printf("%d\n",counter);
	return 0;
}