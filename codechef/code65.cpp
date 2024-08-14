#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

int n = 0, a = 0, b = 0;
long long ans = 0;

void solve(){
     cin>>a>>b>>n;

    //  vector<int> v(n);

    //  ff(n) cin>>v[i];

    ans = b;

     for(int i=0, x=0; i<n; i++){
         cin>>x;
         ans += min(a-1, x);
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