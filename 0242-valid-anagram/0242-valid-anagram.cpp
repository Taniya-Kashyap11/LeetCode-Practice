class Solution {
public:
    bool isAnagram(string s, string t) {
        // unordered_map<int,int> m1;
        // unordered_map<int,int> m2;
        // if(s.size()!=t.size())
        // return false;
        // for(int i=0;i<s.size();i++){
        //     m1[s[i]]++;
        //     m2[t[i]]++;
        // }
        // if(m1==m2) return true;
        // return false;
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<int,int>mp;
        for(int i=0;i<s.size();i++){
            if(!mp[s[i]]){
                mp[s[i]]=1;
            }else{
                mp[s[i]]++;
            }
        }
        for(int i=0;i<t.size();i++){
            if(!mp[t[i]] || mp[t[i]]<0){
                return false;
            }else{
                mp[t[i]]--;
            }
        }
        return true;
    }
};