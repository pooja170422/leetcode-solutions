class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mpp;
        int n=nums.size();
        for(int x:nums){
            mpp[x]++;
            if(mpp[x]==2){
                ans.push_back(x);

            }
        }
        return ans;
        
    }
};