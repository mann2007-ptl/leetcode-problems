// Last updated: 5/14/2026, 9:41:05 AM
1class Solution {
2public:
3    int numJewelsInStones(string jewels, string stones) {
4        
5        int count = 0;  // stores how many jewels we found
6        
7        // Loop through each stone
8        for (char s : stones) {
9            
10            // For each stone, check all jewels
11            for (char j : jewels) {
12                
13                // If stone matches a jewel
14                if (s == j) {
15                    count++;   // increase count
16                    
17                    break;     // stop checking more jewels for this stone
18                }
19            }
20        }
21        
22        return count;  // return final answer
23    }
24};