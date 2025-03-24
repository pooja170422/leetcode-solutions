class Solution {
public:
    bool isprime(int num){
        if(num<2){
            return false;
        }
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int> pnum;
        for (int i = left; i <= right; i++) {
            if (isprime(i)) {
                pnum.push_back(i); // Fix: Push 'i' instead of 'left'
            }
        }

        if (pnum.size() < 2) return {-1, -1}; 

        int mindiff = INT_MAX;
        vector<int> result = {-1, -1};

        for (int i = 1; i < pnum.size(); i++) {
            int diff = pnum[i] - pnum[i - 1];
            if (diff < mindiff) {
                mindiff = diff;
                result = {pnum[i - 1], pnum[i]};
            }
        }
        return result;
    }
};