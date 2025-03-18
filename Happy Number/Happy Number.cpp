class Solution {
public:
    bool isHappy(int n) {
        if(n==1){
            return true;
        }else if(n>1 && n<10){
            return false;
        }

        int k=n, p=0;

        while(k>0){
            p+=(k%10)*(k%10);
            k/=10;
        }


        return isHappy(p);
    }
};