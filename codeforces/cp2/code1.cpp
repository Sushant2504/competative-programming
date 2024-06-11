#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)


void solve(){
     string a, b;
     cin>>a>>b;


     swap(a[0], b[0]);

     cout<<a<<" "<<b<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}