class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            while(n>0){
                int rem=n%10;
                if(rem==digit){
                    cnt++;
                }
                n/=10;
            }
        }
        return cnt;
    }
};