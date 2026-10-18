class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //Brute Force
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                if(sum==k)
                {
                    cnt++;
                }
            }
        }
        return cnt;
    // ========================================
    //optimal
    //  map<int,int> res;
    // int prefixSum=0;
    // res[0]=1;
    // int cnt=0;
    // for(int i=0;i<nums.size();i++)
    // {
    //     prefixSum+=nums[i];
    //     int remove=prefixSum-k;
    //     cnt += res[remove];
    //     res[prefixSum]++;
    // }
    // return cnt;
    }
};