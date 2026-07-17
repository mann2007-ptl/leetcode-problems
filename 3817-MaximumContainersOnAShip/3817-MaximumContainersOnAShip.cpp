// Last updated: 7/17/2026, 4:23:39 PM
class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
       int value1 = n*n;
       int value2 = maxWeight/w;

       if(value1 < value2){
        return value1;
       } 
       else{
        return value2;
       }
    }
};