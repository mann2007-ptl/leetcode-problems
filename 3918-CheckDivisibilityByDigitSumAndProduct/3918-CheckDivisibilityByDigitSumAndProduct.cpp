// Last updated: 7/17/2026, 4:23:34 PM
class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int temp = n;

        while (temp > 0) {
            int digit = temp % 10;
            sum += digit;
            product *= digit;
            temp /= 10;
        }

        int result = sum + product;

        return n % result == 0;
    }
};