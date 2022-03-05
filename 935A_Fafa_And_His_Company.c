//935A_Fafa_And_His_Company.c 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
//#include"inout.h"

int main(){
	//inout();
	int n;
	scanf("%d",&n);
	int counter=0;
	for (int i = 1;i<=n/2;i++)
	{
		if((n-i)%i==0){
			counter++;
		}
	}
	printf("%d",counter);
	return 0;
}