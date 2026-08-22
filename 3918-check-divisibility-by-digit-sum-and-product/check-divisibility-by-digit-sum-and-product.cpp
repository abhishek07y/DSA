class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int temp=n;
        while(temp>0){
            int m= temp%10;
            sum=sum+m;
            product=product*m;
            temp=temp/10;

        }
        int x =sum+product;
        if(n%x!=0){
            return false;
        }
        return true;;
        
    }
};