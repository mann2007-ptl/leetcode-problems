// Last updated: 7/17/2026, 4:24:40 PM
class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        for(int i=0;i<=num;i++){
            int n = i;
            int rev = 0;

            while(n){
                rev = rev*10 + n % 10;
                n=n/10;
            }

            if(i+rev == num){
                return true;
            }
        }
        return false;
    }
};