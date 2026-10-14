class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int i=0;
        int maxi=0;
        while(i<nums.size()){
            if(nums[i]==1){
                cnt+=1;
                     maxi=max(cnt,maxi);
            }
            if(nums[i]==0){
            
                cnt=0;
            }
            i++;
        }
        return maxi;
    }
};