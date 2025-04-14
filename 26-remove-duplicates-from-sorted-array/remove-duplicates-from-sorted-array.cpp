class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int uniqueind=0;
        
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[uniqueind]){
                uniqueind++;
                nums[uniqueind]=nums[i];
            }

        }
        return uniqueind+1;
        
    }
};