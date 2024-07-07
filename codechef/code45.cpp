#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

void solve(){
      
     string a, b;
     cin>>a>>b;

     int n = a.length();
     int m = b.length();

     for(int i=n; i>0; i--){
        for(int j=0; j<=max(m-i,0); j++){
            int k = 0;
            int u = 0;

            while(k<n){
                if(a[k]==b[u+j]){
                    k++;
                    u++;
                }
                else k++;
            }

            if(u==i){
                cout<<m-i+n<<endl;
                return;
            }
        }
     }

     cout<<n+m<<endl;
     return;

}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}