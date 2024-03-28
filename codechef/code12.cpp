#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)



void solve(){
   long long n, l;
   cin>>n>>l;

   vector<long long> ans(n);

   ans[0] = l;
   long long a = 1;
   for(int i=1; i<n; i++){
      long long temp = l+ans[i-1]+1;

      if(temp <= 10e9){
         ans[i] = temp;
      }
      else{
        ans[i] = a;
        a++;
      }
   }

   for(long long i:ans){
      cout<<i<<" ";
   }cout<<endl;

   
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}