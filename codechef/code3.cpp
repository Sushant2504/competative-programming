#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)

//to find subset of given values
void Subset(vector<int>& v, vector<vector<int>>& res, vector<int>& subset, int index){

    res.push_back(subset);

    for(int i=index; i<v.size(); i++){

        subset.push_back(v[i]);

        Subset(v, res, subset, i+1);

        subset.pop_back();
    }
}


void solve(){
    int n;
    cin>>n;

    vector<int> v(n);

    ff(n){
        cin>>v[i];
    }
    
    vector<vector<int>> res;
    vector<int> subset;
    int index = 0;
    Subset(v, res, subset, index);
    int maxi = INT_MIN;
    for(int i=0; i<res.size(); i++){
        sort(res[i].begin(), res[i].end());
        int m = res[i].size();
        int sum = 0;
        for(int j=0; j<m; j++){
            sum += res[i][j];
        }
        int d = sum/m;

        if(res[i][0] >= d){
            maxi = max(maxi, d);
        }
    }


    cout<<maxi<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}