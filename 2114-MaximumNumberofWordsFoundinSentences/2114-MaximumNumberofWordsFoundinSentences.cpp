// Last updated: 5/10/2026, 9:15:01 AM
1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4        int maxWord = 0;
5
6        for(int i = 0; i < sentences.size(); i++){
7            int count = 1;
8
9            for(int j = 0; j < sentences[i].size(); j++){
10                if(sentences[i][j] == ' '){
11                    count++;
12                }
13            }
14
15            if(count > maxWord){
16                maxWord = count;
17            }
18        }
19
20        return maxWord;
21    }
22};