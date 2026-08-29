class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        long long n;
        while(num>0){
            int rev=num%10;
            n=n*10 +rev;
            num/=10;
        }
        return n==x?true:false;
    }
};