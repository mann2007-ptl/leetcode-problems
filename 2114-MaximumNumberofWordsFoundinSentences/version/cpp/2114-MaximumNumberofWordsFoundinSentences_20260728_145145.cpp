// Last updated: 7/28/2026, 2:51:45 PM
1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4        int maxWord = 0;
5
6        for(int i=0;i<sentences.size();i++){
7
8            int count = 1;
9
10            for(int j=0;j<sentences[i].size();j++){
11                if(sentences[i][j] == ' '){
12                    count++;
13                }
14            }
15
16            if(count > maxWord){
17                maxWord = count;
18            }
19             
20        }
21
22        return maxWord;
23    }
24};