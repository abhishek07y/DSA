class Solution {
public:
    int findMin(vector<int>& nums) {
        int low =0;
        int n = nums.size();
        int ans=INT_MAX;
        int high = n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<ans){
                ans=nums[mid];
            }
            if(nums[mid]>=nums[high]){
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }

        }
        return ans;
        
    }
};