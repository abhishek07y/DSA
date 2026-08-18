class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n= nums.size();
        vector<int>ans;
        for(int i=0 ; i<n-2; i++){
            
            int j=i+1;
            while(j<n-1){
                int k=j+1;
                while(k<n){
                    if(nums[i]<nums[j]&& nums[k]<nums[j]){
                        int sum =nums[i]+nums[j]+nums[k];
                        ans.push_back(sum);
                        
                        
                    }
                    k++;

                }  
                  
                j++;

            }
        }
            // j++
         if(ans.empty()) {
            return -1;
        }
        int mn = *min_element(ans.begin(), ans.end());
        
        return mn;
        
    }
};