class Solution {
public:
    int solve(vector<int>& nums, int target) {
        vector<unsigned int> dp(target + 1, 0);
        
        dp[0] = 1; 

        for (int i = 1; i <= target; i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i - nums[j] >= 0) {
                    dp[i] += dp[i - nums[j]];
                }
            }
        }
        return dp[target];
    }

    int combinationSum4(vector<int>& nums, int target) {
        return solve(nums, target);
    }
};
