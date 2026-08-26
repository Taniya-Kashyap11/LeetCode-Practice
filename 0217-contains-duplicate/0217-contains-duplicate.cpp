class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> res;
        for(int i=0;i<nums.size();i++){
            if(res.count(nums[i])){
                return true;
            }
            res.insert(nums[i]);
        }
        return false;
    }
};