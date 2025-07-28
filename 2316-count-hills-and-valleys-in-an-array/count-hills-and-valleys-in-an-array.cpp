class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int i=0;
        int j=1;
        while(j<n-1){
            if(nums[i]<nums[j] and nums[j]>nums[j+1]){
                cnt++;
                i=j;
                
            }
            else if(nums[i]>nums[j] and nums[j]<nums[j+1]){
                cnt++;
                i=j;
                
            }
            j++;

        }
        return cnt;
        
    }
};