#include<stdio.h>
#include<stdlib.h>
int main()
{
	int array[6][6];
	int colum=0,row=0;
	
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			scanf("%d",&array[i][j]);
			if(array[i][j]==1){
				colum = i;
				row = j;
			}
		}
	}
	int steps_needed = abs(3-colum)+abs(3-row);
	printf("%d\n",steps_needed);
	return 0;
}