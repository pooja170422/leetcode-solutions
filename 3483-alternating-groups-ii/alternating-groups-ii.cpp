class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        for (int i = 0; i < k - 1; i++) {
            colors.push_back(colors[i]);
        }
        int N = colors.size();
        int i = 0;
        int j = 1;
        int result = 0;
        while (j < N) {
            if (colors[j] == colors[j - 1]) {
                i = j;
                j++;
                continue;
            } else if (colors[j] != colors[j - 1]) {
                if ((j - i + 1) == k) {
                    result++;
                    i++;
                }
                j++;
            }
            
        }
        return result;
    }
};