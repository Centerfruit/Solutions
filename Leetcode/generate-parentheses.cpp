//  https://leetcode.com/problems/generate-parentheses


class Solution {
public:
    void findallseq(vector<string> &ans, string s, int open, int close) {
      if (close < open)                                                                 // at any instance no of '(' used cant be < then no of ')' . 
        return; 
      if (!open and !close) {                                                         // both zero means size fulfilled
        ans.push_back(s); 
        return;
      }
      if (open)                                                                      // add '('
        findallseq(ans, s + "(", open - 1, close); 
      if (close)                                                                     // add ')'
        findallseq(ans, s + ")", open, close - 1);           
    }
    vector<string> generateParenthesis(int n) {
      vector<string> ans;
      findallseq(ans, "", n, n); 
        return ans; 
    }
};
