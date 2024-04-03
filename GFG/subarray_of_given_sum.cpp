#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        
        int l=0, r=0;
        long long sum = 0;
        vector<int> ans;
        while(r<n){
            sum += arr[r];
            
            if(sum==s){
                ans.push_back(l+1);
                ans.push_back(r+1);
                break;
            }
            
            if(sum>s){
                
                while(sum!=s && l<r){
                    sum -= arr[l];
                    l++;
                }
                
                if(sum==s){
                    ans.push_back(l+1);
                    ans.push_back(r+1);
                    break;
                }
                
                l++;
            }
            
            if(r==n-1 && l==n-1){
                ans.push_back(-1);
                return ans;
            }
            
            r++;
        }
        
        
        return ans;
    }
};

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
