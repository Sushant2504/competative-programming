#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)



void solve(){
      int n;
      cin>>n;

      vector<int> v(n);

      for(int i=0; i<n; i++) cin>>v[i];

      int maxi = INT_MIN;

      vector<int> presum(n);

      int sum=0;
      int ans = 0;
      for(int i=n-1; i>=0; i--){
            sum += v[i];
            presum[i] = sum;
      }
      int sum1=0;
      for(int i=0; i<n; i++){
          sum1 += v[i];
          int temp = sum1 + v[i];
          if(temp > sum){
              cout<<temp<<endl;
              return;
          }

      }


      cout<<sum<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}