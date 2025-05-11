class Solution {
public:
    int mySqrt(int x) {
        int n=0;

        while(n<x/2+1){
            if(n*n==x){
                return n;
            }else if(n*n>x){
                return n-1;
            }
            n++;
        }

        return 1;
    }
};