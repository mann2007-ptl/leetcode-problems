// Last updated: 7/17/2026, 4:25:33 PM
class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even, odd, res;

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                even.push_back(nums[i]);
            } else {
                odd.push_back(nums[i]);
            }
        }

        sort(even.begin(), even.end()); 
        sort(odd.begin(), odd.end(), greater<int>()); 

        int j = 0, k = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                res.push_back(even[j++]);
            } else {
                res.push_back(odd[k++]);
            }
        }

        return res;
    }
};