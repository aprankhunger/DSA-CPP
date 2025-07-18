class Solution {
public:
    int mySqrt(int x) {
        int start=0,end = x,mid,ans=1;
        if(x==0||x==1)
        return x;
        while(start<=end){
            mid = (start+end)/2;
            if(mid==x/mid){
                return mid;
            }else if(mid<x/mid){
                ans=mid;
                start = mid+1;
            }else{
                // ans=mid;
                end =mid -1;
            }
        }
        return ans;
        
    }
};