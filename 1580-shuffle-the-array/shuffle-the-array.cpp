class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m =nums.size();
        vector<int> ans;
        int i =0;
        int j =m/2;

       while(j<m || i<m/2){
        ans.push_back(nums[i]);
        ans.push_back(nums[j]);
        i++;
        j++;

       }
       return ans;
        
    }
};