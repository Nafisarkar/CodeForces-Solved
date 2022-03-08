//1325A_EnAb_AnD_gCd.c 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
//#include"inout.h"

int main(){
	//inout();
	int t;
	scanf("%d",&t);
	while(t--){
		char array[100];
		int A_have = 0;
		int B_have = 0;
		int C_have = 0;
		scanf("%s",array);
		// printf("%s\n",array);
		for(int i=0;i<strlen(array);i++){
			if(array[i]=='A'){
				A_have++;
			}else if(array[i]=='B'){
				B_have++;
			}else if(array[i]=='C'){
				C_have++;
			}
		}
		if(B_have<A_have){
        	printf("NO\n");
        	continue;
    	}
    	B_have-=A_have;
   		if(B_have==C_have) printf("YES\n");
    	else printf("NO\n");
	}
	return 0;
}