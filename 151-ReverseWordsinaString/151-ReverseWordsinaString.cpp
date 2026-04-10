// Last updated: 4/10/2026, 3:53:38 PM
1class Solution {
2public:
3    string reverseWords(string s) {
4        vector<string> store;
5        string word = "";
6
7        for (int i = 0; i < s.size(); i++) {
8            if (s[i] != ' ') {
9                word += s[i];
10            } else {
11                 if (!word.empty()) {   
12                    store.push_back(word);
13                    word = "";
14                }
15            }
16        }
17
18        if (!word.empty()) {
19            store.push_back(word);
20            word = "";
21        }
22
23        reverse(store.begin(), store.end());
24
25       word="";
26        for (int i = 0; i < store.size(); i++) {
27            word = word + store[i];
28
29            if (i != store.size() - 1) {
30                word = word + " ";
31            }
32        }
33        return word;
34    }
35};