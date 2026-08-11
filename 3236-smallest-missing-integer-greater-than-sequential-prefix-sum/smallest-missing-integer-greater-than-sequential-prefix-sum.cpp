class Solution {
public:
    int missingInteger(vector<int>& nums) {
        // vector<int> ans;
        int n=nums.size();
        int sum=nums[0];
        // // int ans=sum;
        // int j=1;
        
        for(int i=1;i<n;i++){
            
            if(nums[i-1]!=nums[i]-1){
                break;   
            }
            else{
                sum=sum+nums[i]; 
            }
            
        }
        int ans=sum;
        // while(find(nums.begin(),nums.end()))
        // for(int i=0;i<n;i++){
        //     if(nums[i]>=sum){
        //         ans=ans+1;
                
                
        //     }
        //     else if(nums[i]!=sum){
        //         ans= ans;
                
        //     }
        // }
        // return ans;
         while(find(nums.begin(), nums.end(), ans) != nums.end()) {
            ans++;
        }

        return ans;
    }
        
    
};