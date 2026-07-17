// Last updated: 7/17/2026, 4:28:24 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;

        int ans = 0;

        while(left < right){
            int h = min(height[left] , height[right]);
            int w = right - left;

            ans = max(ans , w * h);

            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return ans;
    }
};