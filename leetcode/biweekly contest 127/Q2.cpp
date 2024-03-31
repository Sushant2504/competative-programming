#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumLevels(vector<int>& p) {
        
        // int ans = 0;
        int n = p.size();
        vector<int> pre_sum(n);
        vector<int> post_sum(n);
        int sum = 0;
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(p[i]!=0){
                cnt++;
            }else{
                cnt--;
            }
            pre_sum[i] = cnt;
        }
        
        sum = 0;
        cnt = 0;
        for(int i=n-1; i>=0; i--){
             if(p[i]!=0){
                cnt++;
             }
            else{
                cnt--;
             }
             post_sum[i] = cnt;
        }
        
        int ans = -1;
        cnt = 0;
        for(int i=0; i<n-1; i++){
            cnt++;
            if(pre_sum[i] > post_sum[i+1]){
                ans = cnt;
                break;
            }
        }
        
        return ans;
    }
};