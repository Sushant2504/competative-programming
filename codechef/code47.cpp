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
    vector<ll> b(n);

    ff(n) cin>>a[i];
    ff(n) cin>>b[i];

    ll s1 = 0;
    ll s2 = 0;

    ff(n){
        if(a[i]==0 && b[i]==1) s2++;
        if(a[i]==1 && b[i]==0) s1++;
        if(a[i]==1 && b[i]==-1) s1++;
        if(a[i]==-1 && b[i]==1) s2++;
    }

    ff(n){
        if(a[i]==1 && b[i]==1){
            if(s1<=s2) s1++;
            else s2++;
        }

        if(a[i]==-1 && b[i]==-1){
            if(s1<=s2) s2--;
            else s1--;
        }
    }

     
    cout<<min(s1, s2)<<endl; 

}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}