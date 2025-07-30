class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int maxlen=0;
        unordered_map<int,int>mpp;
        while(r< s.size()){
            if(mpp.find(s[r])!=mpp.end() and mpp[s[r]]>=l){
                l=mpp[s[r]]+1;

            }
            maxlen=max(maxlen,r-l+1);
            mpp[s[r]]=r;
            r++;
        }
        return maxlen;


        
    }
};