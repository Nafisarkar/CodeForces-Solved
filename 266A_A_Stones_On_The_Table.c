#include<stdio.h>
#include<string.h>
//#include"inout.h"


int main()
{
	//inout();
	char letter,copy;
	int run,counter=0;
	scanf("%d",&run);
	for (int i = 0;i<run+1;i++)
	{
		scanf("%c",&letter);
		if(i==0){
			copy=letter;
		}
		else{
			if(copy==letter){
				counter++;
			}
			copy=letter;
		}
	}
	printf("%d",counter);
	return 0;
}