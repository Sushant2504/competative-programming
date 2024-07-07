#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

void solve(){
      
    ll n;
    cin>>n;

    vector<ll> a(n);
    vector<ll> b(n);

    ff(n) cin>>a[i];
    ff(n) cin>>b[i];


    ll sum1 = 0;
    ll sum2 = 0;

    for(int i=0; i<n; i++){
        
        if(a[i]==1 || b[i]==1){
            if(sum1 <= sum2){
               sum1++;
            }else{
                sum2++;
            }
        }else if(a[i]==-1 || b[i]==-1){
            if(sum1 >= sum2){
               sum1--;
            }else{
                sum2--;
            }
        }
    }


    ll ans = min(sum1, sum2);

    cout<<ans<<endl;
     

}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}