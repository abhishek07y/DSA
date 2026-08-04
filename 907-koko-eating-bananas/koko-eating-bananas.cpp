class Solution {
public:
    long long  Total(vector<int>piles,int hour){
         long long totalhour=0;
        for(int i=0;i<piles.size();i++){
            totalhour+=ceil((double)piles[i]/hour);
        }
        return totalhour;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
       int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            // int time=Total(piles,mid);
            if(Total(piles,mid)<=h){
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