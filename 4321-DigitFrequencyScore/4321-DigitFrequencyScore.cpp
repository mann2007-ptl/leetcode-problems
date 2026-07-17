// Last updated: 7/17/2026, 4:23:18 PM
class Solution {
public:
    int digitFrequencyScore(int n) {
        int score = 0;

        while(n>0){
            int digit = n % 10;
            score+=digit;
            n=n/10;
        }
        return score;
    }
};