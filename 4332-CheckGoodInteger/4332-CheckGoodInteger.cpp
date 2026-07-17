// Last updated: 7/17/2026, 4:23:19 PM
class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum = 0;
        int mul = 1;
        while(n>0){
           int digit = n % 10;
           sum+=digit;
           mul+=digit*digit;
           n=n/10;
        }
         int ans = mul - sum;
        return ans>=50;
    }
};