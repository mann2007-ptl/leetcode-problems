// Last updated: 7/17/2026, 4:27:50 PM
class Solution {
public:
    bool isHappy(int n) {
        
        while(n!=1 && n !=4){
           int sum = 0;

           while(n > 0){
            int digit = n % 10;
            sum = sum + digit*digit;
            n=n/10;
           } 

           n = sum;
        }
       return n==1;
    }
};