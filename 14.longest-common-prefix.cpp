/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string res = ""; // Initialize the result string to an empty string.
    
    for (int i = 0; i < strs[0].length(); i++) {
        char ch = strs[0][i]; // Get the i-th character of the first string.
        bool match = true; // Initialize a flag for character matching.
        
        for (int j = 1; j < strs.size(); j++) {
            // Check if the i-th character exists in the j-th string and matches the character from the first string.
            if (strs[j].size() < i || ch != strs[j][i]) {
                match = false; // If not, set the match flag to false and exit the loop.
                break;
            }
        }
        
        if (match == false) {
            break; // If match flag is false, break the outer loop.
        } else {
            res += ch; // If match flag is true, add the character to the result string.
        }
    }
    
    return res; // Return the longest common prefix.
}

};
// @lc code=end

