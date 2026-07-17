// Last updated: 7/17/2026, 4:23:45 PM
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int , int> newMap;
        vector<int> res;

        for(int i=0;i<nums.size();i++){
            if(newMap.find(nums[i]) != newMap.end()){
                res.push_back(nums[i]);
            }
            else{
                newMap[nums[i]]=1;
            }
        }
        return res;
    }
};