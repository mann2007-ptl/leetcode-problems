// Last updated: 7/17/2026, 4:26:40 PM
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> res;
        string first = words[0];

        for(char ch : first){
            bool found = true;

            for(int i=1;i<words.size();i++){
                int pos = words[i].find(ch);

                if(pos==-1){
                    found = false;
                    break;
                }    
                else{
                    words[i].erase(pos,1);
                }
            }

            if(found){
                string temp = "";
                temp+=ch;
                res.push_back(temp);
            }
        }
        return res;
    }
};