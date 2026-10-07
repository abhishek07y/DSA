class Solution {
public:
    int minimizedStringLength(string s) {
        int n=s.size();
        set<char>st;
        for(char ch : s){
            st.insert(ch);
        }
        return st.size();
        
        
    }
};