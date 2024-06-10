#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)


bool good(vector<int>&b){
    int g = __gcd(b[0], b[1]);
    for(int i = 1; i < int(b.size()) - 1; i++){
        int cur_gcd = __gcd(b[i], b[i + 1]);
        if(g > cur_gcd) return false;
        g = cur_gcd;
    }
    return true;
}

void solve(){
    int n;
    cin>>n;

    vector<int> a(n);

    ff(n) cin>>a[i];


     int g = -1;
    int to_del = -1;
    for(int i = 0; i < n - 1; i++){
        int cur_gcd = __gcd(a[i], a[i + 1]);
        if(cur_gcd < g){
            to_del = i;
            break;
        }
        g = cur_gcd;
    }
    if(to_del == -1){
        cout<<"YES"<<endl;
        return;
    }
    vector<int>b0 = a, b1 = a, b2 = a;
    if(to_del > 0) b0.erase(b0.begin() + to_del - 1);
    b1.erase(b1.begin() + to_del);
    if(to_del < n - 1) b2.erase(b2.begin() + to_del + 1);
    if(good(b0) || good(b1) || good(b2)){
        cout<<"YES"<<endl;
        return;
    }else{
        cout<<"NO"<<endl;
        return;
    }

}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}