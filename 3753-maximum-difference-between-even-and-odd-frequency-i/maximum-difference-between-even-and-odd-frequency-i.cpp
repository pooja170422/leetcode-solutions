class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mpp;
        for(char c:s){
            mpp[c]++;
        }
        int maxi_odd_freq=INT_MIN;
        int mini_even_freq=INT_MAX;

        for(auto it :mpp){
            if(it.second%2==0 and it.second < mini_even_freq ){
                mini_even_freq=it.second;
            }
            if(it.second%2!=0 and it.second > maxi_odd_freq ){
                maxi_odd_freq=it.second;
            }
        }
        return maxi_odd_freq- mini_even_freq;
    }
};