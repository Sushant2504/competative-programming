#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)



void solve(){
      int n;
      cin>>n;
      vector<int> v(n);

      ff(n){
        cin>>v[i];
      }

      int mini = INT_MAX;

      for(int i:v){
        mini = min(i, mini);
      }

      if(v[0]!=mini || v[n-1]!=mini){
         no
         return;
      }

      for(int i=1; i<n-1; i++){
         
         if(v[i] < mini){
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