#include<stdio.h>
#include<ctype.h>
//#include"inout.h"

int main()
{
	//inout();
	char string[10000];
	scanf("%[^\n]s",string);
	string[0]=toupper(string[0]);
	printf("%s\n",string);
	
	return 0;
}