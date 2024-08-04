#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

void solve(){
      
     int n, x;
     cin>>n>>x;

     int sum = 0;

     vector<int> v(n);

     ff(n) cin>>v[i];

     ff(n) sum += v[i];

     if(sum > x){
          int temp = sum/n;
          cout<<temp<<endl;
          return;
     }else{
        cout<<"infinite"<<endl;
        return;
     }
     
}


int main(){
    solve();

}    