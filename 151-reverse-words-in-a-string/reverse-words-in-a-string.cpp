
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string word="";
        string ans ="";
        int n = s.length();
        for (int i =0; i<n; i++){
            while(i<n && s[i]!=' '){

                word+=s[i];
                i++;

            }
            reverse(word.begin(),word.end());
            if(word.length()>0){
                ans+=" "+word;
                word="";

            }
        }
        if (ans.empty())
             return "";
         return ans.substr(1);



        }
       
        
    
};