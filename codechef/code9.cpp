#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)


void solve(){
    int a, b;
    cin>>a>>b;

    int ans = 0;

    if(a >= (b+10)){
        cout<<ans<<endl;
        return;
    }


    while(a < (b+10)){
        a += 3;
        ans++;
        if(a >= (b+10)) break;
        b += 2;
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