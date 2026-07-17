// Last updated: 7/17/2026, 4:25:44 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       int length = nums.size();
       vector<int> res(length*2,0);

       for(int i=0;i<length;i++){
        res[i]=nums[i];
        res[i+length] = nums[i];


       }

       return res;
    }
};