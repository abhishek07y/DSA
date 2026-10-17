class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size();
        int max=INT_MIN;
        int min=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]<min){
                min=nums[i];
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=max &&nums[i]!=min){
                return nums[i];
                break;
            }
        }
        return -1;
    }
};