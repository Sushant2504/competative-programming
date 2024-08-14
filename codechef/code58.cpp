#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

void solve(){
      
     ll n;
     cin>>n;

     vector<ll> a(n);

     ff(n) cin>>a[i];

     string s;
     cin>>s;
     vector<ll> pre_sum(n+1);
     pre_sum[1] = a[0];
     for(int i=1; i<n; i++){
          pre_sum[i+1] = pre_sum[i] + a[i];
     }
     ll ans = 0;

     ll l = 0, r = n-1;

     while(l<=r){
          if(s[l]=='L' && s[l]=='R'){
               ans += pre_sum[r+1] + pre_sum[l];
               l++;
               r--;
          }
          else if(s[l]=='L') r--;
          else l++;
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