 #include<bits/stdc++.h>
using namespace    std;

int main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code
int counter;
cin>>counter;

char array[counter];
cin>>array;

int xcounter = 0;
int serialFound = 0;

for (int i = 0; i < counter; ++i)
{
	if((array[i]==array[i+1]) && array[i] =='x'){
		xcounter++;
	}	
	else{
		xcounter = 0;
	}
	if(xcounter>1){
		serialFound++;
	}
}

// cout<<"X counter "<<xcounter<<endl;
// cout<<"Serial : "<<serialFound<<endl;
cout<<serialFound<<endl;

  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}
