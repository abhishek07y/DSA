class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // vector<int>ans;
        int n=nums.size();
        int ans=0;
       int maxi=*max_element(nums.begin(),nums.end());
       int secondmax=INT_MIN;
       int count=0;
       for(int i=0;i<n;i++){
        if(nums[i]==maxi){
            count++;
        }
        if(count==2){
            secondmax=maxi;
        }
        else if (nums[i]>secondmax && nums[i]<maxi){
            secondmax=nums[i];
        }
        // else{
        //     i++;
        // }
       }
       
       ans = (maxi-1)*(secondmax-1);
       return ans;
       
        
    }
   
};