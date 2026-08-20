// Last updated: 8/20/2026, 3:57:16 PM
1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4        for(int i=0;i<board.size();i++){
5            set<int> row;
6            set<int> col;
7
8            for(int j=0;j<board[i].size();j++){
9                if(isdigit(board[i][j])){
10                    if(row.count(board[i][j])){
11                        return false;
12                    }
13                    else{
14                        row.insert(board[i][j]);
15                    }
16                }
17
18                if(isdigit(board[j][i])){
19                    if(col.count(board[j][i])){
20                        return false;
21                    }
22                    else{
23                        col.insert(board[j][i]);
24                    }
25                }
26            }
27        }
28        for(int box=0;box<9;box++){
29            set<char> boxSet;
30            int startRow = (box/3)*3;
31            int startCol = (box%3)*3;
32            for(int r=0;r<3;r++){
33                for(int c=0;c<3;c++){
34                    int val = board[startRow + r][startCol + c];
35                    if(isdigit(val)){
36                        if(boxSet.count(val)){
37                            return false;
38                        }
39                        boxSet.insert(val);
40                    }
41                }
42            }
43        }
44        return true;
45    }
46};