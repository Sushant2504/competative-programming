#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)


void solve(){
      int n, m;
      cin>>n>>m;


      int temp = m%n;
      int temp1 = n-temp;
      int div = m/n;

      int ans = min(temp, temp1);

      if(div==0){
          cout<<temp1<<endl;
      }else{
          cout<<ans<<endl;
      }
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}