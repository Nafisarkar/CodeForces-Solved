//1535A_Fair_PlayOff.c 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
//#include"inout.h"

int max(int x,int y){
	if(x>y){
		return x;
	}else{
		return y;
	}
}

int main(){
	//inout();
	int t;
	scanf("%d",&t);
	while(t--) {
	    int s1,s2,s3,s4;
	    int array[4]={};
		scanf("%d %d %d %d",&s1,&s2,&s3,&s4);
		array[0]=s1;
		array[1]=s2;
		array[2]=s3;
		array[3]=s4;

		for(int i=0;i<4;i++){
			for(int j=i;j<4;j++){
				if(array[i]>array[j]){
					int temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
		}
		int found =0;
		
		int b1 = max(s1,s2);
		if(b1==array[2]||b1==array[3]){
			found++;
		}
		int b2 = max(s3,s4);
		if(b2==array[2]||b2==array[3]){
			found++;
		}
		if(found>1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}

	return 0;
}