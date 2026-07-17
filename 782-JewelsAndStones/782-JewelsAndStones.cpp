// Last updated: 7/17/2026, 4:26:53 PM
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;

        for(char s : stones){
            for(char j : jewels){
                if(s==j){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};