#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long


void solve(){
    int n, k;
        cin >> n >> k;
        vector<int> s(k);
        int m = -1;
        for (int i = 0; i < k; i++){
            cin >> s[i];
            m = max(m, s[i]);
        }

        
        cout << 2 * (n - m) - k + 1 << '\n';

}


int main(){
     int t;
     cin>>t;
     while(t--){
        solve();
     }
}