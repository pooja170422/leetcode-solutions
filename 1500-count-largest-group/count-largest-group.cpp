class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int>mpp;
        for(int i=1;i<=n;i++){
            int num=i;
            int sum=0;
            while(num>0){
                sum+=num%10;
                num=num/10;
            }
            mpp[sum]++;
        }
        int maxi=INT_MIN;
        for(auto it:mpp){
            if(it.second>maxi){
                maxi=it.second;
            }

        }
        int cnt=0;
        for(auto it:mpp){
            if(it.second==maxi){
                cnt++;
            }
        }
        return cnt;
        
    }
};