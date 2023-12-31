 #include<bits/stdc++.h>
using namespace    std;

int main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
       int x;
       cin>>x;
       for (int i = 0; i < x; ++i)
       {
       	int temp1,temp2 ;
       	char sym;
       	cin>>temp1>>sym>>temp2;
       	cout<<temp1+temp2<<endl;

       }




  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}