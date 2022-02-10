#include<stdio.h>
#include<string.h>
//#include"inout.h"
int main(){
	//inout();
	char array[100]={};
	scanf("%s",array);
	//printf("%s",array);
		
	int size = strlen(array);
	int four_exi=0,seven_exi=0;
	for(int i=0;i<size;i++){
		if(array[i]=='4'){
			four_exi++;
		}
		if(array[i]=='7'){
			seven_exi++;
		}
	}
	int fs_total=four_exi+seven_exi;
	if(fs_total!=4&&fs_total!=7&&fs_total!=47&&fs_total!=744){
		fs_total=0;
	}else{
		fs_total=1;
	}
	//printf("four_exi %d seven_exi %d fs_total %d",four_exi,seven_exi,fs_total);
	if(fs_total==1){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}