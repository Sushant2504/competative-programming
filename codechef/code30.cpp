#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)


void solve(){
  int x, y;
   cin>>x>>y;
   
   int a = x%3;
   int b = y%3;
   
   int ans = min(a, b);
   
   cout<<ans<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}