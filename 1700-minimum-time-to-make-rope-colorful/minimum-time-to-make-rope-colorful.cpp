class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0;
        int i=0;
        for(int j=1;j<colors.size();j++){
            if(colors[i]==colors[j]){
                if(neededTime[i]<neededTime[j]){
                    ans+=neededTime[i];
                    i=j;

                }
                else{
                    ans+=neededTime[j];
                }

            }
            else{
                i=j;
            }
        }
        return ans;
        
    }
};