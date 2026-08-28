class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
        int rows = arr.size();
        int cols = arr[0].size();
        vector<int>ans;
        for(int i=0 ;i<rows;i++){
            int sum=0;
            
            for(int j=0 ;j<cols;j++){
                sum=sum+arr[i][j];
            }
            ans.push_back(sum);
        }
        return *max_element(ans.begin(), ans.end());
        
    }
};