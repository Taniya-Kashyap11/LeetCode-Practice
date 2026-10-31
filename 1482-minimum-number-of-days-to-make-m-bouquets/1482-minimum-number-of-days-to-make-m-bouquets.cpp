class Solution {
public:
    bool isPossible(vector<int>& bloomDay,int m,int k,int day){
        int cnt=0;
        int bq=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                cnt++;
            }else{
                bq+=cnt/k;
                cnt=0;
            }

        }
        bq+=cnt/k;
        return bq>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long total = 1LL*m*k;
        if(total>bloomDay.size()){
            return -1;
        }
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(low<=high){
            int mid = low + (high - low) / 2;

            if(isPossible(bloomDay, m, k,mid)) {

                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }
};