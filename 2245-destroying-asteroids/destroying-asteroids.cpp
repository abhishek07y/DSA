class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& ast) {
        sort(ast.begin(),ast.end());
        int n=ast.size();
        long long sum=mass;
        for(int i=0 ;i<n ; i++){
            if(sum>=ast[i]){
                sum=sum+ast[i];
            }
            else{
                return false;
            }


        }
        return true;


        
    }
};