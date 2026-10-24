class Solution {
public:
    int search(vector<int>& nums, int target) {
     int st=0;
     int end=nums.size()-1;
     while(st<=end){
        int mid=(end+st)/2;
        if(nums[mid]==target){
            return mid;
        }
         if(nums[st]<=nums[mid]){//Indentifying the sorted half
            if(nums[st]<=target && nums[mid]>=target){  //check the target
                end=mid-1; 
            }else{
                st=mid+1;
            }
         }
         else{ // unsorted half
            if(nums[mid]<=target && nums[end]>=target){
                st=mid+1;
            }else{
                end=mid-1;
            }   
         }
     }
     return -1;
    }
};