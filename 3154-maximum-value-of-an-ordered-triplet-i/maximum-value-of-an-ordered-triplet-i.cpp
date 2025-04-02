class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        long long ans=INT_MIN;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    long long sub=nums[i]-nums[j];
                    long long num=sub*nums[k];
                    ans=max(ans,num);
                }
            }
        }
        if(ans<0){
            return 0;
        }
        else{
            return ans;
        }
        
    }
};