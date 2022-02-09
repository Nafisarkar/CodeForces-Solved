#include<stdio.h>
#include<string.h>
int main(){
    int a,b;
    char str[100];
    scanf("%d %d",&a,&b);
    scanf("%s",str);

    int size = strlen(str);

    for (int i = 0; i < b; i++)
    {   
        for (int j = 0; j <size;j++){
            if(str[j]=='B' && str[j+1]=='G'){
                str[j]='G';
                str[j+1]='B';
                j++;
            }
        }
    }
    printf("%s\n",str);
    return 0;
}