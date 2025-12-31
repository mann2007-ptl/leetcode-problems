// Last updated: 3/6/2026, 2:08:17 PM
class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int count = 0;
        for(int i=0;i<size(nums1);i++){
            for(int j=0;j<size(nums2);j++){
                if(nums1[i]%(nums2[j]*k) == 0){
                    count++;
                }
            }
        }
        return count;
    }
};