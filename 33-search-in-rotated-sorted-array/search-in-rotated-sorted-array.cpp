class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]==target){
                return m;

            }
            else if(nums[l]<=nums[m]){
                if(nums[l]<=target and target<=nums[m]){
                    h=m-1;
                }
                else{
                    l=m+1;
                }

            }
            else{
                if(nums[m]<=target and target<=nums[h]){
                    l=m+1;;
                }
                else{
                    h=m-1;
                }

            }
        }
        return -1;
        
    }
};