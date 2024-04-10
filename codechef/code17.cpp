#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)



void solve(){
      int n;
      cin>>n;

      vector<int> att1(n);
      vector<int> att2(n);
      vector<int> diff1(n);
      vector<int> diff2(n);

      ff(n) cin>>att1[i];
      ff(n) cin>>diff1[i];
      ff(n) cin>>att2[i];
      ff(n) cin>>diff2[i];

      int sum1 = 0;
      int sum2 = 0;
      int sum3 = 0;
      int sum4 = 0;

      for(int i:att1){
        sum1 += i;
      }

      for(int i:att2) sum2 += i;
      for(int i:diff1) sum3 += i;
      for(int i:diff2) sum4 += i;

      if(sum1 > sum2 && sum3 > sum4){
        cout<<"A"<<endl;
        return;
      }else if(sum2 > sum1 && sum4 > sum3){
        cout<<"P"<<endl;
        return;
      }else{
        cout<<"DRAW"<<endl;
      }



}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}