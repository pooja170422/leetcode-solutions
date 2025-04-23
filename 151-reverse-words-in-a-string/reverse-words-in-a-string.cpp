class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n=s.size();
        int i=0;
        int l=0;
        int r=0;
        while(i<n){
            while(s[i]!=' ' and i<n){
                s[r]=s[i];
                i++;
                r++;
            }
            if(l<r){
                reverse(s.begin()+l,s.begin()+r);
                s[r]=' ';
                r++;
                l=r;
            }
           i++;

        }
        return s.substr(0,r-1);

        
    }
};