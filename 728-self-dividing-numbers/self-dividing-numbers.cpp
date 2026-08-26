class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> ans;
        for(int i=left; i<=right ;i++){
            int x=i;
            int valid=1;
            while(x>0){
                int digit =x%10;
                if(digit==0 || i%digit!=0){
                    valid=0;
                    break;
                }
                x=x/10;
            }
            if(valid==1){
                    ans.push_back(i);
                }
        }
        return ans;
    }
};