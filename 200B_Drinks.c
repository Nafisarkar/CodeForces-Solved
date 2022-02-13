// File:200B_Drinks.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include"inout.h"

int main(){
	//inout();
	double n=0;
	scanf("%lf",&n);
	double total_sum=0;
	for (int i=0;i<n;i++)
	{
		double temp=0;
		scanf("%lf",&temp);
		//printf("%lf\n",temp);
		total_sum=total_sum+temp;
	}
	double result = total_sum/n;
	printf("%.12lf\n",result);


	return 0;
}