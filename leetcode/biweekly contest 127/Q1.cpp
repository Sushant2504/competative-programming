#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        
        int ans = INT_MAX;
        
        for(int i=0; i<nums.size(); i++){
              int temp = nums[i];
              int cnt = 0;
            for(int j=i; j<nums.size(); j++){
                temp |= nums[j];
                cnt++;
                if(temp >= k){
                    ans = min(ans, cnt);
                }
            }
            

        }
        
        
        if(ans==INT_MAX) return -1;
        else return ans;
        
    }
};