#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)


void solve(){
    int n, m;
    cin>>n>>m;

    string s;
    cin>>s;

    sort(s.begin(), s.end());
    int ans  =0;
    unordered_map<char, int> map;
    map['A'] = 0;
    map['B'] = 0;
    map['C'] = 0;
    map['D'] = 0;
    map['E'] = 0;
    map['F'] = 0;
    map['G'] = 0;

    for(char ch:s){
         map[ch]++;
    }


    for(auto i:map){
        if(i.second==0){
            ans += m;
        }else if(i.second < m){
            ans += m-i.second;
        }
    }

    cout<<ans<<endl;

}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}