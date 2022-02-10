#include<stdio.h>
#include<string.h>
//#include"inout.h"
int main()
{
	//inout();
	char string1[1000]={};
	char string2[1000]={};
	scanf("%s",string1);
	scanf("%s",string2);

	int string1_size=0;
	string1_size = strlen(string1);
	int string2_size =0;
	string2_size = strlen(string2);
	//printf("string1 size %d \nstring2 size %d\n",string1_size,string2_size);
	
	int counter = string2_size-1;
	int match_counter=0;
	for(int i =0;i<string1_size;i++){

		if(string1[i]=='t'){
			if('s'==string2[counter]){
				match_counter+=1;
			}
			else if('t'==string2[counter]){
				match_counter+=1;
			}
		}
		else{
			if(string1[i]==string2[counter]){
				//printf("match = %c <-> %c\n",string1[i],string2[counter]);
				match_counter++;
			}	
		}
		counter--;
	}
	//printf("match_counter %d string1_size %d\n",match_counter,string2_size);
	if(match_counter==string2_size){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}