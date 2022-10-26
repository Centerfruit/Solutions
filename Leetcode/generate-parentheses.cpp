//  https://leetcode.com/problems/generate-parentheses


class Solution {
public:
    void findallseq(vector<string> &ans, string s, int open, int close, int size) {
      if (close < open)                                                                 // at any instance no of "(" used cant be < then no of ")" . 
        return; 
      if (s.length() == size * 2) {
        ans.push_back(s); 
        return;
      }
      if (open > 0) 
        findallseq(ans, s + "(", open - 1, close, size); 
      if (close > 0) 
        findallseq(ans, s + ")", open, close - 1, size);           
    }
    vector<string> generateParenthesis(int n) {
      vector<string> ans;
      findallseq(ans, "", n, n, n); 
        return ans; 
    }
};
