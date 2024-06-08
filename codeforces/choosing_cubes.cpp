#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)


void solve(){
    int n, f, k;
    cin>>n>>f>>k;

    vector<int> a(n);

    ff(n) cin>>a[i];

    sort(a.begin(), a.end(), greater<int>());

    int temp = n-f;
    
    if(temp!=0){
        no
        return;
    }

    for(int i=k; i<n; i++){
        if(a[i]==a[i-1] && i>0 && a[i]==f){
            cout<<"MAYBE"<<endl;
            return;
        }else if(a[i]==a[i+1] && i<n-1 && a[i]==f){
            cout<<"MAYBE"<<endl;
            return;
        }
        else if(a[i]==a[i-1] || a[i]==a[i+1] && a[i]==f){
            cout<<"MAYBE"<<endl;
            return;
        }
    }


    yes
    
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}