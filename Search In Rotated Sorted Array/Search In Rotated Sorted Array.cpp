class Solution {
public:
    int search(vector<int>& nums, int target) {
        int t=nums[0], lo=0, hi=nums.size()-1, mid, start=-1;

        while(lo<hi){
            mid=lo+(hi-lo)/2;

            if(nums[mid]<t){
                hi=mid;
            }else if(nums[mid]>=t){
                lo=mid+1;
            }
        }

        int n=lo;

        lo=0;
        hi=nums.size()-1;

        if(target >= nums[n] && target <= nums[hi]){
            lo = n;
        }else{
            hi=n-1;
        }


        while (lo < hi) {
            mid=lo+(hi-lo)/2;

            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>=target){
                hi=mid;
            }else{
                lo=mid+1;
            }
        }

        return -1;

    }
};