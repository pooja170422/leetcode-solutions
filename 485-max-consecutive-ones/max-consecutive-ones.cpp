class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max1=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                sum++;
            }
            else{
                max1=max(max1,sum);
                sum=0;
            }

        }
        return max(max1,sum);
        
    }
};