//490A_Team_Olympiad.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inout.h"

int main(){
	//inout();
	int n;
	int array[5001]={};
	int t1[5001]={};
	int t2[5001]={};
	int t3[5001]={};
	int pro=0,maths=0,pe=0;
	scanf("%d",&n);
	
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&array[i]);
	}
	for(int i=0;i<n;i++){
        if(array[i]==1){
            t1[pro]=i+1;
            pro++;
        }
        else if(array[i]==2){
            t2[maths]=i+1;
            maths++;
        }
        else if(array[i]==3){
            t3[pe]=i+1;
            pe++;
        }
    }
    int s =0,w=0;
    if(pro>maths){
    	s=maths;
    }else{
    	s=pro;
    }
    if(s>pe){
    	w=pe;
    }else{
    	w=s;
    }
    printf("%d\n",w);
    for(pro=0,maths=0,pe=0;pro<w,maths<w,pe<w;pro++,maths++,pe++){
        printf("%d %d %d\n",t1[pro],t2[maths],t3[pe]);
    }

	return 0;
}