class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low =1;
        int n=nums.size();
        int high=n-2;
        if(n==1){
            return nums[0];
        }
        else if (nums[low]!=nums[low-1]){
            return nums[low-1];
        }
        else if (nums[high]!=nums[high+1]){
            return nums[high+1];
        }
         
        while(low<=high){
           int  mid= low + (high - low)/2;
           
           
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
                return nums[mid];
            }
            else if((mid%2==1 && nums[mid-1]==nums[mid]) || (mid%2==0 && nums[mid+1]==nums[mid])){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
        
    }
};