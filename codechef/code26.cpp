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

      ff(n) cin>>v[i];

      sort(v.begin(), v.end(), greater<int>());

      int ans = 0;
      int m = 0;
      if(n%2==0){
        m = n/2-1;
      }else{
        m = n/2;
      }

      for(int i=0; i<=m; i++){
         ans += v[i];
      }

      for(int i=m+1; i<n; i++){
        ans -= v[i];
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