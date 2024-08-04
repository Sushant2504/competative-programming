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
    unordered_map<int, int> m;

    vector<ll> v(n);

    ff(n) cin>>v[i];

    ff(n) m[v[i]] = i;


    sort(v.begin(), v.end(), greater<int>());

    cout<<m[v[1]]+1<<endl;

}


int main(){
    solve();
}