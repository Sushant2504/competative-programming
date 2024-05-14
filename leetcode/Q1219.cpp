#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> row = {1, -1, 0, 0};
    vector<int> col = {0, 0, -1, 1};
    int maxGold = 0;

    int solve(vector<vector<int>>& grid, int x, int y, int n, int m){ // for the use of the backtracking
        if(x<0 || y<0 || x>=n || y>=m || grid[x][y]==0) return 0;

        int curr = grid[x][y];
        grid[x][y] = 0;
        int localMaxGold = curr;

        for(int i=0; i<4; i++){
            int newx = x+row[i];
            int newy = y+col[i];
            localMaxGold = max(localMaxGold, curr + solve(grid, newx, newy, n, m));
        }

        grid[x][y] = curr;
        return localMaxGold;
    }

    int getMaximumGold(vector<vector<int>>& grid) {
         int n = grid.size();
         int m = grid[0].size();
         
         for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                 if(grid[i][j] != 0){
                    maxGold = max(maxGold, solve(grid, i, j, n, m));
                 }
            }
         }

         return maxGold;
    }
};