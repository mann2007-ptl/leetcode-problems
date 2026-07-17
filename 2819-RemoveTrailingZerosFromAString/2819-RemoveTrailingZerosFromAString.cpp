// Last updated: 7/17/2026, 4:24:23 PM
class Solution {
public:
    string removeTrailingZeros(string num) {
        for(int i = size(num)-1; i >= 0; i--) {
            if(num[i] == '0') {
                num = num.substr(0, i);
            }
            else {
                break;
            }
        }
        return num;
    }
};