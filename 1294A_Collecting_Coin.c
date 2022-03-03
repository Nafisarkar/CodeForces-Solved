//1294A_Collecting_Coin.c 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
//#include"inout.h"

int main(){
	// inout();
	int t=0;
	scanf("%d",&t);
	while(t--){
		int array[3],n=0;
		scanf("%d %d %d %d",&array[0],&array[1],&array[2],&n);

		for(int i=0;i<3;i++){
			for(int j=i;j<3;j++){
				if(array[i]>array[j]){
					int temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
		}
		// for (int i = 0; i < 3; ++i)
		// {
		// 	printf("%d ",array[i]);
		// }

		int dif = array[2]- array[0];
		dif +=array[2] - array[1];

		if(n>=dif){
			n-=dif;
			if(n%3==0){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}else{
			printf("NO\n");
		}

	}
	return 0;
}