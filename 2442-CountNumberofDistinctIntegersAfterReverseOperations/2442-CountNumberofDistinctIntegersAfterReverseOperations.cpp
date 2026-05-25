// Last updated: 5/25/2026, 9:48:42 AM
1class Solution {
2public:
3    bool checkIfExist(vector<int>& arr) {
4        
5        unordered_set<int> s;
6
7        for (int num : arr) {
8
9            if (s.count(2 * num) || 
10               (num % 2 == 0 && s.count(num / 2))) {
11                return true;
12            }
13
14            s.insert(num);
15        }
16
17        return false;
18    }
19};