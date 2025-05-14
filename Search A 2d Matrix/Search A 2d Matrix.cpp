class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ROWS=matrix.size(), COLS=matrix[0].size(), lo=0, hi;

        hi=ROWS*COLS-1;

        while(lo<=hi){
            mid=lo+(hi-lo)/2;

            int row=mid/COLS, col=mid%COLS;

            if(matrix[row][col]==target){
                return true;
            }else if(matrix[row][col]>target){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }

        return false;
    }
};