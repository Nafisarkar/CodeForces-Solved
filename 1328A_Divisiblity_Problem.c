#include<stdio.h>
//#include"inout.h"

int main(){
	//inout();
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;++i){
		int res=0;
		int x,y;
		scanf("%d %d",&x,&y);
		if(x%y==0){
			printf("0\n");
		}else{
			res =x%y;
			printf("%d\n",(y-res));
		}
	}
	return 0;
}