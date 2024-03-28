#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)

int BitCount(unsigned int u)
    {
         unsigned int uCount;

         uCount = u - ((u >> 1) & 033333333333) - ((u >> 2) & 011111111111);
         return ((uCount + (uCount >> 3)) & 030707070707) % 63;
    }

void solve(){
   int n;
   cin>>n;

   int ans = BitCount(n);

   if(ans%2==0){
    cout<<"EVEN"<<endl;
    return;
   }
   else{
    cout<<"ODD"<<endl;
    return;
   }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}