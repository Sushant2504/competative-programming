#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long



void solve(){
     int n, m;
     cin>>n>>m;

     vector<int> a(n);

     ff(n) cin>>a[i];

     sort(a.begin(), a.end());

     int maxi = INT_MIN;
     int sum  = a[0];
     for(int i=1; i<n; i++){
          if(a[i]==a[i-1] || a[i]==(a[i-1]+1)){
               sum += a[i];
               maxi = max(maxi, sum);
          }else{
               sum = a[i];
               maxi = max(maxi, sum);
          }
     }


     cout<<maxi<<endl;
     
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}