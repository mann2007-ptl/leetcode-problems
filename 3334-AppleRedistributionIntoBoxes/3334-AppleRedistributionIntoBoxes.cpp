// Last updated: 7/17/2026, 4:24:02 PM
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total = 0;

        for(int i=0;i<apple.size();i++){
            total = total + apple[i];
        }

        sort(capacity.begin(),capacity.end());
        reverse(capacity.begin(),capacity.end());

        int boxes = 0;

        for(int i=0;i<capacity.size();i++){
            total = total - capacity[i];
            boxes++;

            if(total <= 0){
                break;
            }
        }

        return boxes;
    }
};