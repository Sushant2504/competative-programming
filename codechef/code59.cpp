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

     vector<int> a(n);

     ff(n) cin>>a[i];

     vector<bool> vis(n, false);
 
     vis[a[0]] = 1;
    
    for(int i=1; i<n; i++){
         if(!vis[a[i-1]] && !vis[a[i+1]]){
              no
              return;
         }
    }


    yes
     

}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}