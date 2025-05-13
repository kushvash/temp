class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> helper(nums.begin(), nums.end());
        int longest=0;

        for(int num: nums){
            if(helper.find(num-1)==helper.end()){
                int curr=0;

                while(helper.find(num)!=helper.end()){
                    curr++;
                    num++;
                }

                longest=max(longest, curr);
            }
        }

        return longest;

    }
};