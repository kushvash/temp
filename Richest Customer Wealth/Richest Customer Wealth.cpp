class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxW=0;

        for(int i=0; i<accounts.size(); i++){
            int curr=0;
            for(int j=0; j<accounts[i].size(); j++){
                curr+=accounts[i][j];
            }

            if(curr>maxW){
                maxW=curr;
            }
        }

        return maxW;
    }
};