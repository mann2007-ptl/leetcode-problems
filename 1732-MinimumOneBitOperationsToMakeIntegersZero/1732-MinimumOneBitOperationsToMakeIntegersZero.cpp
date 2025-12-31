// Last updated: 3/6/2026, 2:08:49 PM
class Solution {
public:
    int minimumOneBitOperations(int n) {
       int result = 0;

       while(n > 0 ){
       result ^= n;
       n>>=1;
       }
       return result;
    }
};