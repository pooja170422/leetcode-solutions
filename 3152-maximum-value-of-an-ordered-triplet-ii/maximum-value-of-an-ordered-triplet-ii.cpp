class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        vector<int>leftmax(n),rightmax(n);
        for(int i=1;i<n;i++){
            leftmax[i]=max(leftmax[i-1],nums[i-1]);
            rightmax[n-1-i]=max(rightmax[n-i],nums[n-i]);
        }

       long long result=0;
       for(int j=1;j<n-1;j++){
        result=max(result,(long long)(leftmax[j]-nums[j])*rightmax[j]);
       } 
       return result;
       
       
    }
};