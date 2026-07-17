// Last updated: 7/17/2026, 4:26:04 PM
class Solution {
public:
    string interpret(string command) {
        string ans = "";

        for (int i = 0; i < command.size(); i++) {
            if (command[i] == 'G') {
                ans += "G";
            } else if (command[i] == ')') {
                if (command[i - 1] == '(') {
                    ans += "o";
                } else {
                    ans += "al";
                }
            }
        }
        return ans;
    }
};