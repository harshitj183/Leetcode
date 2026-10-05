class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> stk;
        stk.push(0);

        for (char c : s) {
            if (c == '(') {
                stk.push(0);
            } 
            else {
                int x = stk.top();
                stk.pop();

                int score = (x == 0) ? 1 : 2 * x;

                stk.top() += score;
            }
        }

        return stk.top();
    }
};