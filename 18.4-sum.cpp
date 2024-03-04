/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start

class Solution {
public:
    void solve(vector<int>& nums, int target, vector<vector<int>>& res, vector<int>& ans, long long int sum, int index) {
        if (ans.size() == 4) {
            if (sum == target) {
                res.push_back(ans);
            }
            return;
        }
        for (int i = index; i < nums.size(); ++i) {
            if (i > index && nums[i] == nums[i - 1]) {
                continue;
            }

            ans.push_back(nums[i]);
            sum += nums[i];

            solve(nums, target, res, ans, sum, i + 1);

            ans.pop_back();
            sum -= nums[i];
        }
    }
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> ans;
        long long int sum = 0;

        if (nums.size() < 4) {
            return res;
        }

        sort(nums.begin(), nums.end());
        solve(nums, target, res, ans, sum, 0);
        return res;
    }
};
// @lc code=end

