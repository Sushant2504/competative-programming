#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)


void solve(){
      
     int n, m;
     cin>>n>>m;

     vector<int> a(n);
     vector<int> b(n);

     ff(n) cin>>a[i], a[i] %= m;
     ff(n) cin>>b[i], b[i] %= m;

     unordered_map<int, int> mp;
     int ans = 0;

     for(int x : a){
        mp[x]++;
     }

     for(int it: b){
        if(it==0)
           ans += mp[0];
        else
           ans += mp[m - it];   
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