#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        
        int ans = -1;
        int sum = 0;
        int n = x;
        while(x>0){
            int temp = x%10;
            sum += temp;
            x /= 10;
        }
        
        if(n%sum==0){
            ans = sum;
        }
        
        return ans;
    }
};