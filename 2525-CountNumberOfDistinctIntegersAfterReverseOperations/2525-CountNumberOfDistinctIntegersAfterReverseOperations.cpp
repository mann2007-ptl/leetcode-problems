// Last updated: 7/17/2026, 4:24:41 PM
class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
       set<int> s;

       for(int x : nums){
        s.insert(x);

        int rev = 0;
        int n = x;

        while(n>0){
            rev = rev * 10 + (n%10);
            n=n/10;
        }
        s.insert(rev);
       }
       return s.size();
    }
};