class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int no_of_deck=n*n;
        int cnt=0;
        int totalw=0;
        for(int i=1;i<=no_of_deck;i++){
            totalw=totalw+w;
            if(totalw<=maxWeight){
                cnt++;
            }

        }
        return cnt;

        
    }
};