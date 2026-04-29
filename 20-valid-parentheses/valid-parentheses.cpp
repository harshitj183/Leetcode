class Solution {
public:
    bool isValid(string s) {
        stack<char> stc;

        for (char c : s) {

            if (c == '(' || c == '{' || c == '[') {
                stc.push(c);
            } 
            else {
                if (stc.empty()) return false;

                if (c == ')' && stc.top() == '(') stc.pop();
                else if (c == '}' && stc.top() == '{') stc.pop();
                else if (c == ']' && stc.top() == '[') stc.pop();
                else return false;
            }
        }

        return stc.empty();
    }
};