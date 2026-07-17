// Last updated: 7/17/2026, 4:27:59 PM
class Solution {
public:
    string reverseWords(string s) {
        vector<string> store;
        string word = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                if (!word.empty()) {
                    store.push_back(word);
                    word = "";
                }
            }
        }

        if (!word.empty()) {
            store.push_back(word);
            word = "";
        }

        reverse(store.begin(), store.end());

        word = "";
        for (int i = 0; i < store.size(); i++) {
            word = word + store[i];

            if (i != store.size() - 1) {
                word = word + " ";
            }
        }
        return word;
    }
};