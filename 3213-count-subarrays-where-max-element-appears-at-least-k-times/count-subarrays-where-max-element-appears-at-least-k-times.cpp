class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=*max_element(nums.begin(),nums.end());
        long long ans=0;
        int cnt=0;
        int left=0;
        for(int right=0;right<n;right++){
            if(nums[right]==maxi) cnt++;

            while(cnt>=k){
                ans+=n-right;
                if(nums[left]==maxi) cnt--;
                left++;
            }
        }
        return ans;
        
    }
};