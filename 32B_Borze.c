#include<stdio.h>
#include<string.h>
//#include"inout.h"
int main()
{
	//inout();
	char string[201]={};
	scanf("%s",string);
	//printf("%s\n",string);
	for (int i = 0; i < strlen(string); ++i)
		{
			if(string[i]=='.'){
				printf("0");
				string[i]='0';
			}
			else if(string[i]=='-' && string[i+1] =='.'){
				printf("1");
				string[i]='0';
				string[i+1]='0';
				i++;
			}else if(string[i]=='-' && string[i+1]=='-'){
				printf("2");
				string[i]='0';
				string[i+1]='0';
				i++;
			}
		}	

	return 0;
}