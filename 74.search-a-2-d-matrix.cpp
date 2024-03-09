/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        bool flag = false;
        for(int i=0;i<matrix.size();i++){
            if(find(matrix[i].begin(),matrix[i].end(),target)!=matrix[i].end()){
                flag = true;
                break;
            }
        }
        return flag;
        
    }
};
// @lc code=end

