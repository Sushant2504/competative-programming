#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long


bool issorted(vector<ll>& v){

    for(int i=1; i<v.size(); i++){
        if(v[i]<v[i-1]) return false;
    }
    return true;
}

void solve(){
    
    ll n;
    cin>>n;

    vector<ll> v(n);

    ff(n) cin>>v[i];

    if(issorted(v)){
        cout<<0<<endl;
        return;
    } 

    

    cout<<2<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}