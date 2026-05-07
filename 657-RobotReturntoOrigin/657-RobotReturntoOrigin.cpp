// Last updated: 5/7/2026, 8:59:38 AM
1class Solution {
2public:
3    bool judgeCircle(string moves) {
4      int x = 0;
5      int y=0;
6
7      for(char move : moves){
8        if(move == 'U'){
9            y++;
10        }
11        else if(move == 'D'){
12            y--;
13        }
14        else if(move == 'L'){
15            x--;
16        }
17        else{
18            x++;
19        }
20      }
21
22      return (x==0 && y==0);
23    }
24};