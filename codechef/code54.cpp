#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

bool allequal(vector<int>& v){

    for(int i=1; i<v.size(); i++){
         if(v[i]!=v[i-1]){
             return false;
         }
    }

    return true;
}


void solve(){
      
    int n;
    cin>>n;

    vector<int> a(n);

    ff(n) cin>>a[i];

    if(allequal(a)){
         yes
         return;
    }
     
    sort(a.begin(), a.end());

    int i=0, j=n-2;

    while(i<j){
        if(a[i]==a[n-1] || a[n-2]==a[n-1]) i++;
        int b = i;
        bool f = false;
        while(b<j){
            int sum = a[b]+a[j];
            if(sum == a[n-1]){
                f = true;
                return;
            }
        } 
    
        if(!f){
            no
            return;
        }
    }


    yes 
    return;

}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}