class Solution {
public:
int findMax(vector<int> arr,int n){
    int ele=INT_MIN;
    for(int i=0;i<n;i++){
        ele=max(ele,arr[i]);
    }
    return ele;
}
long long findHours(vector<int> arr,int mid){
    int n=arr.size();
    long long rh=0;
    for(int i=0;i<n;i++){
        rh+=(arr[i] + (long long)mid - 1) / mid;
    }
    return rh;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int n=piles.size();
        int high=findMax(piles,n);
        int ans=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            long long totalHours=findHours(piles,mid);
            if(totalHours<=h){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};