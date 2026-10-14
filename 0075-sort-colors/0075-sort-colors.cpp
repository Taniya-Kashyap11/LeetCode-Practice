class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros=0;
        int ones=0;
        int two=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zeros++;
            }else if(nums[i]==1){
                ones++;
            }else if(nums[i]==2){
                two++;
            }
        }
        int i=0;
        while(zeros){
            nums[i]=0;
            zeros--;
            i++;
        }
          while(ones){
            nums[i]=1;
            ones--;
            i++;
        }
          while(two){
            nums[i]=2;
            two--;
            i++;
        }
    }
};