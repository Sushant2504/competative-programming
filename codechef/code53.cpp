#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

void solve(){
      
     int n, d;
     cin>>n>>d;

     vector<int> a(n);
     ff(n) cin>>a[i];
     int ans = 0;
     bool f = false;


     for(int i=0; i<n; i++){
         if(a[i] > d){
             f = true;
             ans++;
         }

         if(f && a[i] <= d){
             f = false;
             ans++;
         }
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