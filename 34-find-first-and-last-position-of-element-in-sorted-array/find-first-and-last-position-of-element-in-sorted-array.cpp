class Solution {
public:
    int startpos(vector<int>& nums, int target){
        int l=0;
        int h=nums.size()-1;
        int ans=-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target){
                ans=mid;
                h=mid-1;

            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
    }
    int lastpos(vector<int>& nums, int target){
        int l=0;
        int h=nums.size()-1;
        int ans=-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target){
                ans=mid;
                l=mid+1;

            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=startpos(nums,target);
        int last=lastpos(nums,target);
        return {first,last};

        
    }
};