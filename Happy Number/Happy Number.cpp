class Solution {
public:
    int squaresCal(int n) {
        int ans=0, p;

        while(n){
            p=n%10;
            ans+=p*p;
            n/=10;
        }

        return ans;
    }

    bool isHappy(int n) {
        int s=squaresCal(n), f=squaresCal(squaresCal(n));

        while(s!=f){
            if(f==1){
                return true;
            }

            s=squaresCal(n); 
            f=squaresCal(squaresCal(n));
        }

        return false;

    }
};