#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)


void solve(){
      
     int n, k;
     cin>>n>>k;
     int ans = 0;
     vector<int> v(n);

     for(int i=0; i<n; i++){
         cin>>v[i];
     }

     int maxi = INT_MIN;
     unordered_map<int, int> m;

     for(int i:v){
         m[i]++;
     }

     for(auto i:m){
         if(i.second>maxi){
             maxi = i.second;
         }
     }

     int remain = maxi%k;
     int diff = n-maxi;

     ans = remain + diff;
     cout<<ans<<endl;
     
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}