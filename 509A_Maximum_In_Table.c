//509A_Maximum_In_Table.c 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
//#include"inout.h"

int main(){
	//inout();
	int s;
	scanf("%d",&s);
	int matrix[1000][1000]={};
	for (int i = 0; i < s; ++i)
	{
		matrix[0][i]=1;
		matrix[i][0]=1;
	}
	for (int i = 1; i < s; ++i)
	{
		for (int j = 1; j < s; ++j)
		{
			matrix[i][j] = matrix[i][j-1]+matrix[i-1][j];
		}
	}
	printf("%d",matrix[s-1][s-1]);
	return 0;
}