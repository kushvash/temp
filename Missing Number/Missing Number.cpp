class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0;

        while(i<nums.size()){
            if(nums[i]==i){
                i++;
            }else{
                swap(nums[i], nums[nums[i]]);
            }
        }

        for(i=0; i<nums.size(); i++){
            if(i!=nums[i]){
                return i;
            }
        }

        return nums.size();
    }
};