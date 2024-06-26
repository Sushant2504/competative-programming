#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

void solve(){
      ll n;
      cin>>n;


      if(n%2==0){
          
          for(int i=1; i<=n/2; i++){
              cout<<i<<" "<<n-i+1<<" ";
          }
          cout<<endl;
      }
      else{
        ll t = n;
        n--;
        for(int i=1; i<=n/2; i++){
            cout<<i<<" "<<n-i+1<<" ";
        }

        cout<<t<<endl;
      }
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}