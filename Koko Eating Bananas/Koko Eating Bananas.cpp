class Solution {
public:
    int bananasFinished(vector<int>& piles, int speed){
        int total=0;
        for(int i=0; i<piles.size(); i++){
            total+=ceil(static_cast<double>(piles[i]) / speed);
        }

        return total;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int lo=1, mid, hi=0;

        for(int num: piles){
            hi=max(hi, num);
        }

        while(lo<=hi){
            mid=lo+((hi-lo)/2);

            if(bananasFinished(piles, mid)<=h){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }

        return lo;
    }
};