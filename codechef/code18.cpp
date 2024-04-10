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

      int sum = 0;

      for(int i:v){
          sum+=i;
      }

      int ans = pow(sum, 1.0/8);

      if(ans != 0 && trunc(ans)) {
        cout<<"YES"<<endl;
        return;
      }else{
        cout<<"NO"<<endl;
      }


}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}