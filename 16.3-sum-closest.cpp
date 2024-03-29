/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
#include <bits/stdc++.h>
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int diff = INT_MAX;
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            int start= i+1;
            int end = nums.size()-1;
            while(start<end){
                if(nums[i]+nums[start]+nums[end]==target){
                    return target;
                }
                else if(abs(nums[i]+nums[start]+nums[end]-target)<diff){
                    diff=abs(nums[i]+nums[start]+nums[end]-target);
                    ans=nums[i]+nums[start]+nums[end];
                }
                if(nums[i]+nums[start]+nums[end]>target){
                    end--;
                }
                else{
                    start++;
                }
            }
        } 
        return ans;
    }
};
// @lc code=end

