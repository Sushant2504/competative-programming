#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

ll mod = 998244353;

bool issorted(vector<ll>& v){

    for(int i=1; i<v.size(); i++){
        if(v[i]<v[i-1]) return false;
    }
    return true;
}

void solve(){
    int n, m, k;
    cin>>n>>m>>k;
    vector<vector<bool>> v(n, vector<bool>(m, false));

    int count = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
             if(!v[i][j]){

                v[i][j] = true;

                //  if(i+k >= n) break;
                // //  if(i-k < 0) break;
                //  if(j+k >= m) break;
                //  if(j-k < 0) break;

                bool f1 = false, f2 = false;

                 for(int a=i+k; a<n; a++){
                     v[a][j] = true;
                 }

                 for(int a=i+k; a<n; a++){
                     v[i][j+k] = true;
                 }

                 for(int a=i+k; a<m; a++){
                    v[i+k][j] = true;
                 }

                 for(int a=j+k; a<m; a++){
                    v[i][a] = true;
                 }

                count++;
             }
        }
    }


    cout<<count<<endl;
    
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}