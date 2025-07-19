class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0,end=nums.size()-1,mid,ans=nums[0];
        while(start<=end){
            mid = end+(start-end)/2;
            if(nums[0]<=nums[mid]){
                start = mid+1;
            }else {
                end=mid-1;
                ans=nums[mid];
            }
        }
        return ans;
    }
};