class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int cnt=numBottles;
       
        while(true){
            int num1=numBottles/numExchange;
            int num2=numBottles%numExchange;
            cnt+=num1;
            if(num1+num2< numExchange){
                return cnt;
            }
            else{
                numBottles=num1+num2;
            }
        }
        
    }
};