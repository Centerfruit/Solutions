// https://leetcode.com/problems/house-robber

class Solution {
public:
    int dp[101];
    int rec(vector<int>& nums, int index) {
        if (index >= nums.size()) {
            return 0; 
        }
        if (dp[index] != -1)     // if found then return it 
            return dp[index];
        dp[index] = max(nums[index] + rec(nums, index + 2), rec(nums, index + 1));
        // max of cur (y/n)
        return dp[index]; 
    }
    int rob(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return rec(nums, 0); 
    }
};
