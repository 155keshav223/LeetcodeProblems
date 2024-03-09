/*
 * @lc app=leetcode id=57 lang=cpp
 *
 * [57] Insert Interval
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
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
        // sort(res.begin(),res.end());
        return  res;
    }
};
// @lc code=end

