class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end());
        sort(discounts.begin(), discounts.end());
        int n=prices.size();
        int m=discounts.size();
        vector<double>new_price;
        double  sum=0;
        int j=m-1;
        for(int i=n-1 ;i>=0;i--){
            if(j>=0){
                new_price.push_back(prices[i]*(100.0-discounts[j])/100);
                j--;

            }
           
           
           else if (j<0) {
            new_price.push_back(prices[i]);
           }


        }
        for(int k=0;k<new_price.size();k++){
            sum=sum+new_price[k];

        }
        return sum;
        

        
        
    }
};