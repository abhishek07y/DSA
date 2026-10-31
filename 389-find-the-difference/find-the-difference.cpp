class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(int i=0;i<n;i++){
            freq1[s[i]-'a']++;
        }
        for(int i=0;i<m;i++){
            freq2[t[i]-'a']++;
        }
        for(int i=0;i<freq1.size();i++){
            if(freq1[i]!=freq2[i]){
                return i+'a';
            }
        }
        return 0;
    }
};