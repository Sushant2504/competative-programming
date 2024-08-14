#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

ll mod = 998244353;

bool issorted(vector<ll>& v){

    for(int i=1; i<v.size(); i++){
        if(v[i]<v[i-1]) return false;
    }
    return true;
}

void solve(){
    int n;
    cin>>n;

    vector<int> a(n);
    vector<int> b(n);

    ff(n) cin>>a[i];
    ff(n) cin>>b[i];

    unordered_map<int, int> m;

    for(int i=0; i<n; i++){
        m[a[i]]++;
    }


    for(int j=0; j<n; i++){
        
    }
    
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}