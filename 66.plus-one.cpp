/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        int n = digits.size();
        if(digits[n-1]<9){
            digits[n-1]=digits[n-1]+carry;
            return digits;
        }
        for(int i=n-1;i>=0;i--){
            if(digits[i]==9  && carry == 1){
                digits[i]=0;
                carry=1;
            }
            else{
                digits[i]=digits[i]+carry;
                carry=0;
            }
            if(i==0 && carry==1){
                digits.insert(digits.begin(),1);
            }
        }
        return digits;
        
    }
};
// @lc code=end

