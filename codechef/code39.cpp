#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)


void solve(){
      
    int n, x, y;
    cin>>n>>x>>y;

    int temp = 2*x;
    int ans = 0;
    if(temp>=y){
       ans = n*x;
    }else{
        int t = n/2;
        int d = n%2;
        int sum1 = t*y;
        int sum2 = d*x;
        ans = sum1 + sum2;
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