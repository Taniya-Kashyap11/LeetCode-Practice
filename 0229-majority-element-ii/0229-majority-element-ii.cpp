class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> counts;
        int times=nums.size()/3;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            counts[nums[i]]++;
        }
        for(auto& pair: counts){
            if(pair.second>times){
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
};