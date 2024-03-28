#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)



void solve(){
    int n;
    cin>>n;

    string a, b;
    cin>>a>>b;
    int count = 0;
    vector<int> cnt;
    // vector<int> cnt1;
    for(int i=0; i<n; i++){
         if(a[i]==b[i] && a[i]=='b'){
            cnt.push_back(count);
            count = 0;
         }
         if(a[i] != b[i]){
             count++;
         }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}