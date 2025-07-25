class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
        vector<int>ans(nums1.size(),-1);
        for(int i=0;i<nums2.size();i++){
            mpp[nums2[i]]=i;
        }
        for(int i=0;i<nums1.size();i++){
            int num=nums1[i];
            int pos=mpp[num]+1;
            while(pos<nums2.size()){
                if(nums2[pos]>num){
                    ans[i]=nums2[pos];
                    break;
                }
                pos++;
            }

        }
        return ans;
        
    }
};