#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

void solve(){
      int a;
      cin>>a;

      vector<int> v;

      while(a>0){
          int temp = a%10;
          a /= 10;
          v.push_back(temp);
      }
     

      reverse(v.begin(), v.end());

      if(v[0]!=1 || v[1]!=0){
         no
         return;
      }

      int num = 0;

      if(v[2]==0){
          no
          return;
      }

      for(int i=2; i<v.size(); i++){
          
          num = num*10 + v[i];
      }

      if(num >= 2){
           yes
           return;
      }


      no

}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}