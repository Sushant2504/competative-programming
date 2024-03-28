#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)



void solve(){
    int n, k, x;
    cin>>n>>k>>x;

    vector<int> dp(k);

    dp[0] = 1;
    dp[1] = 2;

    for(int i=2; i<k; i++){
        dp[i] = dp[i-1]+dp[i-2]+1;
    }

    if(dp[k-1] < x){
        yes
        return;
    }
    else{
        no
        return;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}