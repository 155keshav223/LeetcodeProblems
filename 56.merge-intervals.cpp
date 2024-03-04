/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

// @lc code=start
#include <vector>
#include <algorithm>

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(),intervals.end());
        if (intervals.empty()) {
            return res;
        }
        res.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); ++i) {
            bool merged = false;
            for (int j = 0; j < res.size(); ++j) {
                if (res[j][1] >= intervals[i][0] && res[j][0] <= intervals[i][1]) {
                    res[j][0] = min(res[j][0], intervals[i][0]);
                    res[j][1] = max(res[j][1], intervals[i][1]);
                    merged = true;
                    break;
                }
            }
            if (!merged) {
                res.push_back(intervals[i]);
            }
        }

        return res;
    }
};

// @lc code=end

