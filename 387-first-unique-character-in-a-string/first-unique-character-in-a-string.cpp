class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;
        int n=s.size();
        for(char x:s){
            mp[x]++;
        }
        for(int i=0 ;i<n; i++){
            if(mp[s[i]]==1){
                return i;
                break;
            }
        }
        return -1;
        
    }
};