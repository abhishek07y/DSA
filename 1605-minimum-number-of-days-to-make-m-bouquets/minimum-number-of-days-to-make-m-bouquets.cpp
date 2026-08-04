class Solution {
public:
    int possible (vector<int>bloomDay , int day,int m ,int k){
        int count=0;
        int bloom=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                count++;
                if(count==k){
                    bloom+=floor(count/k);
                    count=0;
                }

            }
            else{
                
            
                count=0;
            }
            // bloom += count / k;
            
        }
        return bloom;
        

    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=INT_MAX;
        if ((long long)m * k > bloomDay.size()){
            return -1;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            // return mid;
            if(possible(bloomDay ,mid , m , k)>=m){
                ans=mid;
                high=mid-1;
                
                
            }
            else{
                // ans=mid;
                low=mid+1;
                
                // ans=mid;
            }
        }

        return ans;
        

        
    }
};