#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ff(n) for (int i = 0; i < n; i++)
#define ff1(n) for (int i = 1; i < n; i++)
#define ll long long
const int M = 1e9 + 7;


void solve() {
     int n;
     cin>>n;
     vector<int> v(n);
     ff(n) cin>>v[i];

     ll pref_max = 0, s = 0, mx = 0;
     for(int i=0; i<n; i++){
        pref_max = max(pref_max, (ll) v[i]);

        ll d = pref_max - v[i];
        s += d;
        mx = max(mx, d);
     }

     cout<<s+mx<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
