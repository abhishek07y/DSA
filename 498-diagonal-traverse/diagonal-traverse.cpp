class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
       int n=mat.size(); // number of row
       int m=mat[0].size(); // number of column
       vector<int> ans;

        map<int, vector<int>> mp;
        for(int i =0 ;i<n;i++){
            for(int j=0;j<m;j++){
                mp[i+j].push_back(mat[i][j]);

            }
        }
        for(auto it:mp){
            if(it.first %2==0){
                reverse(it.second.begin(),it.second.end());
            }
            for(int x :it.second){
                ans.push_back(x);
            }



            }
        
            
        // }
        // for( int it:mp){
        //     ans.push_back(it.second);
        // }
        
        
        return ans;
        
    }
};