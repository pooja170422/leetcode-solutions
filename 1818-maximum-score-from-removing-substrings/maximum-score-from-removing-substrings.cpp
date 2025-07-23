class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char> st;
        int sum = 0;
        if (y > x) {
            for (char c : s) {

                if (!st.empty() and st.top() == 'b' and c == 'a') {
                    st.pop();
                    sum += y;
                } else {
                    st.push(c);
                }
            }
            string res = "";
            while (!st.empty()) {
                res += st.top();
                st.pop();
            }
            reverse(res.begin(), res.end());
            for (char c : res) {
                if (!st.empty() and st.top() == 'a' and c == 'b') {
                    st.pop();
                    sum += x;
                } else {
                    st.push(c);
                }
            }

        } else {
            for (char c : s) {

                if (!st.empty() and st.top() == 'a' and c == 'b') {
                    st.pop();
                    sum += x;
                } else {
                    st.push(c);
                }
            }
            string res = "";
            while (!st.empty()) {
                res += st.top();
                st.pop();
            }
            reverse(res.begin(), res.end());
            for (char c : res) {

                if (!st.empty() and st.top() == 'b' and c == 'a') {
                    st.pop();
                    sum += y;
                } else {
                    st.push(c);
                }
            }
        }
        return sum;
    }
};