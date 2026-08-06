class Solution {
public:
 int mul(int x){
        int mul=1;
        int y=0;
        while(x>0){
            int y=x%10;
            x=x/10;
            mul=mul*y;
        }
            return mul;
        }
    int smallestNumber(int n, int t) {
       
       
        while(true){
            if(mul(n)%t==0){
                return n;
                
            }
            n++;
            
            
            

        }
        
        
        
        
        
        
        
        

        
        
    }
};