 #include <algorithm>
#include<bits/stdc++.h>
using namespace    std;

int main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       int x ;
       cin>>x;
       for (int i = 0; i < x; ++i)
       {
       	int cases;
       	cin>>cases;
       	int max_spaces=0;
       	int zerocounter = 0;
       	for (int j = 0; j < cases; ++j)
       	{
       		int temp ;
       		cin>>temp;
       		if(temp==0){
       			zerocounter++;
       		}
       		if(temp!=0){
       			max_spaces = max(max_spaces, zerocounter);
       			zerocounter=0;
       		}

       	}
       	cout<<max(max_spaces,zerocounter)<<endl;

       }

  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}