// Last updated: 3/6/2026, 2:08:56 PM
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res;

        for(int i=0;i<size(nums);i++){
            int count = 0;

            for(int j=0;j<size(nums);j++){
                if(j!=i && nums[i]>nums[j]){
                    count++;
                }
            }
            res.push_back(count);
        }
        return res;
    }

};