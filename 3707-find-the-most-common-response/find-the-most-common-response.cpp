class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string,int>mp;
        for(auto& r: responses){
            unordered_set<string>st(r.begin(),r.end());
            for(auto& s:st){
                mp[s]++;
            }

        }
        int maxi=INT_MIN;
        string ans="";
        for(auto& [res,cnt]:mp){
            if(cnt>maxi || (cnt==maxi and res<ans)){
                ans=res;
                maxi=cnt;
            }
        }
        return ans;

        
    }
};