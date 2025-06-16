class Solution {
    public int maximumDifference(int[] nums) {
        int cmin = Integer.MAX_VALUE;
        int ans = -1;
        for(int i:nums)
        {
            cmin = Math.min(cmin,i);
            if(cmin < i)
            {
                ans = Math.max(ans,i-cmin);
            }
            
            
        }
        return ans;
    }
}