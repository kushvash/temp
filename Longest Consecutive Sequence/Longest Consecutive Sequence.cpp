class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // unordered_set<int> helper(nums.begin(), nums.end());
        // int longest=0;

        // for(int num: nums){
        //     if(helper.find(num-1)==helper.end()){
        //         int curr=1;

        //         while(helper.find(num+curr)!=helper.end()){
        //             curr++;
        //         }

        //         longest=max(longest, curr);
        //     }
        // }

        // return longest;

        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;

        for (int num : nums) {
            if (numSet.find(num - 1) == numSet.end()) {
                int length = 1;
                while (numSet.find(num + length) != numSet.end()) {
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;

    }
};