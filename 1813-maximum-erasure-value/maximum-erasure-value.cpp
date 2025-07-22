class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {

        unordered_map<int, int> mpp;
        vector<int> prefix(nums.size() , 0);
        prefix[0]=nums[0];

        // Build prefix sum
        for (int i = 1; i < nums.size(); i++) {
            prefix[i ] = prefix[i-1] + nums[i];
        }

        int i = 0, maxSum = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (mpp.find(nums[j]) != mpp.end() && mpp[nums[j]] >= i) {
                i = mpp[nums[j]] + 1;
            }

            mpp[nums[j]] = j;
            int currSum = (i > 0) ? prefix[j] - prefix[i - 1] : prefix[j];
            maxSum = max(maxSum, currSum);
        }

        return maxSum;
    }
};