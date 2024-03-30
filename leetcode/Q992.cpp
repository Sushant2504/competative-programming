#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int m = subarrayWithDistinct_k(nums, k);
        int n = subarrayWithDistinct_k(nums, k-1);
        return (m-n);
    }

    int subarrayWithDistinct_k(vector<int>& nums, int k){
        int ans = 0;
        unordered_map<int, int> m;
        int l=0, r=0, n=nums.size();
        
        while(r<n){
           m[nums[r]]++;

           while(m.size() > k){
               m[nums[l]]--;

               if(m[nums[l]]==0) m.erase(nums[l]);
               l++;
           }

           ans += r-l+1;
           r++;
        }

        return ans;
    }
};