class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int missing = 0;
        for (int i = 1 ;i <= n; i++) {
            missing += i;
        }
        for (int i = 0 ;i < n; i++) {
            missing -= nums[i];
        }
        return missing;
    }
};