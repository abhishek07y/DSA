class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>num1;
        vector<int>num2;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){    
            maxi = max(maxi, nums[i]);
            num1.push_back(maxi);
            
        }
        for (int i=n-1;i>=0;i--){
            mini=min(mini,nums[i]);
            num2.push_back(mini);
            
        }
        reverse(num2.begin(), num2.end());
        for(int i=0;i<n;i++){
            if(num1[i]-num2[i]<=k){
                return i;
            }
        }
        return -1;
        
    }
};