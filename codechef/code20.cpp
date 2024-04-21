#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)



void solve(){
      int a, b;
      cin>>a>>b;

      int c=0, d=0;

      while(a>0 && b>0){
         int temp1 = a/10;
         int temp2 = b/10;

         a %= 10;
         b %= 10;

         c = c*10 + temp1;
         d = d*10 + temp2;
      }
    

     if(c > a || d > b){
        cout<<"YES"<<endl;
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