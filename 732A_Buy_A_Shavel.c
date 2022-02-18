#include<stdio.h>
//#include"inout.h"
int main(){
	//inout();
	int a,b;
	scanf("%d %d",&a,&b);
	//printf("%d %d\n",a,b);
	int temp=a;
	int counter=1;
	while(1){
		if(a%10==0){
			printf("%d\n",counter);
			break;
		}
		else {
			if((a%10)-b==0){
				printf("%d\n",counter);
				break;
			}
			else{
				a+=temp;
			}
		}
		//printf("a =%d\n",a);
		counter++;
	}
	return 0;
}