class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());
        vector<int> freq(maxi+1,0);
        vector<int>ans;
        int m =freq.size();
        int n= nums.size();
        for(int i=0;i<n;i++){
            freq[nums[i]]=1;
                
            

        }
        for(int j=mini;j<maxi;j++){
            if(freq[j]==0){
                ans.push_back(j);
            }
        }
        return ans;

        
    }
};