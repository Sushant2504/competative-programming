#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)


void solve(){
      
     int x;
     cin>>x;

     int ans = x/2;

     if(x%2!=0) ans++;

     cout<<ans<<endl;


}


int main(){
    solve();
}