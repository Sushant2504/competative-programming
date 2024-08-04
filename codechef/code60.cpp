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

     ll l = -1;
     ll r = 1e9;

     while(r-l > 1){
         ll mid = l + (l-r)/2;
         if(mid * mid >= n){
            r = mid;
         }else{
            l = mid;
         }
     }

     cout<<(r-l)<<endl;
     
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}