class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            while(nums[i]!=i){
                if(nums[i]<0 || nums[i]>=nums.size()){
                    break;
                }
                swap(nums[i], nums[nums[i]]);
            }
        }

        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=i){
                return i;
            }
        }

        return nums.size();
    }
};