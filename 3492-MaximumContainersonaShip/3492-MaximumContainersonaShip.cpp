// Last updated: 3/15/2026, 8:30:52 PM
1class Solution {
2public:
3    int maxContainers(int n, int w, int maxWeight) {
4       int value1 = n*n;
5       int value2 = maxWeight/w;
6
7       if(value1 < value2){
8        return value1;
9       } 
10       else{
11        return value2;
12       }
13    }
14};