#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        
        
        long long ans = 0;
        int n = nums.size();
        
        ans += n;
        
        long long l=0, r=1;
        
        while(r<n){
            int temp = r-l;
            
            if(nums[r]!=nums[r-1]){
                ans += temp;
            }
            else{
                l = r;
            }
            r++;
            
        }
        
        return  ans;
    }
};