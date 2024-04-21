#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)



void solve(){
      
     int n;
     cin>>n;
     string s;
     cin>>s;


     unordered_map<char, int> m;

     for(int i=0; i<n-1; i++){
        if(s[i] != s[i+1]){
            m[s[i+1]]++;
            if(s[i+1]=='1'){
                m['0']--;
            }else{
                m['1']--;
            }
        } 

     }

     if(m['1'] !=0 || m['0']!=0){

     }


}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}