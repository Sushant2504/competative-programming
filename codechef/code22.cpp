#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)



void solve(){
      int n;
      cin>>n;

      string s;
      cin>>s;
      
      int cnt1 = 0;
      int cnt2 = 0;
      int ans = 0;

      for(int i=0; i<n-1; i++){
          if(s[i]==s[i+1] && s[i]=='1'){
            cnt1++;
          }
          if(s[i]==s[i+1] && s[i]=='0'){
            cnt2++;
          }

          if(s[i]!=s[i+1]){
            int temp;
             if(cnt2==0){
                temp = cnt1%2;
                cnt1 = 0;
             }else if(cnt1==0){
                temp = cnt2%2;
                cnt2 = 0;
             }
             
             ans += temp;
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