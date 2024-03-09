/*
 * @lc app=leetcode id=64 lang=cpp
 *
 * [64] Minimum Path Sum
 */

// @lc code=start
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if (grid.empty()) return 0;

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
        dp[0][0] = grid[0][0];

        // Fill the first row
        for (int j = 1; j < m; ++j) {
            dp[0][j] = dp[0][j - 1] + grid[0][j];
        }

        // Fill the first column
        for (int i = 1; i < n; ++i) {
            dp[i][0] = dp[i - 1][0] + grid[i][0];
        }

        // Fill the rest of the dp table
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
            }
        }

        return dp[n - 1][m - 1];
    }
    // void solve(vector<vector<int>>& grid,vector<vector<int>>& matrix,int & minsum,int sum,int i,int j){
    //     int n=grid.size();
    //     int m=grid[0].size();
    //     if(i==n-1 && j==m-1){
    //         minsum=min(sum,minsum);
    //         return;
    //     }
    //     //right
    //     if(j+1<m && matrix[i][j+1]==0){
    //         matrix[i][j+1]=1;
    //         solve(grid,matrix,minsum,sum+grid[i][j+1],i,j+1);
    //         matrix[i][j+1]=0;
    //     }
    //     //down
    //     if(i+1<n && matrix[i+1][j]==0){
    //         matrix[i+1][j]=1;
    //         solve(grid,matrix,minsum,sum+grid[i+1][j],i+1,j);
    //         matrix[i+1][j]=0;
    //     }
    //     //left
    //     if(j>0 && matrix[i][j-1]==0){
    //         matrix[i][j-1]=1;
    //         solve(grid,matrix,minsum,sum+grid[i][j-1],i,j-1);
    //         matrix[i][j-1]=0;
    //     }
    //     //up
    //     if(i>0 && matrix[i-1][j]==0){
    //         matrix[i-1][j]=1;
    //         solve(grid,matrix,minsum,sum+grid[i-1][j],i-1,j);
    //         matrix[i-1][j]=0;
    //     }


    // }
    // int minPathSum(vector<vector<int>>& grid) {
    //     if (grid.empty()) return 0;
    //     int n= grid.size(), m = grid[0].size();
    //     vector<vector<int>> matrix(n,vector<int>(m, 0));
    //     int minsum=INT_MAX;
    //     int sum=grid[0][0];
    //     matrix[0][0]=1;

    //     solve(grid,matrix,minsum,sum,0,0);
    //     return  minsum;
        
    // }
};
// @lc code=end

