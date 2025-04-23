class Solution {
public:
    string removeOuterParentheses(string s) {
        
        string ans="";
        stack<int>st;
        for(int i=0;i<s.length();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(!st.empty()  and  s[i]==')' and st.top()=='(' ){
                
                st.pop();
                if(!st.empty()){
                     ans+=s[i];
                }
            }
            else {
                st.push(s[i]);
                ans+=s[i];
            }
            
            
        }
        return ans;
        
    }
};