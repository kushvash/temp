class Solution {
public:
    bool validPalindrome(string s) {
        int left=0, right=s.length()-1;

        while(left<right){
            if(s[left]!=s[right]){
                
            }
            left++;
            right--;
        }
        return true;
    }

private:
    bool isPalindrome(string s, int left, int right){
        while(left<right){
            if(s[left]!=s[right]){
                return false;   
            }
            left++;
            right--;
        }

        return true;
    }
};