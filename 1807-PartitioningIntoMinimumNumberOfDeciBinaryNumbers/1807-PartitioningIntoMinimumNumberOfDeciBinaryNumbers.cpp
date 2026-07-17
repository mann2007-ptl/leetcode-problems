// Last updated: 7/17/2026, 4:26:01 PM
class Solution {
public:
    int minPartitions(string n) {
        int maxDigit = 0;

        for(char value : n){
            maxDigit = max(maxDigit , value - '0');
        }
        return maxDigit;
    }
};