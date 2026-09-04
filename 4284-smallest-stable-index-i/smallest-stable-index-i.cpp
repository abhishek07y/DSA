class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=0;
        int x=-1;
        for(int i=0 ;i<n;i++){
            maxi = max(maxi, nums[i]);
            int mini = *min_element(nums.begin()+i, nums.end());
            int ans = maxi-mini;
            if(ans<=k){
                x =i;
                break;

            }

        }
        return x;
    }
};