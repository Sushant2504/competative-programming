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

    

    for(int i=1; i<n; i++){
       if(s[i]!=s[i-1]){
          if(s[i]=='0'){
              cnt1++;
              
          }
          else if(s[i]=='1'){
            cnt2++;
          }
       }
    }

    int ans = min(cnt1, cnt2);

    cout<<ans<<endl;


}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}