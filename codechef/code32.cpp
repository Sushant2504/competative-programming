#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)


void solve(){
      
   long long a, b, k;
   cin>>a>>b>>k;

   long long ans = 0;

   while(a<b){
       long long temp = (long long)a*k;

       if(temp<b){
           a = a*b;
       }else{
        a++;
       }

       ans++;
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