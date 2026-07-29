class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini=nums[0];
        // int difference=0;
        int target =0;
        for(int i =0;i<nums.size();i++){
            int diffrence=nums[i]-mini;
            target = max(target,diffrence);
            mini=min(mini,nums[i]);
            
        }
        if(target>0){
            return target;
        }
        else{
            return -1;
        }
        
    }
};