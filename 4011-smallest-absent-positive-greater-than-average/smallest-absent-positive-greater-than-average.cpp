class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        unordered_set<int> st;

        for (int x : nums) {
            sum += x;
            st.insert(x);
        }

        int avg = sum / n;
        int candidate = floor(avg) + 1;   
        candidate = max(candidate, 1);         

        while (st.count(candidate)) {
            candidate++;
        }
        return candidate;

    }
};