#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)


void solve(){
    
   int n;
   cin>>n;

   vector<int> a(n);

   ff(n) cin>>a[i];

   if(n==2){
      cout<<min(a[0], a[1])<<endl;
   }
   else{
    int maxi = min(a[0], a[1]);

   for(int i=1; i<=n-2; i++){
      vector<int> temp;
      for(int j=0; j<=2; j++){
          temp.push_back(a[i+j]);
          sort(temp.begin(), temp.end());

          maxi = max(maxi, temp[0]);
      }
   }

      cout<<maxi<<endl;
   }
   


}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}