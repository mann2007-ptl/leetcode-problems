// Last updated: 4/7/2026, 10:38:28 AM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        // for(int i=0; i<n; i++){
        //     if(nums[i]==0){
        //         for(int j=i+1; j<n; j++){
        //             if(nums[j]!=0){
        //                 nums[i]=nums[j];
        //                 nums[j]=0;
        //                 break;
        //             }
                    
        //         }
        //     }
        // }

        //two pointer
        int i=0;
        int j=1;
        while(j<n){
            if(nums[i]==0 && nums[j]==0){
                j++;
            }
            else if(nums[i]==0 && nums[j]!=0){
                nums[i]=nums[j];
                nums[j]=0;
                i++;
                j++;
            }
            else{
                j++;
                i++;
            }
        }
    }
};