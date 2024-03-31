#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {//sliding window problwm
        
        long long ans = 0;
        int mini=-1, maxi=-1;
        int n=nums.size();
        int cnt = 0;
        for(int l=0, r=0; r<n; r++){
           int x = nums[r];

           if(x < minK || x > maxK){
                l = r+1;
                continue;
           }

           if(x==minK) mini = r;

           if(x==maxK) maxi = r;

           ans+= max(0, (min(mini, maxi)-l+1));
        }


        return ans;
    }
};

