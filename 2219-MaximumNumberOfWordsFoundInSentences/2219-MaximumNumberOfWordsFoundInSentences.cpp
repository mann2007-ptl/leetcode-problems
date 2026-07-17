// Last updated: 7/17/2026, 4:25:38 PM
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWord = 0;

        for(int i = 0; i < sentences.size(); i++){
            int count = 1;

            for(int j = 0; j < sentences[i].size(); j++){
                if(sentences[i][j] == ' '){
                    count++;
                }
            }

            if(count > maxWord){
                maxWord = count;
            }
        }

        return maxWord;
    }
};