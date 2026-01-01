// Last updated: 3/6/2026, 2:08:39 PM
class Solution {
public:
    int smallestEvenMultiple(int n) {
       if(n%2==0){
        return n;
       } 
       else{
        return n*2;
       }
    }
};