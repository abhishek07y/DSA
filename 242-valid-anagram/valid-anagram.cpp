class Solution {
public:
    bool isAnagram(string s, string t) {
        
        
        int n=s.size();
        int m =t.size();
        int i=0;
        int j=0;
        int sum=0;
       if (s.size() != t.size()) {
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s==t;





        
    }
};