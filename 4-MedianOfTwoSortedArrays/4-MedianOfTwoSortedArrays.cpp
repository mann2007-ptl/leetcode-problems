// Last updated: 7/17/2026, 4:28:27 PM
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;

        for (int x : nums1)
            res.push_back(x);

        for (int x : nums2)
            res.push_back(x);

        sort(res.begin(), res.end());

        int n = res.size();

        if (n % 2 == 0)
            return (res[n / 2 - 1] + res[n / 2]) / 2.0;

        return res[n / 2];
    }
};