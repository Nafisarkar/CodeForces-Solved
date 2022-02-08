#include<iostream>
using namespace std;

int main()
{	
	int run,a,b,c,res=0;
	cin>>run;
	for(int i=0;i<run;i++){
		cin>>a>>b>>c;
		if(a+b+c>=2){
			res++;
		}
	}
	cout<<res<<endl;
	return 0;
}