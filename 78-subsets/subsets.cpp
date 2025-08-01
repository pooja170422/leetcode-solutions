class Solution {
public:

    void find(int idx,vector<vector<int>>&ans,vector<int>&temp,vector<int>&nums){
        if(idx==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        find(idx+1,ans,temp,nums);
        temp.pop_back();
         find(idx+1,ans,temp,nums);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        find(0,ans,temp,nums);
        return ans;

        
    }
};