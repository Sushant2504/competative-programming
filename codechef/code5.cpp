#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)

int gcd(int a, int b)
{
    // Find Minimum of a and b
    int result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
 
    // Return gcd of a and b
    return result;
}


void solve(){
    int l, r;
    cin>>l>>r;

    vector<int> a;
    vector<int> b;

    for(int i=l; i<=r; i++){
        a.push_back(i);
    }
    unordered_map<int, bool> m;
    for(int i=0; i<a.size(); i++){
        bool t=true;
        for(int j=0; j<a.size(); j++){
             if(i==j) continue;

             if(gcd(a[i],a[j]) == 1 && !m[j]){
                b.push_back(a[j]);
                m[j] = true;
                t=true;
             }
             else{
                t=false;
             }
        }

        if(!t){
            cout<<-1<<endl;
            return;
        }
    }

    for(int i=b.size()-1; i<a.size(); i++){
        bool t=true;
        for(int j=0; j<a.size(); j++){
             if(i==j) continue;

             if(gcd(a[i],a[j]) == 1 && !m[j]){
                b.push_back(a[j]);
                m[j] = true;
                t=true;
             }
             else{
                t=false;
             }
        }

        if(!t){
            cout<<-1<<endl;
            return;
        }
    }



    for(int i:b){
        cout<<i<<" ";
    }cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}