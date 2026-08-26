class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=INT_MIN;
        int product_from_start=1;
        int product_from_end=1;
        for(int i=0;i<nums.size();i++)
        {
            if(product_from_start==0) product_from_start=1;
            if(product_from_end==0) product_from_end=1;
            product_from_start*=nums[i];
            product_from_end*=nums[nums.size()-i-1];
             ans = max(ans, max(product_from_start,product_from_end));
        }
        return ans;
    }
};