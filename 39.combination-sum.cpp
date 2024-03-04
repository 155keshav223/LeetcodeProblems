/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
public:
    void solve(vector<int>& candidates, int sum, vector<int>& ans, vector<vector<int>>& res, int start) {
        if (sum == 0) {
            res.push_back(ans);
            return;
        }

        for (int i = start; i < candidates.size() && candidates[i] <= sum; i++) {
            ans.push_back(candidates[i]);
            solve(candidates, sum - candidates[i], ans, res, i);  // Pass 'i' to avoid reusing the same element
            ans.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> ans;
        int sum = target;
        solve(candidates, sum, ans, res, 0);
        return res;
    }
};

// class Solution {
// public:
//     void solve(vector<int>& candidates,int sum,vector<int>&ans,vector<vector<int>>&res){
//         if(sum==0){
//             sort(ans.begin(),ans.end());
//             if(find(res.begin(),res.end(),ans)==res.end()){
//                 res.push_back(ans);
//             }
//             return;
//         }
//         if(sum<0){
//             return;
//         }
//         if(sum>=1){
//             for(int i=0;i<candidates.size();i++){
//             sum=sum-candidates[i];
//             ans.push_back(candidates[i]);
//             solve(candidates,sum,ans,res);
//             ans.pop_back();
//             sum=sum+candidates[i];
//             }
//         }
//     }
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         sort(candidates.begin(), candidates.end());
//         vector<vector<int>>res;
//         vector<int>ans;
//         int sum=target;
//         solve(candidates,sum,ans,res);
//         return res;
//     }
// };
// @lc code=end

