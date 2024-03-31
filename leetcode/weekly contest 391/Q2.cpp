#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
//           int ans = 0;
        
//           ans += numBottles;
        
          int emptybottle = numBottles;
          int drunk = numBottles;
          numBottles = 0;
        
          while(numExchange > 0){
              int temp = emptybottle-numExchange;
               
              if(temp < 0){
                  if(numBottles == 0){
                      break;
                  }
                  else{
                      
                      drunk += numBottles;
                      emptybottle += numBottles;
                      numBottles = 0;
                  }
              }
              else if(temp > 0){
                  numBottles++;
                  emptybottle = temp;
                  numExchange++;
              }
              else if(temp==0){
                  numBottles++;
                  drunk += numBottles;
                  break;
              }
          }
        
        
        return drunk;
        
    }
};