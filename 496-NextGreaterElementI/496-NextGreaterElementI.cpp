// Last updated: 7/17/2026, 4:27:09 PM
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int found = 0;
        int nextGreater = -1;

        for (int i = 0; i < nums1.size(); i++) {
            found = 0;
            nextGreater = -1;

            for (int j = 0; j < nums2.size(); j++) {
                if (nums2[j] == nums1[i]) {
                    found = 1;
                }
                else if (found && nums2[j] > nums1[i]) {
                    nextGreater = nums2[j];
                    break;
                }
            }

            ans.push_back(nextGreater);
        }

        return ans;
    }
};