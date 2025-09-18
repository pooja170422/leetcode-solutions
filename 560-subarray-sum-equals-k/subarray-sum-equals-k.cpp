class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        unordered_map<int,int>mpp;
        mpp[0]++;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int num=sum-k;
            if(mpp.find(num)!=mpp.end()){
                cnt+=mpp[num];

            }
            mpp[sum]++;
        }
        return cnt;

        
    }
};