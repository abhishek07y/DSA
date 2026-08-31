class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n =nums.size();
        int x=0;
        int y=0;
        for(int i=0 ;i<n-1 ;i++){
            if(nums[i]<=nums[i+1]){
                x=x+1;
            }
        }
        if(x==n-1){
            return true;
        }
        for(int i=0 ;i<n-1 ;i++){
            if(nums[i]>=nums[i+1]){
                y=y+1;
            }
        }
        if(y==n-1){
            return true;
        }
        return false;
    }
};