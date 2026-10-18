class Solution {
public:
    int mySqrt(int x) {
     if(x==0 || x==1){
        return x;
     }
     long long i=1;
     long long j=x;
     long long mid;
     long ans=1;
     while(i<=j){
         mid=i+(j-i)/2;
        if(mid*mid<=x){
            ans= mid;
             i=mid+1;
        }else{
            j=mid-1;
        }
     }
     return ans;
    }
};