 #include<bits/stdc++.h>
using namespace    std;

int main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

    int x =0;
    cin>>x;

    char array;

    vector<char> sen;
    

    for (int i = 0; i < x; ++i)
    {
    	for (int n = 0; n < 8; ++n)
    	{
    		for (int m = 0; m < 8; ++m)
    		{
    			cin>>array;
    			if(array!='.'){
    				sen.push_back(array);
    			}
    		}
    	}

    	for (size_t j = 0; j < sen.size(); ++j)
    	{
    		cout<<sen[j];
    	}
    	cout<<endl;
    	sen.clear();
    	
    }

  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}