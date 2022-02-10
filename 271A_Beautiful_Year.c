// File:271A_Beautiful_Year.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include"inout.h"

int main(){
	//inout();
	int year;
	scanf("%d",&year);
	while (1)
    {
        year += 1;
        int a = year / 1000;
        int b = year / 100 % 10;
        int c = year / 10 % 10;
        int d = year % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    printf("%d\n",year);

	return 0;
}