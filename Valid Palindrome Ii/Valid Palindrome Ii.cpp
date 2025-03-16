class Solution {
public:
    bool validPalindrome(string s) {
        int left=0, right=s.length()-1;
        bool first = true;

        while(left<right){
            if(s[left]!=s[right]){
                if(first){
                    if(s[left]==s[right-1]){
                        right--;
                        first=false;
                    }else if(s[left+1]==s[right]){
                        left++;
                        first=false;
                    }else{
                        return false;
                    }
                }else{
                    return false;
                }
            }else{
                left++;
                right--;
            }
        }
        return true;
    }
};