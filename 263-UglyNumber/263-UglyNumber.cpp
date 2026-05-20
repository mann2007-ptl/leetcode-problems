// Last updated: 5/20/2026, 10:01:10 AM
1class Solution {
2public:
3    bool isUgly(int n) {
4        if(n<=0){
5            return false;
6        }
7
8        int arr[3] = {2,3,5};
9
10        for(int i=0;i<3;i++){
11            while(n%arr[i]==0){
12                n=n/arr[i];
13            }
14        } 
15
16        return n==1;
17    }
18};