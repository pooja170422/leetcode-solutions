class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int >st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int k=st.size();
        int l=0;
        int r=0;
        int ans=0;
        unordered_map<int,int>mpp;
        while(r<n){
            mpp[nums[r]]=r;
            while(mpp.size()==k){
                ans+=n-r;
                if(mpp[nums[l]]==l){
                    mpp.erase(nums[l]);
                }
                l++;

            }
            r++;

        }
        return ans;

        
    }
};