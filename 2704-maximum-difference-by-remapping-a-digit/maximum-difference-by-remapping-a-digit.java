class Solution {
    public int minMaxDifference(int num) {
        String s = String.valueOf(num);
        // System.out.println(s);
        String maxs = "";
        String mins = "" ; 
        int n = s.length();
        char maxr= ' ';
        char minr = ' ';
        for(char c: s.toCharArray())
        {
            if(maxr == ' ')
            {
                if(c!='9') {
                    maxr=c;
                }
            }
            if(minr == ' ')
            {
                if(c != '0') {
                    minr=c;
                    // System.out.println("Came for minr "+ c);
                }
            }
            
        }
        for(char c: s.toCharArray())
        {
            if(maxr == c)
            {
              maxs = maxs+"9";   
            }
            else {
                maxs = maxs + c;
            }

            if(minr == c)
            {
              mins = mins+"0";   
            }
            else {
                mins = mins + c;
            }
        }
        // System.out.println(maxr);
        // System.out.println(minr);
        // System.out.println(maxs);
        // System.out.println(mins);
        return Integer.parseInt(maxs) - Integer.parseInt(mins);
    }
}