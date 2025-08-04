class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0;
        int j=0;
        int n=fruits.size();
        unordered_map<int,int>mpp;
        int result=0;
        while(j<n){
            mpp[fruits[j]]++;

            if(mpp.size()>2){
                mpp[fruits[i]]--;
                if(mpp[fruits[i]]==0){
                     mpp.erase(fruits[i]);
                }
               
                i++;

            }
            
            result=max(result, j-i+1);
            j++;


        }
        return result;
    }
};