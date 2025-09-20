class Solution {
public:
    bool areNumbersAscending(string s) {
        int i=0;
        int n=s.size();
        int prev=-1;
        while(i<n ){
            if(isdigit(s[i])){
                int num=0;
                while(i<n and isdigit(s[i])){
                    num=num*10+(s[i]-'0');
                    i++;
                }
                if(num<=prev){
                    return false;
                }
                else{
                    prev=num;
                }
            }
            else{
                i++;
            }
        }
        return true;
        
    }
};