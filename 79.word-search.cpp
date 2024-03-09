/*
 * @lc app=leetcode id=79 lang=cpp
 *
 * [79] Word Search
 */

// @lc code=start
class Solution {
public:
    void solve(vector<vector<char>>& board, string word,vector<vector<int>> &visited,int i,int j,int k,bool res){
        if(k==word.length()-1){
            return;
        }
        //right
        

        //down

        //left

        //up
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n= board[0].size();
        bool res=false;
        vector<vector<int>> visited(m,vector<int>(n,0));
        int i=0;//x axis
        int j=0;//y axis
        int k=0;//word 
        solve(board,word,visited,i,j,k,res);
        return res;
        
        
    }
};
// @lc code=end

