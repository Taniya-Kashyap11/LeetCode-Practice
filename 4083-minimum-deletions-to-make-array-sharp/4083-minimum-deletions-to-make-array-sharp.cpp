class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int count=0;
        for(int i=1;i<nums.size();i++){
            int a=nums[i];
            int b=nums[i-1];
            if(a==b){
                count++;
            }
        }
        return count;
    }
};