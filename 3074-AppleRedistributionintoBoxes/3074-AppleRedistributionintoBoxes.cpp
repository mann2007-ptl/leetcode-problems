// Last updated: 3/14/2026, 10:41:34 PM
1class Solution {
2public:
3    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
4        int total = 0;
5
6        for(int i=0;i<apple.size();i++){
7            total = total + apple[i];
8        }
9
10        sort(capacity.begin(),capacity.end());
11        reverse(capacity.begin(),capacity.end());
12
13        int boxes = 0;
14
15        for(int i=0;i<capacity.size();i++){
16            total = total - capacity[i];
17            boxes++;
18
19            if(total <= 0){
20                break;
21            }
22        }
23
24        return boxes;
25    }
26};