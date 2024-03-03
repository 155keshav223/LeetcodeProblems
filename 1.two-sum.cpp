/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target,int start){
        for(int  i = start;i <nums.size();i++){
            if(nums[i]==target){
                return  i;
            }
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            int ask = target-nums[i];
            int a = search(nums,ask,i+1);
            if(a!=-1){
                result.push_back(i);
                result.push_back(a);
                return result;
            }
        }
        return result;
    }
};
// @lc code=end

