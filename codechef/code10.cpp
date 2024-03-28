#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)



void solve(){
   int n;
   cin>>n;

   int c=n/2;
   int ans = 0;

   if(n%2==0){
     ans = c*13;
   }
   else{
     ans = c*13+6;
   }

   cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}