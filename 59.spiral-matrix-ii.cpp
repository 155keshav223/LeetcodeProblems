/*
 * @lc app=leetcode id=59 lang=cpp
 *
 * [59] Spiral Matrix II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n));
        // vector<vector<int>> res;
        int r1=0,r2=n-1;
        int c1=0,c2=n-1;
        int k=1;
        while(r1<=r2 && c1<=c2){
            for(int c=c1;c<=c2;c++){
                res[r1][c]=k++;
            }
            for(int r=r1+1;r<=r2;r++){
                res[r][c2]=k++;
            }
            if(r1<=r2 && c1<=c2){
                for(int c=c2-1;c>=c1;c--){
                    res[r2][c]=k++;
                }
                for(int r=r2-1;r>r1;r--){
                    res[r][c1]=k++;
                }
            }
            r1++;
            r2--;
            c1++;
            c2--;
        }
        return res;  
    }
};
// @lc code=end

