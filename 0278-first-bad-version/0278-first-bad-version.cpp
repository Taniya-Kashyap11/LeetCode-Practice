// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i=1;
        int j=n;
        while(i<=j){
           int  mid=i+(j-i)/2;
           int x=mid-1;
            int bad1=isBadVersion(mid);
            int bad2=isBadVersion(x);
            if(bad1==true && bad2==false){
                return mid;
            }else if(bad2==true){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return -1;
    }
};