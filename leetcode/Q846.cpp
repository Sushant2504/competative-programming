#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)

class Solution {
public:
    bool solve(vector<int> &hand, int groupSize, int i, int n){
        int next = hand[i] + 1;
        hand[i] = -1;
        int count = 1;
        i += 1;
        while(i < n && count < groupSize) {
            if(hand[i] == next){
                next = hand[i] + 1;
                hand[i] = -1;
                count++;
            }
            i++;
        }

        return count == groupSize;

    }
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();

        if(n%groupSize!=0) return false;
        sort(hand.begin(), hand.end());

        for(int i=0; i<n; i++){
            if(hand[i] >= 0){
                if(!solve(hand, groupSize, i, n)) return false;
            }
        }

        return true;
    }
};