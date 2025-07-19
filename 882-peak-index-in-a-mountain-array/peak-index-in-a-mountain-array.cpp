class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int mid,start = 0,end = arr.size()-1,ans;
        while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1]){
            return mid;
        }else if(arr[mid]>arr[mid-1]){
            start=mid;
            ans=mid;
        }else{
            end = mid;
        }
        }
        return ans;
    }
};