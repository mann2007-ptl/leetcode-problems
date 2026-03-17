// Last updated: 3/17/2026, 11:01:13 AM
1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4        int maxWords = 0;
5
6        for(int i=0;i<sentences.size();i++){
7            int count = 1;
8
9            for(int j=0;j<sentences[i].size();j++){
10                if(sentences[i][j] == ' '){
11                    count++;
12                }
13            }
14            if(count>maxWords){
15                maxWords = count;
16            }
17        }
18
19        return maxWords;
20    }
21};