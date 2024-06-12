#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)


void countSort(int arr[], int n){

    int k = arr[0];

    for(int i=0; i<n; i++){
        k = max(k, arr[i]);
    }

    int count[10] = {0};

    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }

    for(int i=1; i<=k; i++){
        count[i] += count[i-1];
    }

    int output[n];

    for(int i=n-1; i>=0; i--){
        output[--count[arr[i]]];
    }
    
    for(int i=0; i<n; i++){
        arr[i] = output[i];
    }
}

void solve(){
     string a, b;
     cin>>a>>b;


     swap(a[0], b[0]);

     cout<<a<<" "<<b<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}