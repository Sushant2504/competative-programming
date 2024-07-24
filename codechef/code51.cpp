#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

void solve(){
      
     int n, x;
     cin>>n>>x;

     vector<int> v(n);

     ff(n) cin>>v[i];

     sort(v.begin(), v.end());
     int ans = 0;
     int cnt = 0;
     for(int i=0; i<n; i++){
         if(v[i] >= x){
            ans++;
            cnt += (x- v[i]);
         }else{
            int diff = (x-v[i]);
            cnt -= diff;
            if(cnt >= 0) ans++;
            else break;
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