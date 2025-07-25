class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int>st;
        int sum=0;
        int maxneg=INT_MIN;

        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if(num<=0){
                maxneg=max(maxneg,num);
            }
            else{
                if(!st.count(num)){
                    st.insert(num);
                    sum+=num;
                }
            }
        }
        if(sum==0){
            return maxneg;
        }
        else{
            return sum;
        }
    }
};