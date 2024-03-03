/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
        int removeElement(vector<int>& nums, int val) {
        // Two pointer technique to remove elements equal to val
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            if (nums[left] == val) {
                // Swap the current element with the last element
                swap(nums[left], nums[right]);
                // Decrement the right pointer as the last element is now checked
                right--;
            } else {
                // Move the left pointer forward if the current element is not equal to val
                left++;
            }
        }
        // Return the number of elements in nums which are not equal to val
        return left;
        
    }
};
// @lc code=end

