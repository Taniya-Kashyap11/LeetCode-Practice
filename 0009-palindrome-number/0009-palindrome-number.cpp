class Solution {
public:
    bool isPalindrome(int x) {
      int n=x;
      long long rev;
    int rem;
      while(x>0){
        rem=x%10;
        rev=rev*10+rem;
        x/=10;
      }
      return n==rev?true:false;
    }
    
};