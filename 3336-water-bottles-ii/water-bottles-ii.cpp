class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int bottlesDrunk=numBottles;
        int emptyBottles = numBottles;
        numBottles = 0;
        while (emptyBottles >= numExchange) {
            emptyBottles = emptyBottles - numExchange;
            numBottles++;
            bottlesDrunk+=numBottles;
            numExchange++;
           
            emptyBottles += numBottles;
            numBottles--;




        }
        return bottlesDrunk;
    }
};