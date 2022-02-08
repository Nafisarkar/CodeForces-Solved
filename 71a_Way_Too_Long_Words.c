#include<stdio.h>
#include<string.h>
int main()
{	
	int run;
	scanf("%d ",&run);
	char word[100]={};
	
	for(int i=0;i<run;i++){
		scanf(" ");
		scanf("%[^\n]s",word);
		int word_length = strlen(word);
		if(word_length>=11){
			int big = word_length; 
			int remove =0;
			if(big>9){
				remove =2;
			}
			else{
				remove =1;
			}
			printf("%c%d%c\n",word[0],word_length-remove,word[word_length-1]);
		}
		else{
			printf("%s\n",word);
		}
	}
	
	return 0;
}