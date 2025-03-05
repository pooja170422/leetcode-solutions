#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& arr) {
        int cnt=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]> arr[(i+1)%n]){
                cnt++;
            }
        }
        if(cnt<=1){
            return true;
        }
        else{
            return false;
        }
    }
};
