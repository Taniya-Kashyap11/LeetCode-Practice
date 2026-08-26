class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int,int> mp;
         for(int i=0;i<nums.size();i++){
            int x=target-nums[i];// calculating for another number required to acheive the target
            if(mp.count(x)){ // checking the another number 
                return{mp[x],i}; // if present returning the indexes of both
            }
            mp[nums[i]]=i; // storing number as key and index as value
         }
         return {};
    }
};