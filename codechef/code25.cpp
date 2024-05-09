#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)



void solve(){
      int a;
      cin>>a;

      if(a==2 || a==4){
        cout<<1<<endl;
        return;
      }

      int ans = a/4;
      int temp = a%4;
      ans += (temp/2);


     cout<<ans<<endl;


}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}