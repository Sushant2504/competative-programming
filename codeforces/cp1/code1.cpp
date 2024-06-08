#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)


void solve(){
    
     int n, m;
     cin>>n>>m;

     if(m>n){
        cout<<"NO"<<endl;
        return;
     }


     int temp = n-m;
     int ans = temp + m;

     if(n==ans && temp%2==0){
        cout<<"YES"<<endl;
        return;
     }

     cout<<"NO"<<endl;
     


}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}