class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mpp;
        int luckyint=-1;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        for(auto it :mpp){
            if(it.first==it.second){
                luckyint=max(luckyint,it.first);
            }
        }
        return luckyint;
        
    }
};