#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)



void solve(){
      int n;
      cin>>n;

      vector<int>v(n);
      vector<vector<bool>> vis(n, vector<bool>(n, false));
      ff(n) cin>>v[i];

     
      int ans = 0;
      unordered_map<int, int> m;
      for(int i=0; i<n; i++){
         m[v[i]] = i+1;
      }

     
      
      for(int i=0; i<n; i++){
         int temp = v[i];
         for(int j=0; j<n; j++){
              int t = pow(temp, (j+1));
              if(v[j]>=t){
                ans++;
              }
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