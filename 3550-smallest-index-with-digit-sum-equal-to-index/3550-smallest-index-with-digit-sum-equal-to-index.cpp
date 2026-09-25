class Solution {
public:
    int sumOfDigits(int n){
        int sum=0;
        while(n>0){
            sum+=(n%10);
            n/=10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=10){
             int sum=sumOfDigits(nums[i]);
                if(sum==i){
                    return i;
                }
            }else{
                if(i==nums[i]){
                    return i;
                }
            }
        }
        return -1;
    }
};