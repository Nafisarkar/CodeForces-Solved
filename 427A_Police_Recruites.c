//427A_Police_Recruites.c
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
//#include"inout.h"

int main(){
	//inout();
	int n;
	scanf("%d",&n);
	int p=0,c=0;

	for (int i = 0; i < n; ++i)
	{
		int x;
		scanf("%d",&x);
		if(x>0){
			p+=x;
		}
		else{
			if(p<1){
				c++;
			}
			else{
				p--;
			}
		}
	}
	printf("%d",c);

	return 0;
}