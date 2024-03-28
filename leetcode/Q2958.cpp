#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {

        int maxi = INT_MIN;
        unordered_map<int, int> m;
        int a = 0;
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
             m[nums[i]]++;
            if(m[nums[i]] <= k) ans++;
            else{
            
                while(m[nums[i]] > k && a<i){
                    m[nums[a]]--;
                    a++;
                    ans--;
                }
                ans++;
            }

            maxi=max(maxi, ans);


        }
        // for(int i=0; i<nums.size(); i++){
        //      int ans = 0;
        //      unordered_map<int, int> m;
        //      for(int j=i; j<nums.size(); j++){
        //            m[nums[j]]++;

        //            if(m[nums[j]] <= k){
        //               ans++;
        //            }
        //            else{
        //               break;
        //            }
        //      }
        //      m.clear();
        //      maxi = max(maxi, ans);
        // }


        return maxi;
    }
};