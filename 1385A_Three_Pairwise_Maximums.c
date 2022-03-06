//1385A_Three_Pairwise_Maximums.c 
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
		long array[3];
		scanf("%ld %ld %ld",&array[0],&array[1],&array[2]);
		//printf("%ld %ld %ld ",array[0],array[1],array[2]);
		
		for(int i=0;i<=2;i++){
			for (int j = i; j<=2; j++)
			{
				if(array[i]>array[j]){
					long temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
		}

		// for (int i = 0; i < 3; ++i)
		// {
		// 	printf("%ld ",array[i]);
		// }
		// printf("\n");
		if(array[1]!=array[2]){
			printf("NO\n");
		}else{
			printf("YES\n");
			printf("%d %d %d\n",array[2],array[0],array[0]);
		}
	}	

	return 0;
}