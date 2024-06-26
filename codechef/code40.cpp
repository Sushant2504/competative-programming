#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)


void solve(){
      
    int n;
    cin>>n;

    vector<int> a(n);

    ff(n) cin>>a[i];

    unordered_map<int, int> m;

    for(int i=0; i<n; i++){
        m[a[i]]++;
    }

    if(m[a[0]]==0 || m[a[n-1]] > 1 || m[a[n-1]] == 0){
        no
        return;
    }

    yes
    return;

}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}