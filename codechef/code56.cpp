#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

void solve(){
      
    ll y;
    cin>>y;


    if(y%4!=0){
        cout<<365<<endl;
        return;
    }
    else if(y%4==0 && y%100!=0){
        cout<<366<<endl;
        return;
    }else if(y%100==0 && y%400!=0){
        cout<<365<<endl;
        return;
    }else if(y%400==0){
        cout<<366<<endl;
        return;
    }
     

}


int main(){
   solve();
}