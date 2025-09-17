class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        int i = 0, j = 0;

        // merge two sorted arrays
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                nums.push_back(nums1[i]);
                i++;
            } else {
                nums.push_back(nums2[j]);
                j++;
            }
        }

        while (i < nums1.size()) {
            nums.push_back(nums1[i]);
            i++;
        }
        while (j < nums2.size()) {
            nums.push_back(nums2[j]);
            j++;
        }

        int n = nums.size();
        if (n % 2 == 0) {
            int m = n / 2;
            return ((double)nums[m - 1] + nums[m]) / 2.0;
        } else {
            return nums[n / 2];
        }
    }
};
