class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int cnt = 0;
            while (num > 0) {
                num = num / 10;
                cnt++;
            }
            if (cnt % 2 == 0) {
                ans++;
            }
        }
        return ans;
    }
};