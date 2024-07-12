#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long


void solve(){
    int n;
    cin>>n;

    vector<int> v(n);
    ff(n) cin>>v[i];

    int ans = v[n-1];
    for(int i=n-2; i>=0; i--){
         ans = max(ans+1, v[i]);
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