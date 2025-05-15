class Solution {
public:
    int MOD = 1e9 + 7;

    int lengthAfterTransformations(string s, int t) {
        vector<long long> count(26, 0);

        // Initial count of characters
        for (char ch : s)
            count[ch - 'a']++;

        for (int step = 0; step < t; ++step) {
            vector<long long> nextCount(26, 0);
            for (int i = 0; i < 26; ++i) {
                if (i == 25) { // 'z'
                    nextCount[0] = (nextCount[0] + count[25]) % MOD; // 'a'
                    nextCount[1] = (nextCount[1] + count[25]) % MOD; // 'b'
                } else {
                    nextCount[i + 1] = (nextCount[i + 1] + count[i]) % MOD;
                }
            }
            count = nextCount;
        }

        long long total = 0;
        for (long long c : count)
            total = (total + c) % MOD;

        return (int)total;
    }
};
