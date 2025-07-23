class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int start = 0, end = nums.size()-1,mid=0,neg=-1,pos=nums.size();
        //For negetive 
        while(start<=end){
            mid = start + (end - start) / 2;
            if(nums[mid]>=0){
                end = mid-1;
            }else{
                start = mid+1;
                neg = mid;
            }
        }
        //For positive
        start = 0;end=nums.size()-1;
        while(start<=end){
            mid = start + (end - start) / 2;
            if(nums[mid]<=0){
                start = mid+1;
            }else{
                end = mid-1;
                pos = mid;
            }
        }
        int negCount = (neg == -1) ? 0 : neg + 1;
    int posCount = (pos == nums.size()) ? 0 : nums.size() - pos;
    return max(negCount, posCount);
        
    }
};