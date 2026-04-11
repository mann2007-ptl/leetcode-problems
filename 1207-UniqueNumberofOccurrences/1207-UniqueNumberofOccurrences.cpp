// Last updated: 4/11/2026, 3:15:46 PM
1class Solution {
2public:
3    bool uniqueOccurrences(vector<int>& arr) {
4
5        sort(arr.begin(),arr.end());
6
7        vector<int> freq;
8        int count = 1;
9
10        for(int i=1;i<arr.size();i++){
11            if(arr[i]==arr[i-1]){
12                count++;
13            }
14            else{
15                freq.push_back(count);
16                count=1;
17            }
18        }
19
20        freq.push_back(count);
21
22        for(int i = 0; i < freq.size(); i++){
23            for(int j = i + 1; j < freq.size(); j++){
24                if(freq[i] == freq[j]){
25                    return false;
26                }
27            }
28        }
29
30        return true;
31    }
32};