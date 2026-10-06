class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        char ch;
        for(int i=0;i<s.size();i++){
            ch=s[i];
            int val=('z'-ch+1);
            sum+=(val*(i+1));
        }
        return sum;
    }
};