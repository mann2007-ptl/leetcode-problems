// Last updated: 7/17/2026, 4:26:28 PM
class Solution {
public:
    int numberOfSteps(int num) {
     int steps = 0;

     while(num > 0){
        if(num % 2 == 0){
            num = num / 2;
            steps++;
        }
        else{
            num = num - 1;
            steps++;
        }
     }
     return steps;
    }
};