#include<stdio.h>
#include<string.h>
int main()
{	
	int n, k, arr[1000]={};
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int alpha_value = arr[k-1],res=0;
	for(int i=0;i<n;i++){
		if(arr[i]>=alpha_value && arr[i]>0){
			res++;
		}
	}
	printf("%d\n",res);
	return 0;
}