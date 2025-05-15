class Solution {
public:
    bool isValid(string s) {
        stack<char> helper;
        unordered_map<char, char> dict={
            {'}', '{'},
            {']', '['},
            {')', '('}
        };

        for(char c: s){
            if(c=='{' || c=='[' || c=='('){
                helper.push(c);
            }else{
                if(helper.top()!=dict[c] && !helper.empty()){
                    return false;
                }
                helper.pop();
            }
        }

        return helper.empty();
    }
};