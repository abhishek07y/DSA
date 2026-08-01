class Solution {
public:
    int findPeakElement(vector<int>& nums) {
         int low=0;
         int n=nums.size();
         int high=n-1;
         if(n==1){
            return 0;
         }
         else if (nums[0]>nums[1]){
            return 0;
         }
         else if (nums[n-1]>nums[n-2]){
            return n-1;
         }
        
         while(low<=high){
            int mid = low + (high - low) / 2;
            // if(mid==0){
            //     return mid;
            // }
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                return mid;
            }
            else if (nums[mid+1]>nums[mid]){
                low = mid+1;
                
            }
            else{
                high =mid-1;
            }
         }
         return -1;
         
        
    }
        
    
};