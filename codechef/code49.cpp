#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

void solve(){
      
     int x, y, z;
     cin>>x>>y>>z;

     int sum = x*y;

     int diff = z - sum;

     int ans = diff/x;


     cout<<ans<<endl;
      
     

}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}