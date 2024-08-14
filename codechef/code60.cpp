#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

void solve(){
     int n, m;
     cin>>n;

     vector<int> a(n);

     ff(n) cin>>a[i];
     unordered_map<int, char> map;

     for(int i=0; i<n; i++){
         map[a[i]] = '#';
     }

     cin>>m;

     while(m--){
        string s;
        cin>>s;

         if(s.length()!=n){
        no
        return;
        }

        
        map[a[0]] = s[0];

        for(int i=1; i<n; i++){
            if(map[a[i]]!='#'){
                 no
                 return;
            }
        }

        yes


     }
     
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}