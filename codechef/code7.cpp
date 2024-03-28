#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ff(n) for (int i = 0; i < n; i++)
#define ff1(n) for (int i = 1; i < n; i++)

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int mini = INT_MAX;
    int cnt=0;
    for(int i=0; i<n-1; i++){
        if(v[i]==i || v[i+1]==i+1){
            swap(v[i], v[i+1]);
            cnt++;
        }
    }

    cout<<cnt<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}