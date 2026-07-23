// Last updated: 7/23/2026, 2:50:16 PM
1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
4        int max = candies[0];
5
6        for (int i = 1; i < candies.size(); i++) {
7            if (candies[i] > max) {
8                max = candies[i];
9            }
10        }
11
12        vector <bool> result;
13
14        for(int i=0;i<candies.size();i++){
15            if(candies[i]+extraCandies >= max){
16                result.push_back(true);
17            }
18            else{
19                result.push_back(false);
20            }
21        }
22        return result;
23    }
24};