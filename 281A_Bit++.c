#include<stdio.h>
int main(){
	int value=0,run;
	scanf("%d",&run);
	char a,b,c;
	for(int i=0;i<run;i++){
		scanf(" %c %c %c",&a,&b,&c);
		if(b=='+'){
			value++;
		}
		if(b=='-'){
			value--;
		}
	}
	printf("%d\n",value);
	return 0;
}