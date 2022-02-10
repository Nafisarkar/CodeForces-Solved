#include<stdio.h>
#include<string.h>
//#include"inout.h"
int main(){
	//inout();
	int n=0;
	char letter;
	scanf("%d",&n);
	int d_found=0,a_found=0;
	for (int i=0;i<=n;i++)
	{
		scanf("%c",&letter);
		if(letter=='A'){
			a_found++;
		}
		else if(letter=='D'){
			d_found++;
		}

	}
	//printf("%d  %d",a_found,d_found);
	if(a_found>d_found){
		printf("Anton\n");
	}
	else if(d_found>a_found){
		printf("Danik\n");
	}
	else if(a_found==d_found){
		printf("Friendship\n");
	}
	return 0;
}