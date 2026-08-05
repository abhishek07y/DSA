class Solution {
public:
    int Day(vector<int> weight , int mid){
        int day=1;
        int load=0;
        for(int i=0;i<weight.size();i++){
            if(load+weight[i]>mid){
                day=day+1;
                load=weight[i];
            }
            else{
                load=load+weight[i];
            }

        }
        return day;

    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(), weights.end(), 0);
        int ans =0;
        while(low<=high){
           int  mid=low+(high-low)/2;
            if(Day(weights,mid)<=days){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;

        
    }
};