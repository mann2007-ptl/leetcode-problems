// Last updated: 6/7/2026, 9:48:48 PM
1class Solution {
2public:
3    int totalMoney(int n) {
4       int money = 0;
5       int monday=1;
6
7       while(n>0){
8        int day = monday;
9
10        for(int i=1;i<=7 && n>0;i++){
11            money+=day;
12            day++;
13            n--;
14        }
15        monday++;
16       }
17
18       return money;
19    }
20}; 