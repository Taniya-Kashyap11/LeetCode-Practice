class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
       map<int,int> mp;
       for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
       }
        int mul=k;
        while(mp.count(mul)){
            mul+=k;
        }
       return mul;
    }
};