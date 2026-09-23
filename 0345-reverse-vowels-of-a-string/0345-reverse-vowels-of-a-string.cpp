class Solution {
public:
    bool isVowel(char ch){
        char c=tolower(ch);
        return c=='a' || c=='e' || c=='o' || c=='i' || c=='u';
    }
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(isVowel(s[i])&& isVowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }else if(!isVowel(s[i])){
                i++;
            }else{
                j--;
            }
     
        }
               return s;
    }
};