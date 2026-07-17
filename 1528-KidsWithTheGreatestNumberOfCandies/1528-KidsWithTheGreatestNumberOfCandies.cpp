// Last updated: 7/17/2026, 4:26:21 PM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = candies[0];

        for(int i=1;i<candies.size();i++){
            if(candies[i]>max){
                max=candies[i];
            }
        }

        vector<bool> result;

        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies >= max){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};