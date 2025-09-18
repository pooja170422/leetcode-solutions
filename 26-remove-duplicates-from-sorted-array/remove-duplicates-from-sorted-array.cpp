class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==nums[k]){
                continue;
            }
            else{
                k++;
                nums[k]=nums[i];
            }

        }
        return k+1;
        
    }
};