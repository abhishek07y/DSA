class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int y=-1;
        int x=-1;
        int mx = *max_element(nums.begin(), nums.end());
        int mi = *min_element(nums.begin(), nums.end());
       for(int i = 0; i < n; i++) {
            if(nums[i] == mx){
                y = i;
            }

            if(nums[i] == mi){
                x = i;
            }
        }
        int l=max(x,y)+1;
        int r=n-min(x,y);
        int b=min(x, y) + 1 + n - max(x, y);
        return min({l,r,b});
        
        
        
        
                 

            
        
        
        
    }
};