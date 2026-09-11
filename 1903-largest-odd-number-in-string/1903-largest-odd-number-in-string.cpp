class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size()-1;
        while(n>=0){
                if((num[n]-'0')%2==1){  // odd number/digit
                    return num.substr(0,n+1);
                }
                else{
                    n--;
                }
        }
        return "";
    }
};