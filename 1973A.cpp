 #include<bits/stdc++.h>
using namespace    std;

int main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       int x;
       cin>>x;
       string sen;
      bool positive = false;
      for (int i = 0; i < x; ++i)
      {
      	
      	cin>>sen;
      	if(sen[0]=='a'){
      		positive = true;
      	}else if(sen[1]=='b'){
      		positive = true;
      	}else if(sen[2]=='c'){
      		positive = true;
      	}

      	if(positive == true){
      		cout<<"YES"<<endl;
      	}else{
      		cout<<"NO"<<endl;
      	}
      	positive = false;
      }


  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}